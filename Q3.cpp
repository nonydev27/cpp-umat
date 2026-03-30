#include <iostream>
using namespace std;

// Function to determine flood risk level
void FloodRiskLevel(double Q) {
    if (Q < 500) {
        cout << "Flood Risk Level: LOW RISK" << endl;
    } else if (Q >= 500 && Q < 1500) {
        cout << "Flood Risk Level: MODERATE RISK" << endl;
    } else {
        cout << "Flood Risk Level: HIGH RISK" << endl;
    }
}

int main() {
    double RV, T_hours;
    cout << "Enter runoff volume: ";
    cin >> RV;
    cout << "Enter time duration (hours): ";
    cin >> T_hours;

    double T_seconds = T_hours * 3600; // Convert hours to seconds
    double Q = RV / T_seconds;

    cout << "River Discharge: " << Q << " m^3/s" << endl;
    FloodRiskLevel(Q);

    return 0;
}