#include<bits/stdc++.h>

string encode(string &s)
{
    string res = "";
    int count = 1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) count++;
        else{
            res.push_back(s[i-1]);
            res += to_string(count);
            count = 1;
        }
    }    
    res.push_back(s[s.size()-1]);
    res += to_string(count);
    return res;
}