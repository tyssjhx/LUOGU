#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    string num = "0123456789";
    int i = 1;
    int j = 0;
    int n;
    cin>>n;
    int count = 0;
    while(n!=1){
        cout<<num[j]<<num[i];
        i++;
        count ++;
        if(i == 10){
            j++;
            i=0;
        }
        if(count == n){
            n--;
            cout<<endl;
            count = 0;
        }
    }
    cout<<num[j]<<num[i];
    return 0;
}