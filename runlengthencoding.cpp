#include "soi.h"
void main() {
    int a;
    cin >> a;
    cout << a << "\n";
    vector<int> myVec(0);
    cout << myVec << "\n";
    for(int k = 0; k < (a) ; k++) {
        int i;
        cin >> i;
        myVec.push_back(i);
    }
    cout << myVec;
   
}