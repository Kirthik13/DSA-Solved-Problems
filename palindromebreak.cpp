#include <bits/stdc++.h>
using namespace std;
int main()
{
    string palindrome;
    cin >> palindrome;

    string res = "";
    if (palindrome.size() == 1)
    {
        // return res;
        exit(1);
    }

    if (palindrome.size() == 2)
    {
        if (palindrome[0] != 'a')
        {
            palindrome[0] = 'a';
        }
        else
        {
            palindrome[1] = 'b';
        }
    }
    else
    {
        if (palindrome.front() != 'a' and palindrome.back() != 'a')
        {

            palindrome[0] = 'a';
        }
        else
        {
            if (palindrome.front() == 'a' and palindrome.back() == 'a')
            {
                if (palindrome.size() == 3)
                {

                    palindrome.back() = char(palindrome[palindrome.size() - 1] + 1);
                }
                else
                {
                    if (palindrome[1] != 'a')
                    {
                        palindrome[1] = 'a';
                    }
                    else
                    {
                        palindrome.back() = char(palindrome[palindrome.size() - 1] + 1);
                    }
                }
            }
        }
    }
    cout << palindrome;
    // return palindrome;
}