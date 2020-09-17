#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    cin>>a;
    long long b = (a*a*a)*a - 6*a*a*a + 11*a*a -6*a;
    cout<<(long long)(b/24);
    return 0;
}