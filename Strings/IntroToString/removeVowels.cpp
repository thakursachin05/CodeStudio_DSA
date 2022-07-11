string removeVowels(string s) {
   string ans = "";
    for(auto it : s){
     if(it == 'a' || it == 'e' || it == 'i' || it == 'o' || it=='u' 
       || it == 'A' || it == 'E' || it == 'I' || it == 'O' || it=='U')             continue;
        ans += it;
    }
    return ans;
}
