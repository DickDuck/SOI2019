#include "soi.h"
void main() {
    int Xkor;
    int Ykor;
    int Answer;
    Answer = 0;
    cin >> Xkor;
    cin >> Ykor;

    //cout << Xkor << "     " << Ykor << "\n";
    
    int Xtest;
    Xtest = Xkor - 2;
    //cout << Xtest << "  Xtest" << "\n";

    if(Xkor == Ykor) {
        if(Xkor % 2 == 0) {
            Answer = 2 * Xkor;
        }
        else{
            Answer = Ykor * 2 - 1;
        }
        cout << Answer;
    }

    else if(Xtest == Ykor) {
        if(Xkor % 2 == 0) {
            Answer = Xkor + Ykor;
        }
        else {
            Answer = Xkor + Ykor - 1;
        }
        cout << Answer;
    }

    else {
        cout << "Never";
    }
}
