#include <iostream>
using namespace std;

// Function Prototypes
void DisplayMenu();
void RainfallIntensity();
void RunoffVolume();
void RiverDischarge();
void FloodRiskLevel();

int main() {
    int choice;
    char confirm;

    do {
        DisplayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: RainfallIntensity(); break;
            case 2: RunoffVolume(); break;
            case 3: RiverDischarge(); break;
            case 4: FloodRiskLevel(); break;
            case 5: cout << "Exiting..." << endl; return 0;
            default: cout << "Invalid Selection!" << endl;
        }

        cout << "Do you want to perform another calculation? (Y/N): ";
        cin >> confirm;
        cout << "-----------------------------------------------------" << endl;

    } while (confirm == 'Y' || confirm == 'y');

    cout << "Thank you for using the Flood Prediction System!" << endl;
    return 0;
}

void DisplayMenu() {
    cout << "1. Calculate Rainfall Intensity\n2. Calculate Runoff Volume\n";
    cout << "3. Estimate River Discharge\n4. Determine Flood Risk Level\n5. Exit" << endl;
}

void RainfallIntensity() {
    double r, t;
    cout << "Enter rainfall amount (mm): "; cin >> r;
    cout << "Enter duration (hours): "; cin >> t;
    cout << "Rainfall intensity is: " << (r / t) << " mm/hr" << endl;
}

void RunoffVolume() {
    double c, r, a;
    cout << "Enter runoff coefficient: "; cin >> c;
    cout << "Enter rainfall (mm): "; cin >> r;
    cout << "Enter catchment area (km^2): "; cin >> a;
    cout << "Runoff volume is: " << (c * r * a) << endl;
}

void RiverDischarge() {
    double rv, t;
    cout << "Enter runoff volume: "; cin >> rv;
    cout << "Enter time (hours): "; cin >> t;
    cout << "Discharge is: " << (rv / (t * 3600)) << " m^3/s" << endl;
}

void FloodRiskLevel() {
    double q;
    cout << "Enter discharge (m^3/s): "; cin >> q;
    if (q < 500) cout << "Flood Risk Level: LOW RISK" << endl;
    else if (q < 1500) cout << "Flood Risk Level: MODERATE RISK" << endl;
    else cout << "Flood Risk Level: HIGH RISK" << endl;
}