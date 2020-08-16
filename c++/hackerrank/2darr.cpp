#include<iostream>
#include<vector>
using namespace std;


int main() {
int n,q;
cin >> n >> q;
vector< vector<int> > a;

// input each array
for (int i=0;i<n;i++) {
    int k;
    cin >> k;
vector<int>vec;
    for (int j=0;j<k;j++) {
        int data;
        cin >> data;
        vec.push_back(data);
    }
    a.push_back(vec);
}

// do the queries
for (int i=0;i<q;i++) {
    
    int x,y;

    cin >> x >> y;
    cout << a[x][y] << endl;
}






    return 0;
}
