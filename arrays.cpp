#include <iostream>
#include <string>
using namespace std;

int main() {
    double temps[7];
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", 
                      "Friday", "Saturday", "Sunday"};

    // Get input from user
    cout << "Enter the temperatures for days (7 days of week):" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Day " << (i + 1) << ": ";
        cin >> temps[i];
    }

    // Initialize variables for analysis
    double highest = temps[0];
    double lowest = temps[0];
    double sum = 0;
    int days_above_80 = 0;
    int day_highest_temp = 0;

    // Analyze the data in one loop
    for (int i = 0; i < 7; i++) {
        // Check for highest temperature
        if (temps[i] > highest) {
            highest = temps[i];
            day_highest_temp = i;  // Remember which day
        }
        
        // Check for lowest temperature
        if (temps[i] < lowest) {
            lowest = temps[i];
        }
        
        // Add to sum for average calculation
        sum += temps[i];
        
        // Count days above 80
        if (temps[i] > 80) {
            days_above_80++;
        }
    }

    // Calculate average
    double average = sum / 7;

    // Display results
    cout << "\n=== Weather Report ===" << endl;
    cout << "Highest temp: " << highest << " degrees (" << days[day_highest_temp] << ")" << endl;
    cout << "Lowest temp: " << lowest << " degrees" << endl;
    cout << "Average temp: " << average << " degrees" << endl;
    cout << "Days above 80: " << days_above_80 << " days" << endl;

    return 0;
}