#include <bits/stdc++.h> 
using namespace std;

bool isp(string &S, int i, int j){
    while(i<=j){
        if(S[i++]!=S[j--]){
            return false;
        }
    }
    return true;
}

void solve(int ind,string &S,vector<string>&curr,vector<vector<string>>&ans){

    // base case
    if(ind==S.size()){
        // adding palindrome
        ans.push_back(curr);
        return;

    }

    for(int i=ind;i<S.size();i++){
        if(isp(S,ind,i)){
            // adding substring after verifing it's palindrome or not
            curr.push_back(S.substr(ind,i-ind+1));
            // including current string character annding next char and then verify it's palindrome or not
            solve(i+1,S,curr,ans);
            // remove last char and try with next char and check it's palindrome or not
            curr.pop_back();

        }

    }


}

vector<vector<string> > partition(string &S)
{
    //    Write your code here.
    vector<vector<string>>ans;
    vector<string>curr;
    solve(0,S,curr,ans);
    return ans;

}
