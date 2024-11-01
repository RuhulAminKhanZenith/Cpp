#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    cin.ignore();
    char s[n];
    int zero=0 , one=0 ;
    for (int i=0; i<n; i++) {
        
        cin>>s[i];
        if(s[i] == '0'){
            zero++;
        }
        if(s[i] == '1'){
            one++;
        }
    }
    cout<<zero<<" "<<one<<endl;
    return 0;
}
