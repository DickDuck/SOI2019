#include "soi.h"


int fibonacci(int N) {
    vector<int>alleVorher(0);
    alleVorher.push_back(0);
    alleVorher.push_back(1);
    alleVorher.push_back(1);
    //cout<< alleVorher << "\n";

    // int zahlDavor = 0;
    // int neueZahl = 0;
    // int Zahl = 0;

    if(N == 0){
        cout<<N;
    }
    else if(N == 1 || N == 2){
        cout<< 1;
    }

    else {
        // cout<< "bigger than 2" << "\n";
        for(int i = 2; i <= N; i++){
            int zahlDavor;
            int neueZahl;
            int Zahl;
            zahlDavor = alleVorher[(i-1)];
            Zahl = alleVorher[i];
            neueZahl = Zahl + zahlDavor;
            alleVorher.push_back(neueZahl);
            // cout<< alleVorher << "\n";
        }
        cout<< alleVorher[N] << "\n";
    }
}


void main() {

    int N;
    cin>> N;

    fibonacci(N);
}