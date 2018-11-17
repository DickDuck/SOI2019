// ******************************
// MERGEBALL ST2
// ******************************
// Case #0: Multiple
// Case #1: Single

#include "soi.h"
void main() {
    vector<int>primZ(0);
    primZ.push_back(3);
    primZ.push_back(5);    // ich brauche gar nicht so eine riesige liste!!!!  /2!!!!
    primZ.push_back(7);
    for(int i=2; i<1000; i++){
        if (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0){
            primZ.push_back(i);
        }
    }
    int TInputs, kBalls;
    std:: cin>> TInputs;
    for(int i=0; i< TInputs; i++){
        std::cin>> kBalls;
        for (int i=0; i<kBalls; i++){ // überspringr einfach die eigentlichen Zahlen
            int einInput;
            std::cin>> einInput;
        }
        //for()   // hier wird gecheckt ob die N durch eine Primzahl teilbar ist
    }
}