#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    cout<<((a%100)==0? (a%400)==0? 1:0 :
                      (a%4)==0? 1:0);
    return 0;
}