#include "soi.h"
void main() {

    
    int N, M;  //N = Anzahl Knoten,   M = Anzahl Kanten
    cin>> N >> M;

    vector<vector<int>>meinVector;
    meinVector.resize(N);


    for(int i=0; i<M; i++){
        int endpunktA, endpunktB;  //repräsentieren die Enden der Kanten
        cin>> endpunktA >> endpunktB;  //Input
        //cout<< endpunktA << endpunktB << "\n";
        meinVector[endpunktA].push_back(endpunktB);
        meinVector[endpunktB].push_back(endpunktA);
    }
    //cout<< meinVector;
    for(int i=0; i<N; i++){
        int knotenAnzahl;
        knotenAnzahl = meinVector[i].size();
        vector<int> zeilenVector(0);
        zeilenVector = meinVector[i];
        for(int k=0; k< knotenAnzahl; k++){
            cout<<zeilenVector[k] << " ";
        }
        cout<< "\n";
    }
}