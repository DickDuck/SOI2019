#include "soi.h"
void main() {
    int z;
    cin >> z;
    cout << z << "\n";
    cout << "*******************" << "\n";
    for(int i = z; i >= 0; i -= 1) {
        int Seite;
        Seite = 1 + i * 2;
        cout << Seite << "\n";
        if(i == z){  //for the first line of only the first char
            for(int k = 0; k <= z; k++) {
                cout << i;
            }
        }

    }

} 