#include <iostream>
using namespace std;

int main() {
    char znak;
    int broj = 0;
    int sum = 0;
    bool insideNumber = false; 
    int cifraCount = 0; 

    while (cin >> noskipws >> znak) {
        if (znak == '!') {
           
            if (insideNumber) {
                if (cifraCount == 1 || broj >= 10) { 
                    sum += broj;
                }
            }
            break;
        }

        if (znak >= '0' && znak <= '9') {
           
            broj = broj * 10 + (znak - '0');
            insideNumber = true; 
            cifraCount++; 
        } else {
           
            if (insideNumber) {
                if (cifraCount == 1 || broj >= 10) {
                    sum += broj;
                }
            }
          
            broj = 0;
            insideNumber = false;
            cifraCount = 0;
        }
    }

  
    cout << sum << endl;

    return 0;
}
