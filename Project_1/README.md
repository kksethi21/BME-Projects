#Physiological Signal Analyzer (C++)

This project is a simple C++ command-line tool that analyzes heart rate data from a CSV file.

## Features
- Reads heart data from a CSV file
- Computes average, minimum, and maximum heart rate
- Flags abnormal readings based on clinical thresholds

## Clinical Thresholds
- Low heart rate: < 50 bpm
- High heart rate: > 120 bpm

## Technologies Used
- C++
- Standard Library (vectors, file I/O)

## How to Run
1. Place `data.csv` in the project root or the working directory.
2. Compile the program:
```bash
g++ main.cpp -o analyzer