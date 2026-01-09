#include <iostream>
#include "Hospital.h"
#include "EmergencyPatient.h"
#include "Patient.h"
using namespace std;

int main()
{
    // Create hospital with 2 beds
    Hospital hospital(2);

    // Create emergency patients
    EmergencyPatient p1("Alex", 45, 140, 39.0, 88); // very urgent
    EmergencyPatient p2("Sam", 30, 110, 37.5, 95);  // less urgent

    // Display initial hospital status
    hospital.showStatus();

    // Attempt to admit patients based on priority
    hospital.admit(&p1); // Admit first patient
    hospital.showStatus(); // Check beds left

    hospital.admit(&p2); // Admit second patient
    hospital.showStatus(); // Check beds left

    return 0;
}