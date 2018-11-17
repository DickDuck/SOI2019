#include "soi.h"
void main() {
    int a;
    cin >> a;
    //cout << a << "\n";
    //cout << "***************";
    //vector<int> myVec(0);
    //cout << myVec << "\n";
    int Sume;
    Sume = 0;
    for(int k = 0; k < (a) ; k++) {
        int i;
        cin >> i;
        //cout << i << "\n";
        Sume += i;
        //myVec.push_back(i);
        //cout << myVec;
    }
    cout << Sume;
}