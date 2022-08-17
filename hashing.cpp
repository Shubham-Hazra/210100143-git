#include "hashing.hpp"
int pow(int a,int b)
{
    int t=1;
    for(int i=0;i<b;i++)
    {
        t*=a;
    }
    return t;
}

int hash_string(string s,int m) {
    // implement hashing function here
    int i=0;
    int p = 59;
    int hash=0;
    while(s[i]!='\0')
    {
        hash = hash + (int(s[i])*pow(p,i)%m);
        i++;
    }
    return hash;
}