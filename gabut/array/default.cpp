#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "jumlah array: " << (sizeof(arr) / sizeof(int)) << endl;
    cout << "array: " << (arr == 0) << endl;

    return 0;
}