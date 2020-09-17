#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,t,s;
    cin >> m >> t >> s;
    if(t == 0){
        cout<<"0";
        return 0;
    }
    int a = s/t;
    int b = s%t;

    if(a>=m){
        cout<<"0";
    }else{
        cout<<m-a-((b>0)? 1:0);
    }
    return 0;
}