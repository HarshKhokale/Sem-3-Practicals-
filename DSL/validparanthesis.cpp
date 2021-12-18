#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool valo(stack<char>paren,string s){
    
    for(int i=0;i<s.length();i++){

        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            paren.push(s[i]);
        }
        else{
            if(s[i]==')'){
                if(paren.top()=='('){
                    paren.pop();
                }
                else{
                    return 0;
                }
            }

            if(s[i]==']'){
                if(paren.top()=='['){
                    paren.pop();
                }
                else{
                    return 0;
                }
            
            }

            if(s[i]=='}'){
                if(paren.top()=='{'){
                    paren.pop();
                }
                else{
                    return 0;
                } 
            }

        }
    }

    if(!paren.empty()){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    string s = "({s-g[a+b]/r}k)";
    stack<char> paren;

    bool ans=valo(paren,s);
    cout<<ans;


    // for (char &c : s)
    // {
    //     switch (c)
    //     {
    //     case '(':
    //     case '{':
    //     case '[':
    //         paren.push(c);
    //         break;
    //     case ')':
    //         if (paren.empty() || paren.top() != '(')
    //             return false;
    //         else
    //             paren.pop();
    //         break;
    //     case '}':
    //         if (paren.empty() || paren.top() != '{')
    //             return false;
    //         else
    //             paren.pop();
    //         break;
    //     case ']':
    //         if (paren.empty() || paren.top() != '[')
    //             return false;
    //         else
    //             paren.pop();
    //         break;
    //     default:; // pass
    //     }
    // }
    // return paren.empty();

    return 0;
}