#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

// Enum to define priority levels for triage
enum Priority {LOW, MEDIUM, HIGH, CRITICAL};

// Base class representing a generic patient
class Patient
{
protected:
    string name; // Patient's name
    int age;     // Patient's age
    int heartRate; // Heart rate in bpm
    double temperature; // Body temperature in Celsius
    int oxygen; // Oxygen saturation %


public:
    // Constructor to initialize a patient
    Patient(string n, int a, int hr, double t, int ox);

    // Virtual function to determine priority of patient
    virtual Priority getPriority();

    // Virtual function to display patient info
    virtual void display();
};

#endif