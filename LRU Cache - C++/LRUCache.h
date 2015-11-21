/*
 * LRUCache.h
 *
 *  Created on: Aug 3, 2015
 *      Author: Luxi
 */

/*
Design and implement a data structure for Least Recently Used (LRU) cache. It should support the following operations: get and set.

get(key) - Get the value (will always be positive) of the key if the key exists in the cache, otherwise return -1.
set(key, value) - Set or insert the value if the key is not already present. When the cache reached its capacity,
it should invalidate the least recently used item before inserting a new item.
*/

#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

#ifndef LRUCACHE_H_
#define LRUCACHE_H_

//------------------------------------------------------------------------------------
/*class LRUCache {
private:
	unordered_map<int, int> elem;
	unordered_map<int, int> freq;
	int cap = 0;
	int count = 0;
	int least = 1000000;
	int lkey = 0;
public:
	LRUCache() {}
	virtual ~LRUCache();

	LRUCache(int capacity) {
    	cap = capacity;
    }

    int get(int key) {
    	if(elem.find(key) != elem.end()) {
    		freq[key]++;
    		return elem[key];
    	}
    	return -1;
    }

    void set(int key, int value) {
    	if(elem.find(key) != elem.end()) {
    		elem[key] = value;
    		freq[key]++;
    	}
    	else {
    		count++;
    		if(count > cap) {
    			for(auto& t : freq) {
    				if(t.second < least) {
    					least = t.second;
    					lkey = t.first;
    				}
    			}

    			// Or to use iterator()
    			for(auto t = elem.begin(); t != elem.end(); t++) {
    			}
    			elem.erase(elem.find(lkey));

    			elem[key] = value;
    			freq[key]++;
    		}
    	}
    }
};*/

//------------------------------------------------------------------------------------
/*

There is a similar example in Java,
but I wanted to share my solution using the new C++11 unordered_map and a list.
The good thing about lists is that iterators are never invalidated by modifiers
(unless erasing the element itself).
This way, we can store the iterator to the corresponding LRU queue in the values of the hash map.
Since using erase on a list with an iterator takes constant time,
all operations of the LRU cache run in constant time.
*/

class LRUCache {
private:
    // A list of (key, value) pairs
    list<pair<int, int>> items;
    // Map items to iterators (pointers) to list nodes
    unordered_map<int, list<pair<int, int>>::iterator> cache;
    // The capacity of the list
    int cap;

public:
    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        // If key is not found in hash map, return -1
        if (cache.find(key) != cache.end()) {
            // Move the (key, value) pair to the beginning of the list
        	items.splice(items.begin(), items, cache[key]);
        	return cache[key]->second;
        }

        return -1;
    }

    void set(int key, int value) {
        // The key is not in the hash table
        if (cache.find(key) == cache.end()) {
            // If the cache is full then delete the least recently
            // used item, which is at the end of the list
            if (items.size() == cap) {
                cache.erase(items.back().first);
                items.pop_back();
            }
            items.push_front(make_pair(key, value));
            cache[key] = items.begin();
        } else {
            // Update the value associated with the key
            cache[key]->second = value;
            // Move the (key, value) pair to the beginning of the list
            items.splice(items.begin(), items, cache[key]);
        }
    }
};

#endif /* LRUCACHE_H_ */
