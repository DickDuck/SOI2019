#include "soi.h"
void main() {
    int N;
    cin >> N;
    cout << N << "\n";
    int Halfmark;
    Halfmark = N / 2;
    vector<int> MajorVec(0);
    for(int ass = 0; ass < N; ass ++) {
        int vote;
        cin >> vote;
        MajorVec.push_back(vote);
    }
    cout << MajorVec << "\n";
    for(int& Value : MajorVec) {
        cout << Value << "\n";
        int Pos;
        cout << std::find(MajorVec.begin(), MajorVec.end(),Value);
    }
}