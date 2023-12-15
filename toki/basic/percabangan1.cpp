#include <bits/stdc++.h>

using namespace std;

int main() {
    float b; cin >> b;
    
    if(b != trunc(b)) {
        if(b < 0 ) cout << trunc(b) - 1 << " " << trunc(b) << endl;
        else cout << trunc(b) << " " << trunc(b) + 1 << endl;
    } else cout << trunc(b) << " " << (trunc(b) == -0 ? abs(trunc(b)) : trunc(b)) << endl;
    
    return 0;
}

