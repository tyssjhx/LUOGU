#include <iostream>
#include <cstdio>
#include <stack>


//#include<bits/stdc++.h>
using namespace std;

int main(){

    long long sum = 0,n;
    long long factorial=1;
    cin>>n;
    for(int i = 1; i<=n; i++){
        factorial *= i;
        sum += factorial;
    }
    cout<<sum;
    return 0;
}