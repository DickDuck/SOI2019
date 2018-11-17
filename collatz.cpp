#include "soi.h"
void main() {
    int n;
    cin >> n;
    if(n == 1) {
        cout << 0;
    }
    //cout << n << "\n";
    else {
        int Anzahl_D;
        Anzahl_D = 0;
        while(true) { // Hier muss man eine while-Schleife brauchen brauchen mit falls n == 1 => break
            if(n%2 == 0) {
                n = n/2;
            }
            else if(n%2 != 0) {
                n = 3*n + 1;
            }
            //cout << n << "\n";
            Anzahl_D += 1;
            if(n == 1){
                //cout << "***************" << "\n";
                cout << Anzahl_D;
                break;
            }
        }
    }
}
