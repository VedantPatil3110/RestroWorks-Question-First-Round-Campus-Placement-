#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans=0;
    set<int>st;
    int left=0;
    for(int i=0;i<s.size();i++){
        while(st.count(s[i])){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[left]);
        ans=max(ans,i-left+1);
    }
    return ans;
} 