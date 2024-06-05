cmake_minimum_required(VERSION 3.28)
project(untitled25)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled25 main.cpp
        Laptop.h
        Laptop.cpp
        Catalog.h
        Catalog.cpp
        utils.cpp
        utils.h
        Params.cpp
        Params.h
        Money.cpp
        Money.h
        MoneyUnit.cpp
        MoneyUnit.h
        LaptopSpec.cpp
        LaptopSpec.h
)
