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
    //cout<< meinVector<< "\n";

    bool heIsTheOne;
    heIsTheOne = false;

    for(int elem=0; elem < N; elem++){
        //cout<< meinVector[elem].size() << "\n";
        if(meinVector[elem].size() == (N -1)){
            heIsTheOne = true;
        }
    }
    if(heIsTheOne){
        cout<< "star" << "\n";
    }
    else{
        cout<< "other" << "\n";
    }
}