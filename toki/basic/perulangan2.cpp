#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    char kata[101];
    string output = "";
    while(scanf("%s",kata) != EOF) {
        output.append(kata);
        output.append("\n");
    }
    
    cout << output;
}
