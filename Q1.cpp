#include <iostream>
using namespace std;

// The function below is used to display the menu
void DisplayMenu() {
    cout << "Welcome to the Flood Prediction System" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "1. Calculate Rainfall Intensity" << endl;
    cout << "2. Calculate Runoff Volume" << endl;
    cout << "3. Estimate River Discharge" << endl;
    cout << "4. Determine Flood Risk Level" << endl;
    cout << "5. Exit" << endl;
}

// This fuunction is useds to calculate Rainfall Intensity: RI = R / T yeah

void RainfallIntensity() {
    double R, T;
    cout << "Enter rainfall amount (mm): ";
    cin >> R;
    cout << "Enter duration (hours): ";
    cin >> T;
    if (T > 0) {
        cout << "Rainfall intensity is: " << (R / T) << " mm/hr" << endl;
    } else {
        cout << "Invalid duration!" << endl;
    }
}

int main() {
    DisplayMenu();
    RainfallIntensity();
    return 0;
}