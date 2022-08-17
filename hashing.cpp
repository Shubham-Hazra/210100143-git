#include "hashing.hpp"

int hash_string(string s,int m) {
    // implement hashing function here
    int i=0;
    int hash=0;
    while(s[i]!='\0')
    {
        hash = hash + int(s[i])%m;
        i++;
    }
    return hash;
}