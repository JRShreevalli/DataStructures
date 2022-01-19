// Given a string, the task is to find the first character 
// (whose leftmost appearance is first) that repeats.

#include <bits/stdc++.h> 
using namespace std; 


int leftMost(string &str) 
{
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
                return i;
        }
    }
    return -1;
}
 
int main() 
{ 
    string str ;
    cin >> str ;
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 