#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n,j = 0,k; cin >> n;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        j += k;    
    } 

    cout << j << endl;
}
