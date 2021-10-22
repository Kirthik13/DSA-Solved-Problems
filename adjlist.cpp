#include<bits/stdc++.h>
using namespace std;
class Graph{
    list<int>*l;
    int V;
    public:
    Graph(int v){
        V=v;
        l=new list<int>[V];
    }
    void addedge(int i,int j,bool undir=true){
        l[i].push_back(j);
        if(undir){
        l[j].push_back(i);

        }
    }
    void print(){
        for(int i=0;i<V;i++){
            cout<<i<<" ---> ";
            for(auto j:l[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
Graph g(5);
g.addedge(0,1);
g.addedge(1,2);
g.addedge(2,3);
g.addedge(3,1);
g.addedge(3,4);
g.addedge(4,0);
g.print();

}


