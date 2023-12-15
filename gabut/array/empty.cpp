#include <bits/stdc++.h>

using namespace std;

int main() {
    array<int,10> arr;

    cout << (arr.empty() ? "array is empty!" : "array is not empty.") << endl;

    for (int i = 0; i < 10;i++) cout << arr[i] << ' ';

    cout << "\n";

    cout << "size nya: " << arr.size() << endl;

    for (int i = 0; i < 10;i++) arr[i] = i + 1;

    for (int i = 0; i < 10;i++) cout << arr[i] << endl;

    return 0;
}