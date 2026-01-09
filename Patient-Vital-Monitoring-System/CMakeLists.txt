cmake_minimum_required(VERSION 4.0)
project(Patient_Vital_Monitoring_System)

set(CMAKE_CXX_STANDARD 11)

add_executable(Patient_Vital_Monitoring_System main.cpp
        Patient.h
        Patient.cpp
        Emergency.cpp
        EmergencyPatient.h
        Hospital.h
        Hospital.cpp)
