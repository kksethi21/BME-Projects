#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// Clinical thresholds for abnormal heart rates
const int LOW_HR = 50;
const int HIGH_HR = 120;

int main()
// Open CSV file
{
    std::ifstream file("data.csv");
    std::vector<int> heartRates;
    std::string line;

    if (!file.is_open())
    {
        std::cout << "File could not be opened" << std::endl;
        return 1;
    }

    // Skip CSV header
    std::getline(file, line);

    // Read heart rate data from file
    while (std::getline(file, line))
    {
        int value = std::stoi(line);
        if (value > 0)  // Only positive values
        {
            heartRates.push_back(value);
        }
    }

    // Check if vector has data
    if (heartRates.empty())
    {
        std::cout << "No valid heart rate data found." << std::endl;
        return 1;
    }

    // Compute min, max, average
    int minHR = heartRates[0];
    int maxHR = heartRates[0];
    int sum = 0;

    for (int hr : heartRates)
    {
        if (hr < minHR) minHR = hr;
        if (hr > maxHR) maxHR = hr;
        sum += hr;
    }

    double averageHR = static_cast<double>(sum) / static_cast<double>(heartRates.size());

    // Print summary
        std::cout << "\nHeart Rate Summary\n";
        std::cout << "------------------\n";
        std::cout << "Average HR: " << averageHR << "bpm\n";
        std::cout << "Minimum HR: " << minHR << "bpm\n";
        std::cout << "Maximum HR: " << maxHR << "bpm\n";

    // Detect abnormal readings
    std::cout << "\nAbnormal Readings:\n";
    std::cout << "------------------\n";

    bool hasAbnormal = false;

    for (int hr : heartRates)
    {
        if (hr < LOW_HR)
        {
            std::cout << "Low HR detected: " << hr << " bpm\n";
            hasAbnormal = true;
        }
        else if (hr > HIGH_HR)
        {
            std::cout << "High HR detected: " << hr << " bpm\n";
            hasAbnormal = true;
        }
    }

    if (!hasAbnormal)
    {
        std::cout << "No abnormal heart rates detected.\n";
    }
    return 0;
}