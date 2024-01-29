bool isPalindrom(string &s,int l,int r){
    while(l<r){
        if(s[l++]!=s[r--]){
            return false;
        }
        
    }
    return true;
}

string longestPalinSubstring(string str) {
    // Write your code here.
    string ans="";
    for(int i=0;i<str.size();i++){
        for(int j=i;j<str.size();j++){
        if(isPalindrom(str,i,j)){
            string t=str.substr(i,j-i+1);
            ans=ans.size()>t.size()?ans:t;
        }
    }
    }
    return ans;

}
