cmake_minimum_required(VERSION 3.30)
project(Online_Food_Ordering_Application)

set(CMAKE_CXX_STANDARD 20)

add_executable(Online_Food_Ordering_Application main.cpp
        Customer.cpp
        Customer.h
        Menu.cpp
        Menu.h
        Order.cpp
        Order.h
        Feedback.cpp
        Feedback.h
        Report.cpp
        Report.h
)
