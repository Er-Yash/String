#include <bits/stdc++.h> 

string stringReverse(string S) {
     // First approach
    int i=0,j=S.size()-1;
    while(i<j){
        swap(S[i],S[j]);i++;j--;
    }
    return S;


  // Second approach
    reverse(S.begin(),S.end());
    return S;
}
