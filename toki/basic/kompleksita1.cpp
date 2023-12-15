#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

bool isPrime(int x){
    for(int j = 2;j*j <= x;j++) {
        if(x % j == 0) return false;
    }    
    
    return x >= 2;
}

int main() {
    int n,b; cin >> n;
    string output = "";
    
    while(n != 0) {
        scanf("%d",&b);
        if(isPrime(b)) output += "YA\n";
        else output += "BUKAN\n";
        n--;
    }
    cout << output;
}
