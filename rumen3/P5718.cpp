#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int min;
    cin>>min;
    for(int i = 0; i<num-1; i++){
        int temp;
        cin>>temp;
        if(temp<min)
            min = temp;
    }
    cout<<min;
    return 0;
}