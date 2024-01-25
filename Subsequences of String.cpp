#include <bits/stdc++.h> 

void solve(string str,string op,int ind,vector<string>&ans){
	// base casee
	if(ind>=str.length()){
		if(op.length()>0){
			ans.push_back(op);
		}
		return;
	}
	solve(str,op,ind+1,ans);
	char ele=str[ind];
	op.push_back(ele);
	solve(str,op,ind+1,ans);

}

vector<string> subsequences(string str){
	
	// Write your code here
	vector<string>ans;
	string op="";
	int ind=0;
	solve(str,op,ind,ans);
	return ans;
	
}
