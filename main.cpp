#include <iostream>
using namespace std;

int main() {
    // Pattern A
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    // Pattern B
    for (int i = 10; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
