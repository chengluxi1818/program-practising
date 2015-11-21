/*
 * Trie.h
 *
 *  Created on: Aug 14, 2015
 *      Author: Luxi
 */


#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

#ifndef TRIE_H_
#define TRIE_H_

class TrieNode {
public:
    bool isEnd;
    int numWords;
    TrieNode* child[26];

    // Initialize your data structure here.
    TrieNode() {
    	memset(child, 0, sizeof(child));
        isEnd = false;
        numWords = 0;
    }
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }


    ~Trie() {
    	destroy(root);
    }

    void destroy(TrieNode* node)
    {
    	for(int i = 0; i < 26; i++) {
    		if(node->child[i])
    			destroy(node->child[i]);
    		delete node;
    	}
    }

    // Inserts a word into the trie.
    void insert(string word) {
        TrieNode* current = root;
        current->numWords++;

        for(int i = 0; i < word.size(); i++) {
            int letter = (int)word[i] - (int)'a';
            if(current->child[letter] == NULL)
                current->child[letter] = new TrieNode();

            current->child[letter]->numWords++;
            current = current->child[letter];
            //current->numWords++;
        }

        current->isEnd = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        TrieNode* current = root;

        for(int i = 0; i < word.size(); i++) {
            int letter = (int)word[i] - (int)'a';
            if(current->child[letter] == NULL)
                return false;

            current = current->child[letter];
        }

        return current->isEnd;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        TrieNode* current = root;

        for(int i = 0; i < prefix.size(); i++) {
            int letter = (int)prefix[i] - (int)'a';
            if(current->child[letter] == NULL)
                return false;

            current = current->child[letter];
        }

        if(current->numWords >= 0)
            return true;
    }


private:
    TrieNode* root;
};

// Your Trie object will be instantiated and called as such:
// Trie trie;
// trie.insert("somestring");
// trie.search("key");

#endif /* TIRE_H_ */
