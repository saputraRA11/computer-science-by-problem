#include <iostream>

using namespace std;

int main(){
    int n,inc = 0; cin >> n;
    
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(inc == 10) inc = -1;
            cout << inc++;
        }
        
        for (int j=1;j <= n - i;j++){
            cout << " ";
        }
        
        cout << endl;
    }
}
