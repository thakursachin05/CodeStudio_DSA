string convertString(string str) 
{
    
    for(int i=0;i<str.size();i++){
        if((i==0 || str[i-1] == ' ') && str[i] >='a' && str[i]<='z')
            str[i]  -= 32;
    }
    return str;
}