#include "Hospital.h"
#include <iostream>
using namespace std;

// Constructor: sets up total and available beds
Hospital::Hospital(int beds)
{
    totalBeds = beds;
    availableBeds = beds;
}

// Admit a patient based on priority and available beds
void Hospital::admit(Patient* p)
{
    cout << "\nEvaluating patient...\n";

    // Display patient information
    p->display();

    // Check if any beds are left
    if (availableBeds <= 0)
    {
        cout << "No beds available\n";
        return;
    }

    // Admit patient if priority is HIGH or CRITICAL
    if (p->getPriority() >= HIGH)
    {
        availableBeds--;
        cout << "Patient admitted\n";
    }
    else
    {
        cout << "Patient not urgent enough for admission\n";
    }
}

// Show current bed availability
void Hospital::showStatus()
{
    cout << "Beds available: " << availableBeds << "/" << totalBeds << endl;
}