#include <iostream>
#include <cstdio>
//#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        class Node *prev;
        class Node *next;
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
        void appendNode(class Node *a){
            a->next = next;
            a->prev = this;
            next->prev = a;
            next = a;     
        }
        void setNode(string na, int dir, class Node * p, class Node* n){
            name = na;
            direction = dir;
            prev = p;
            next = n;
        }
};

int main(){
    int a,b;
    cin>>a>>b;
    string s;
    int d;
    int step;
    Node *root_p = new Node();

    for(int i = 0; i<a; i++){
        cin>>d>>s;
        if(i == 0){
            (*root_p).setNode(s,d,root_p,root_p);
        }else{
            Node * new_root_p = new Node(s,d);
            ((*root_p).prev)->appendNode(new_root_p);
        }
    }
    Node * search_node_p = root_p;
    /*
    for(int i = 0; i < b; i++){
        cin>>d>>step;
        d = search_node_p->direction==0? d==0?1:0 :d;
        for(int j = 0; j< step; j++){
            search_node_p = (d==1? search_node_p->prev:search_node_p->next);
        }
    }*/
    /*
    int sum_step = 0;
    for(int i = 0; i < b; i++){
        cin>>d>>step;
        d = search_node_p->direction==0? d==0?1:0 :d;
        sum_step += d==1? step:-step;
    }

    for(int j = 0; j < sum_step; j++){
        search_node_p = (step>0? search_node_p->prev:search_node_p->next);
    }
    */
    cout<<search_node_p->name;
    return 0;
}