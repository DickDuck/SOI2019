#include "soi.h"
void main() {
    int a, b , c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a == 0) {
        cout << b+c;
    }
    else if(a == 1) {
        cout << b-c;
    }
    else {
        cout << b*c;
    }
}