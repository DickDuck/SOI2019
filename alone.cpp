#include "soi.h"
void main() {

    
    int N, M;  //N = Anzahl Maeuse,   M = Anzahl Bekanntschaften
    cin>> N >> M;
    //cout<< N << "  " << M << "\n";

    vector<vector<int>>meinVector;
    meinVector.resize(N);

    for(int i=0; i<N; i++){
        meinVector[i].push_back(i);
    }
    //cout<< meinVector << "\n";


    for(int i=0; i<M; i++){
        int connectionA, connectionB;  //repräsentieren die Enden der Kanten
        cin>> connectionA >> connectionB;  //Input
        //cout<< endpunktA << endpunktB << "\n";
        meinVector[connectionA].push_back(connectionB);
        meinVector[connectionB].push_back(connectionA);
    }
    //cout<< meinVector;

    int lonelys = 0;
    vector<int>lonelyVec(0);
    //lonelyVec.push_back(1);
    //cout<< lonelyVec;

    for(int i=0; i<N; i++){
        if (meinVector[i].size() == 1){
            lonelys ++;
            lonelyVec.push_back(i);
        }
    }

   
    cout<< lonelys << "\n";
  

    int lonelySize = lonelyVec.size();
    
    for(int i=0; i<lonelySize; i++){
        cout<< lonelyVec[i] << " ";
    }

    cout<<"\n";
}





