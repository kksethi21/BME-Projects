// Drug Dosage Safety Checker
// Author: Keerath Sethi
// Description: Calculates safe drug dosage ranges based on patient weight
//              and flags potential overdose or underdose risks.

#include <iostream>
#include <string>
using namespace std;

struct Drug
{
    string name;
    double minDose; // mg per kg
    double maxDose;
};

int main()
{
    Drug paracetamol = {"Paracetamol", 10, 15};
    Drug ibuprofen = {"Ibuprofen", 5, 10};

    double weight, age;
    string drugName;

    cout << "Enter patient weight (kg): ";
    cin >> weight;

    cout << "Enter patient age (years): ";
    cin >> age;

    cout << "Enter drug (Paracetamol/Ibuprofen): ";
    cin >> drugName;

    double minSafe, maxSafe;

    if (drugName == "Paracetamol")
    {
        minSafe = paracetamol.minDose * weight;
        maxSafe = paracetamol.maxDose * weight;
    }
    else if (drugName == "Ibuprofen")
    {
        minSafe = ibuprofen.minDose * weight;
        maxSafe = ibuprofen.maxDose * weight;
    }
    else
    {
        cout << "Unknown drug!" << endl;
        return 0;
    }

    double prescribedDose;

    cout << "Enter prescribed dose (mg): ";
    cin >> prescribedDose;

    if (weight <= 0 || age <= 0 || prescribedDose <= 0)
    {
        cout << "Error: Invalid input. All values must be positive." << endl;
        return 0;
    }

    if (prescribedDose < minSafe)
    {
        cout << "ALERT: Dose too low - may be ineffective." << endl;
    }
    else if (prescribedDose > maxSafe)
    {
        cout << "ALERT: Dose too high - may be ineffective." << endl;
    }
    else
    {
        cout << "Dose is within the safe range." << endl;
    }

    if (age < 1)
    {
        cout << "Warning: Infant patient - dosage requires extra caution." << endl;
    }

    cout << "\n--- Dosage Summary ---" << endl;
    cout << "Drug: " << drugName << endl;
    cout << "Patient weight: " << weight << " kg" << endl;
    cout << "Prescribed dose: " << prescribedDose << " mg" << endl;
    cout << "Safe dosage range: " << minSafe << " mg - " << maxSafe << " mg" << endl;

    return 0;
}
