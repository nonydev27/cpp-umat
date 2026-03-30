#include <iostream>
using namespace std;

// Function to compute surface runoff volume
void RunoffVolume() {
    double C, R, A;
    cout << "Enter runoff coefficient (0.3 to 0.9): ";
    cin >> C;
    cout << "Enter rainfall (mm): ";
    cin >> R;
    cout << "Enter catchment area (km^2): ";
    cin >> A;
    
    double RV = C * R * A;
    cout << "Runoff volume is: " << RV << endl;
}

int main() {
    RunoffVolume();
    return 0;
}