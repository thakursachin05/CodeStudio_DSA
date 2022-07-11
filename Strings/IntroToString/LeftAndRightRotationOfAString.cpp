#include<bits/stdc++.h>

string leftRotate(string str, int d) {
    int n = str.size();
    d = d%n;
    reverse(str.begin(),str.begin()+d);
    reverse(str.begin()+d,str.end());
    reverse(str.begin(),str.end());
    
    return str;
    
}

string rightRotate(string str, int d) {
    int n = str.size();
    d = d%n;
    reverse(str.begin(),str.end()-d);
    reverse(str.end()-d,str.end());
    reverse(str.begin(),str.end());
    return str;
}