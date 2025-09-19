cmake_minimum_required(VERSION 3.16)
project(QtComboExample LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Core)

# Active les réglages standards Qt (AUTOMOC, AUTORCC, etc)
qt_standard_project_setup()

# Bibliothèque Qt avec B.cpp et B.h (Q_OBJECT dans header+cpp)
qt_add_library(MyLib STATIC
    B.cpp
    A.h    # Important pour que moc soit généré pour A
)
target_link_libraries(MyLib PRIVATE Qt6::Core)

# Exécutable principal avec main.cpp, A.h (Q_OBJECT dans header seul) et dépend de la lib
qt_add_executable(AppStudy
    main.cpp
)
target_link_libraries(AppStudy PRIVATE Qt6::Core MyLib)
