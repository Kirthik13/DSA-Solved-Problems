
#include <bits/stdc++.h>
#include "D:\krithik\mycode\DSA-Solved-Problems-2\project\phonebook.h"
using namespace std;
#define int long long
#define double long double
#define inf (int)1e9
#define f first
#define s second

int32_t main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	// Test for advanced search.
	PhoneBook p;

	p.insert("Mansimar", "92123504576");
	p.insert("Mansi", "92123503t47");
	p.insert("Aab", "159250217435");
	p.insert("XYZ", "25925045123");
	p.insert("", "79872913598");
	p.insert("", "");
    
    string s;
    getline(cin,s);
	p.search(s);
	cout << '\n';

	p.remove(s);

	p.search(s);
	cout << '\n';
	// p.search("Mansi");
	// cout << '\n';

	// p.remove("Mansimar");

	// p.search("Mansi");
	// cout << '\n';

	return 0;
}