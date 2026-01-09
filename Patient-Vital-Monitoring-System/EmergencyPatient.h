#ifndef EMERGENCY_PATIENT_H
#define EMERGENCY_PATIENT_H

#include "Patient.h"

// Derived class for emergency patients
class EmergencyPatient : public Patient
{
public:
    EmergencyPatient(string n, int a, int hr, double t, int ox);

    // Overrides base priority for emergency patients
    Priority getPriority();
};

#endif