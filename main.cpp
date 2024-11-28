#include <iostream>
#include <string>
using namespace std;

int main() {
    // Welcome message and name input
    cout << "Hello User! What's your name?" << endl;
    string name;
    getline(cin, name);
    cout << "Hey " << name << "!" << endl;

    // Input caste
    cout << "Enter your caste (1: General, 2: OBC, 3: SC, 4: ST): ";
    int caste;
    cin >> caste;

    // Input marks
    cout << "Enter your marks: ";
    int marks;
    cin >> marks;

    // Check selection criteria
    bool isSelected = false;

    if (caste == 1 && marks >= 60) {
        isSelected = true;
    } else if (caste == 2 && marks >= 55) {
        isSelected = true;
    } else if (caste == 3 && marks >= 50) {
        isSelected = true;
    } else if (caste == 4 && marks >= 40) {
        isSelected = true;
    }

    // Display result
    if (isSelected) {
        cout << "Congrats! You are selected." << endl;
    } else {
        cout << "Sorry! Better luck next time." << endl;
    }

    return 0;
}
