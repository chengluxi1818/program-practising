/*
 * WordDictionary.h
 *
 *  Created on: Aug 15, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

#ifndef WORDDICTIONARY_H_
#define WORDDICTIONARY_H_

class TrieNode {
public:
    bool isEnd;
    TrieNode* child[26];

    TrieNode() {
        memset(child, 0, sizeof(child));
        isEnd = false;
    }
};

class WordDictionary {
public:
private:
    TrieNode* root;
public:
    WordDictionary() {
        root = new TrieNode();
    }
    // Adds a word into the data structure.
    void addWord(string word) {
        TrieNode* current = root;

        for(int i = 0; i < word.size(); i++) {
            int letter = word[i] - 'a';
            if(!current->child[letter])
                current->child[letter] = new TrieNode();

            current = current->child[letter];
        }
        current->isEnd = true;
    }

    // Returns if the word is in the data structure. A word could
    // contain the dot character '.' to represent any one letter.
    bool search(string word) {
        TrieNode* current = root;

        return searchRest(current, word.c_str());
    }

    bool searchRest(TrieNode* root, const char* single) {
        TrieNode* current = root;

        if(!root) return false;

        if(*single == '\0') return current->isEnd;

        if(*single == '.') {
			for(int j = 0; j < 26; j++) {
				if(searchRest(current->child[j], single+1))
					return true;
			}
		}
		else {
			return searchRest(current->child[*single-'a'], single+1);
		}
    }
};

#endif /* WORDDICTIONARY_H_ */
