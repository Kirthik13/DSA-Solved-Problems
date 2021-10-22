#include<bits/stdc++.h>
using namespace std;
int real(string s)
{
    int i=0;
    string res;
    while(s[i]!='+')
    {
        res+=s[i];
        i++;
    }
    return stoi(res);
}
int imag(string s)
{
    int i=0;
    string res;
    while(s[i]!='+')
    {
        i++;
    }
    i++;
    while(s[i]!='i')
    {
        res+=s[i];
        i++;
    }
    return stoi(res);
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int r1,r2,img1,img2;
    r1=real(s1);
    r2=real(s2);
    img1=imag(s1);
    img2=imag(s2);

    string res="";
    res=to_string(r1*r2-img1*img2)+"+"+to_string(r1*img2+r2*img1)+"i";
    cout<<res;

}