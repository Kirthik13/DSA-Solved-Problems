#include <bits/stdc++.h>
using namespace std;
int gen(vector<string> v, string key)

{
    int s = 0;
    int e = v.size() -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        int mid_l = mid - 1;
        int mid_r = mid + 1;
        cout<<"mid : "<<mid<<endl;
        if (v[mid] == "")
        {
            // cout<<"asd";
            while (1)
            {
                if (mid_l < s and mid_r > e)
                {
                    return -1;
                }
                else if (mid_r<=e and v[mid_r] != "")
                {
                    mid = mid_r;
                    break;
                }
                else if (mid_l>=s and v[mid_l] != "")
                {
                    mid = mid_l;
                    break;
                }
                mid_l--;
                mid_r++;
            }
        }
         if (v[mid] == key)
        {
            return mid;
        }
         if (v[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            cout<<"hi"<<endl;
        }
    }
    return -1;
}
int main()
{
    vector<string> v = {"ai", "", "", "bat", "", "", "car","cat","","","dog","e"};
    string key;
    cin >> key;
    
    int res=gen(v, key);
    cout<<res;
}