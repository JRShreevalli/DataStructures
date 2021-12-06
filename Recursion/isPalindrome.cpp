#include <iostream>
#include <string>

using namespace std;

int fun(string s,int start,int end){
    if(start>=end)
    {
        return 1;
    }
    if(s[start]==s[end])
    {
        return fun(s,start+1,end-1);
    }
    return 0;
}

int main()
{
    int c;
    string s;
    cout<<"enter: ";
    cin>>s;
    
    c=fun(s,0,s.length());
    
    
    if(c==0){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }

    return 0;
}