#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include<bits/stdc++.h>
using namespace std;

class Trie {
public:
	// for signifying the end of contact.
	bool isEnd;
	// for storing the given property at the end.
	string store;
	// using hashMap for space optimisation.
	unordered_map<char, Trie*> branch;

	Trie() {
		this->isEnd = false;
	}
};

class PhoneBook {
private:
	// one trie would contain all numbers and other all names.
	Trie *TrieForNames;
	Trie *TrieForNumbers;

	// for storing all ASCII chars into a list
	vector<char> charSet;

public:
	PhoneBook() {
		// initialized NULL for each instance.
		this->TrieForNames = NULL;
		this->TrieForNumbers = NULL;

		// adding all possible representable ASCII characters
		// into a list for search operation.
		for(int i = 32 ; i < 127 ; ++i) {
			charSet.push_back((char)i);
		}
	}

	// to insert name and number into trie.
	void insert(const string &name, const string &number) {
		// base condition for name and number not NULL.
		if(name.empty() || number.empty()) {
			return;
		}

		insertByAttribute(TrieForNames, name, number);
		insertByAttribute(TrieForNumbers, number, name);
	}

	// to insert attribute in the given Trie and update it's property.
	void insertByAttribute(Trie *&root, const string &str, const string &prop) {
		if(!root) {
			root = new Trie();
		}

		// initialized to root.
		Trie *currNode = root;
		for(char c : str) {
			// if branch not found, create one.
			if(currNode->branch.count(c) == 0) {
				currNode->branch[c] = new Trie();
			}
			// Now, next branch is available so move to next branch.
			currNode = currNode->branch[c];
		}
		// indicate that a word is completed here and store it's property.
		currNode->isEnd = true;
		currNode->store = prop;
	}

	// for searching any number/name in phonebook
	void search(const string &str) {
		// if the given query string in NULL.
		if(str.empty()) return;

		vector<pair<string, string>> byName, byNumber;
		// search for prefix by name and number seperately.
		searchByAttribute(TrieForNames, str, byName);
	 	searchByAttribute(TrieForNumbers, str, byNumber);

	 	// display results.
 		cout << "Contacts Found by Name: " << byName.size() << '\n';
 		for(pair<string, string> p : byName) {
 			cout << p.first << " : " << p.second << '\n';
 		}
 		cout << "Contacts Found by Number: " << byNumber.size() << '\n';
 		for(pair<string, string> p : byNumber) {
 			cout << p.first << " : " << p.second << '\n';
 		}
	}

	// checks if a given prefix exist
	void searchByAttribute(Trie *root, const string &str, vector<pair<string, string>> &List) {
		// checks if the given Trie is empty or not
		if(!root) return;

		// for storing found prefix of the given string.
		string buffer;
		Trie *currNode = root;
		for(char c : str) {
			// if branch not found, means given prefix not found.
			if(currNode->branch.count(c) == 0) {
				break;
			}
			buffer += c;
			currNode = currNode->branch[c];
		}
		// some prefix of the given string found, now search for complete details.
		if(!buffer.empty()) {
			depthFirstSearch(currNode, List, buffer);
		}
	}

	// search for complete details for the prefix found.
	void depthFirstSearch(Trie *root, vector<pair<string, string>> &List, string curr) {
		// one such contact is found and store it.
		if(root->isEnd) {
			List.push_back({curr, root->store});
		}

		// iterate over all character set to check all possible combination
		// that can be done on the given prefix.
		for(char c : charSet) {
			// if branch exist, go and check this branch.
			if(root->branch.count(c)) {
				depthFirstSearch(root->branch[c], List, curr + c);
			}
		}
	}

	// delete contact from phonebook.
	void remove(const string &str) {
		// if the given query string is empty.
		if(str.empty()) return;

		removeByAttribute(TrieForNames, str);
		removeByAttribute(TrieForNumbers, str);
	}

	// delete contact from given trie if found.
	void removeByAttribute(Trie *&root, const string &str) {
		// if Trie is empty, no contact can be deleted;
		if(!root) return;

		// start from the root node.
		Trie *currNode = root;
		for(char c : str) {
			// if branch not found, contact with given details doesn't exist, return.
			if(currNode->branch.count(c) == 0) return;
			// Now, next branch is available so move to next branch.
			currNode = currNode->branch[c];
		}
		// mark no such word exist.
		currNode->isEnd = false;
	}
};

#endif