#include "soi.h"
void main() {

    int Pillars;
    cin >> Pillars;
    vector<int> Alle(0);
    cout << Alle;

    if(Pillars == 0 || Pillars == 1) {
        cout << "yes";
        exit(0);
    }

    for(int Zah = 0; Zah < Pillars; Zah++) {
        int Z;
        cin >> Z;
        Alle.push_back(Z);
    }

    int DifZ1, DifZ2, Diff;
    DifZ1 = Alle[0];
    DifZ2 = Alle[1];
    Diff  = DifZ2 - DifZ1;

    bool Pass;

    for(int i = 0; i < Pillars; i++) {
        int DifD;
        DifD = 0;
        if(i != Pillars - 1) {
            DifD = Alle[i + 1] - Alle[i];
        }
        if(DifD != Diff) {
            cout << "no";
            exit(0);
        }
    }

    cout << "yes";
}