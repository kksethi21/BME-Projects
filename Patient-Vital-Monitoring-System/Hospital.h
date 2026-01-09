#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <vector>
#include "Patient.h"

// Class representing hospital resources
class Hospital
{
private:
    int totalBeds; // Total beds in hospital
    int availableBeds; // Beds currently available

public:
    Hospital(int beds); // Constructor to set total beds
    void admit(Patient* p); // Admit patient based on priority
    void showStatus(); // Display current bed availability
};

#endif