#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long S = 0;
    for(n=n-1; n>=3; n--){
        S += (n)*(n-1)*(n-2)/6;
    }
    cout<<S;
    return 0;
}