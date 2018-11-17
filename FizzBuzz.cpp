#include "soi.h"
void main() {
    int z;
    cin >> z;
    for(int e = 1; e <= z; e ++) {
        if(e%5 == 0 && e%3 == 0) {
            cout << "FizzBuzz" << "\n";
        }
        else if(e%3 == 0) {
            cout << "Fizz" << "\n";
        }
        else if(e%5 == 0){
            cout << "Buzz" << "\n";
        }
        else{
            cout << e << "\n";
        }
    }
}
