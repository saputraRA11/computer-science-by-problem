#include <bits/stdc++.h>

using namespace std;

int main() {
    array<int,10> arr;

    for(int i = 0;i<10;i++) arr.at(i) = i + 1;
    cout << "my array contains: " << endl;
    for(int i=0; i<10 ;i++){
        cout << " " << arr.at(i) << endl;
    }

    return 0;
}