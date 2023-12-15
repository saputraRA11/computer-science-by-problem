#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

bool isAlmostPrime(int x){
    int start = 2,counter = 0;
    while(start < x - 1){
        if (x % start == 0) {
            cout << start << endl;
            counter += 1;
            start *= 2;
        }
        
        else start += 1;
    }
    
    cout << start << ' ' << counter << endl;
    return counter <= 2;
}

int main() {
    int n,b; cin >> n;
    string output = "";
    
    while(n != 0) {
        scanf("%d",&b);
        if(isAlmostPrime(b)) output += "YA\n";
        else output += "BUKAN\n";
        n--;
    }
    cout << output;
}

