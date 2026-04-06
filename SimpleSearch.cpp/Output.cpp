#include <iostream>
#include <string>
using namespace std;

int main() {
    // The array of names
    string names[] = {"Nimo", "Mawahib", "Hodan", "Ahmed", "Mustafa", "Kays"};

    // The value we are searching for
    string searchTerm = "Nimo"; // Change this to test with different names

    bool found = false;

    // Loop through the array
    for (int i = 0; i < 6; i++) {
        if (names[i] == searchTerm) {
            found = true;
            break; // No need to continue once found
        }
    }

    // Output result
    if (found) {
        cout << searchTerm << " was found in the array!" << endl;
    } else {
        cout << searchTerm << " was NOT found in the array." << endl;
    }

    return 0;
}