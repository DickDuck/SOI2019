#include "soi.h"
void main() {
    int N;
    cin >> N;      // OHNE VECTOR
    //cout << N << "\n";      
    int kth;
    cin >> kth;
    //cout << kth << "\n";

    vector<int> myVec(0);
    //cout << myVec << "\n";

    for(int k = 0; k < N ; k++) {
        int i;
        cin >> i;
        myVec.push_back(i);
    }
    //cout << myVec << "\n";
    sort(myVec.begin(),myVec.end());
    //cout << myVec << "\n";
    //cout << "=============" << "\n";
    reverse(myVec.begin(), myVec.end());
    cout << myVec[kth] << "\n";
    //cout << myVec;
}