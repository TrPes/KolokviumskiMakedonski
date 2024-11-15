#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n <= 9) {
        cout << "Brojot ne e validen" << endl;
        return 0;
    }


    for (int i = n - 1; i >= 9; i--) {
        int original = i;
        int reversed = 0;
        int digitCount = 0;


        while (original > 0) {
            reversed = reversed * 10 + original % 10;
            original /= 10;
            digitCount++;
        }


        if (reversed % digitCount == 0) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
