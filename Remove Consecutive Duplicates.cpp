string removeDuplicate(string &s)
{
    // Write your code here
    int i=0;
    while(i<s.length()-1){
        if(s[i]==s[i+1]){
            s.erase(i,1);
        }
        else{
            i++;
        }
    }
    return s;


}

