// ******************************
// MERGEBALL ST2
// ******************************
// Case #0: Multiple
// Case #1: Single

#include "soi.h"
void main() {
    vector<int>primZahlenVector(0);     // creates a vector with all the possible primnumbers
    primZahlenVector.push_back(3);      // ugly solution
    primZahlenVector.push_back(5);
    primZahlenVector.push_back(7);
    for(int i=2; i<1000; i++){
        if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
            primZahlenVector.push_back(i);          // adds all the found primnumbers
        }
    }
    // cout<< primZahlenVector << "\n";
    int TInputs;   // T = ammount of question-sets
    cin>> TInputs;
    for(int i=0; i< TInputs; i++){
        int kBalls;
        cin>> kBalls;
        for (int i=0; i<kBalls; i++){  // these are pointless to find out the solution, but need to be inputed in order to ger ahead
            int einInput;
            cin>> einInput;
        }
        bool primbase = false;
        for (vector<int>::iterator primZahl = primZahlenVector.begin(); primZahl != primZahlenVector.end(); ++primZahl){  //iterates through the primZahlenVector
            // cout<< *primZahl << "\n";
            if (kBalls % *primZahl == 0){
                primbase = true;
                break;
            }
        }
        if(primbase == true){
            cout<< "Case #" << i << ": Multiple" << "\n";
        }
        else{
            cout<< "Case #" << i << ": Single" << "\n";
        }

    }
}