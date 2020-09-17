#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        class Node *prev;
        class Node *next;
    public:
        string name;
        int direction;
        Node(){;}
        Node(string na, int dir){
            name = na;
            direction = dir;
        }
        Node(string na, int dir, class Node * p, class Node* n){
            name = na;
            direction = dir;
            prev = p;
            next = n;
        }
};
int main(){
    int n,m;
    cin>>n>>m;
    
    return 0;
}