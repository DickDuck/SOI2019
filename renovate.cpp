#include "soi.h"
void main() {
    
    int hoehe;
    int breite;
    cin>> hoehe >> breite;
    cout<< "hoehe: " << hoehe << "breite: " << breite << "\n";

    vector<vector<int>>meinVector;    //dies ist de Vector in welchem dann die Zeilen gespeichert sind 2-dimensional
    meinVector.resize(breite);

    vector<int>fetterInputVector(0);    //Vector mit allen Zahlen drin 1-dimensional
    for (int i = 0; i<(hoehe*breite); i++){
        int Zahl;
        cin>> Zahl;
        fetterInputVector.push_back(Zahl);
    }
    cout<< "fetterInputVector: " << fetterInputVector << "\n";


    for(int Breiten=0; Breiten<=(breite-1); Breiten++){
        int antwort;
        antwort = fetterInputVector[Breiten];
        meinVector[Breiten].push_back(antwort);
        int naechtesFeld;
        naechtesFeld = Breiten;
        for(int restFelder=0; restFelder<=(hoehe-2); restFelder++){
            naechtesFeld += breite;
            antwort = fetterInputVector[naechtesFeld];
            meinVector[Breiten].push_back(antwort);
        }
    }
    meinVector[0].clear();
    meinVector[(breite-1)].clear();
    for (int i=0; i<hoehe; i++){
        meinVector[0].push_back(1);
        meinVector[(breite-1)].push_back(1);
    }
    cout<<"\n";
    cout<< meinVector << "\n";

    for(int i=0; i<breite; i++){
        vector<int>subteil = meinVector[i];
        for()
    }
}