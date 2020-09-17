#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    int W_score1[10000] = {-1};
    int L_score1[10000] = {-1};
    int W_score2[10000] = {-1};
    int L_score2[10000] = {-1};
    int p1 = 0, p2 = 0;
    int W_point1 = 0, W_point2 = 0, L_point1 = 0, L_point2 = 0;
    while((c=getchar()) != 'E'){
        if(c != 'W' && c != 'L')
            continue;
        if( c == 'W'){  
            W_point1++;
            W_point2++;
        }else if(c == 'L'){
            L_point1++;
            L_point2++;
        }
        if((W_point1>=11 && W_point1-L_point1>=2)||
           (L_point1>=11 && L_point1-W_point1>=2)){
            W_score1[p1] = W_point1;
            L_score1[p1++] = L_point1;
            W_point1 = 0;
            L_point1 = 0;
        }
        if((W_point2>=21 && W_point2-L_point2>=2)||
           (L_point2>=21 && L_point2-W_point2>=2)){
            W_score2[p2] = W_point2;
            L_score2[p2++] = L_point2;
            W_point2 = 0;
            L_point2 = 0;
        }
    }
    W_score1[p1] = W_point1;
    L_score1[p1++] = L_point1;
    W_score2[p2] = W_point2;
    L_score2[p2++] = L_point2;
    for(int i = 0; i<p1; i++){
        cout<<W_score1[i]<<":"<<L_score1[i]<<endl;
    }
    cout<<endl;
    for(int i = 0; i<p2; i++){
        cout<<W_score2[i]<<":"<<L_score2[i];
        if(i!=p2)
            cout<<endl;
    }
    return 0;
}