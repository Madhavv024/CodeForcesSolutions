#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
// 	your code goes here
    string s;
    cin>>s;
    stack<char> st;
    bool check = true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                check = false; 
                break;
            }
            else{
                char c = st.top();
                if(s[i]==')' && c!='('){
                    check = false;
                    break;
                }
                else if(s[i]==']' && c!='['){
                    check = false;
                    break;
                }
                else if(s[i]=='}' && c!='{'){
                    check = false;
                    break;
                }
                else{
                    st.pop();
                }
            }

        }
    }
    check = check & st.empty();
    check ? cout<<"Balanced"<<endl : cout<<"Not balanced"<<endl;
	return 0;
}
