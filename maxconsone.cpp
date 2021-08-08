// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v = {0, 0};
//     int res = INT_MIN;
//     int ans{};
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] != 1)
//         {
//             res = max(ans, res);
//             ans = 0;
//         }
//         if (v[i] == 1)
//         {
//             ans++;
//         }
//     }
//     res = max(ans, res);

//     cout << res;
// }

 ListNode* h1=l1; ListNode* h2=l2;
          ListNode* tem=NULL;
            if(h1->val>h2->val){
                swap(h1->val,h2->val);
            }
         ListNode* res=h1;
        while(h1!=NULL and h2!=NULL){
            while((h1->val<=h2->val) and h1!=NULL ){
                tem=h1;
                h1=h1->next;
                
            }
            tem->next=h1;
            swap(h1,h2);
            
                