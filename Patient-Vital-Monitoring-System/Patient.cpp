#include "Patient.h"
#include <iostream>
using namespace std;

// Constructor: initializes patient data
Patient::Patient(string n, int a, int hr, double t, int ox)
    : name(n), age(a), heartRate(hr), temperature(t), oxygen(ox) {}

// Determines patient priority based on vitals
Priority Patient::getPriority()
{
    if (oxygen < 90 || heartRate > 130) // dangerously low oxygen or very high heart rate
        return CRITICAL;
    else if (oxygen < 94 || temperature > 38) // warning-level vitals
        return HIGH;
    else
        return MEDIUM; // normal but needs monitoring
}


// Displays patient info
void Patient::display()
{
    cout << "Patient: " << name << " | Priority: " << getPriority() << endl;
}