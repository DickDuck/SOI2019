// ******************************
// MERGEBALL ST4
// ******************************
// Case #0: 4 1 2 4 8
// Case #1: 3 12 24 48

#include "soi.h"
void main() {
    // inputShit
    int Tanzahl;
    cin>> Tanzahl;
    for(int b=0; b<=Tanzahl; b++){
        int Nzahlen, Cmax;
        cin>> Nzahlen; //unwichtig -> UEBERSPRINGEN immer = 1
        cin>> Cmax;
        int PiNumb;
        cin>> PiNumb;
        if (PiNumb > Cmax){
            cout<< "Case #" << b << ": " << 0 << "\n";
            break;
        }
        // cout<< "****** DAS IST DIE PiNumb!!!   " << PiNumb << "\n";
        int Durchlauf = 1; // sagt wie viele zwischenErgebnisse
        vector<int>meinVector(0);
        meinVector.push_back(PiNumb);
        while(true){        // vielleicht braucht man irgendwo einen Vektor um die zwischenErgebnisse zu speichern!!??
            Durchlauf += 1;
            PiNumb *= 2;
            if(PiNumb > Cmax){
                Durchlauf -= 1;
                PiNumb /= 2;
                break;
            }
            else{
                meinVector.push_back(PiNumb);
            }
        }
        cout<< "Case #" << b << ": " << Durchlauf << " ";
        for (vector<int>::iterator sumN = meinVector.begin(); sumN!= meinVector.end(); ++sumN){
            cout<< *sumN << " ";
        }
        cout<< "\n";   // alles KOMISCH!!!
    }
}