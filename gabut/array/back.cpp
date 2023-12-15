#include <bits/stdc++.h>
using namespace std;
int main() {
    array<int,5> arr = {1,2,3,4,5};
    cout << "front is: " << arr.front() << endl;
    cout << "back is: " << arr.back() << endl;

    arr.back() = 100;

    cout << "back is: " << arr.back() << endl;

    return 0;
}