#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, p, c;
    cin >> n;
    int cL = 0;
    int mL = 0;
    cin >> p;
    for (int i = 1; i < n; i++) {
        cin >> c;
        if (p < c) {
            cL++;
            mL = max(cL, mL);
        }
        else {
            cL = 0;
        }
        p= c;
    }
    cout << mL + 1;
    return 0;
}
