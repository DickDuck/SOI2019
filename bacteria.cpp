//stoflococcus
// kreisfoermige oder linear verbundene gruppen

#include "soi.h"
void main() {

    
    int N, M;  //N = Anzahl Bakterien,   M = Anzahl Verbindungen
    cin>> N >> M;

    vector<vector<int>>meinVector;
    meinVector.resize(N);


    for(int i=0; i<M; i++){
        int endpunktA, endpunktB;  //repräsentieren die Enden der Kanten
        cin>> endpunktA >> endpunktB;  //Input
        meinVector[endpunktA].push_back(endpunktB);
        meinVector[endpunktB].push_back(endpunktA);
    }
    cout<< meinVector << "\n";

    for(int i=0; i<N; i++){                         //filtert einzelständige bakterien heraus -> keine stoflococcus-kolonie
        if(meinVector[i].size() < 1){
            cout<< "position: " << i <<" small size: " << meinVector[i].size() << "\n";
            cout<< "other";
        }
    }

    vector<bool>visitedDirectionList(0);

    for(int Elem=0; Elem<N; Elem++){
        int furtherDirection;
        furtherDirection = meinVector[Elem][1];
        visitedDirectionList.push_back(furtherDirection);
        cout<< "further Dir: " << visitedDirectionList << "\n";
        //for ()
    }
}