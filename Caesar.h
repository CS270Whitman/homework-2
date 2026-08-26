#ifndef CAESAR_H
#define CAESAR_H

#include <string>
#include <iostream>

//Generally not a good idea, but I'm doing it just this once to make the code in the class easier to read
using namespace std;

class Caesar {
  public:
    
    // Caesar constructor, accepts a single string argument as the cipher
    // key
    Caesar(const string& initialKey);
    // return the current cipher key
    string get_key() const;
    // decode the string argument using the key, return decoded string
    string decode(const string& message) const;
    // encode the string argument using the key, return encoded string
    string encode(const string& message) const;
    // mod function that is "safe" to use even when val might be negative
    char safemod(int val, int mod) const;

  private:
    string key;

};

#endif