#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void calc(int *a, int *b){
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;
    if( *b < 0 ){
        *b = -(*b);
    }
}

int main() {
    int a, b;
    cin>> a>>b;
    calc(&a,&b);
    cout<<a<<endl<<b<<endl;
    return 0;
}
