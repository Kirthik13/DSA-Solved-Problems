#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
int main(){
    vector<int>nums1={1,2};
    vector<int>nums2={3,4};
if(nums1.size()>nums2.size()) swap(nums1,nums2);

int s=0;
int e=nums1.size();
int n1=nums1.size();
int n2=nums2.size();
while(s<=e){
    int cut1=(s+e)>>1;
    int cut2=((n1+n2+1)/2) -cut1;


    int l1=(cut1==0)?INT_MIN:nums1[cut1-1];
    int l2=(cut2==0)?INT_MIN:nums2[cut1-1];

    int r1=(cut1==n1)?INT_MAX:nums1[cut1];
    int r2=(cut2==n2)?INT_MAX:nums2[cut2];

    if(l1<=r2 and l2<=r1){
        if((n1+n2)%2==0){
            cout<<double(max(l1,l2)+min(r1,r2))/double(2)<<endl;
            break;
        }
        else{
            cout<<max(l1,l2);
            break;
        }
    }
    else if(l1>r2){
        e=cut1-1;
    }
    else{
        s=cut1+1;
    }
}

    
}