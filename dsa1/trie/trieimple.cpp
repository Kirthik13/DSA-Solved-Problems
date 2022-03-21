#include<bits/stdc++.h>
using namespace std;
struct node{
    node* links[26]={0};
    bool flag=0;
    bool contains(char ch)
    {
        return links[ch-'a']!=NULL;
    }
    void setnode(char ch,node* h)
    {
        links[ch-'a']=h;
    }
    node* getnode(char ch)
    {
        return links[ch-'a'];
    }
    void setend()
    {
        flag=1;   
    }
    bool isend()
    {
        return flag;
    }
};
class Trie {
private:
            node* root;

public:
    Trie() {
        root=new node();
    }
    
    void insert(string word) {
        node* h=root;
        for(int i=0;i<word.size();i++)
        {
            if(!(h->contains(word[i]))){
            h->setnode(word[i],new node());
            }
            h=h->getnode(word[i]);
        }
        h->setend();
    }
    
    bool search(string word) {
        node* h=root;
        for(int i=0;i<word.size();i++)
        {
            
            if(!(h->contains(word[i]))) return 0;
            h=h->getnode(word[i]);
        }
        return h->isend();
    }
    
    bool startsWith(string word) {
         node* h=root;
        for(int i=0;i<word.size();i++)
        {
            
            if(!(h->contains(word[i]))) return 0;
            h=h->getnode(word[i]);
        }
        return 1;
    }
};
int main()
{
    Trie g;
    g.insert("bat");
    g.insert("bad");
    g.insert("cat");
    g.insert("cattle");

    cout<<g.search("bat")<<endl;
    cout<<g.search("battle")<<endl;
    cout<<g.startsWith("ba")<<endl;
}