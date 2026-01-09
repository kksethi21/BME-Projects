#include "EmergencyPatient.h"

// Constructor for emergency patient
EmergencyPatient::EmergencyPatient(string n, int a, int hr, double t, int ox)
    : Patient(n, a, hr, t, ox) {}

// Emergency patients have stricter thresholds for critical status
Priority EmergencyPatient::getPriority()
{
    if (oxygen < 92 || heartRate > 120) // slightly stricter than for normal patients
        return CRITICAL;
    return HIGH; // else high priority
}