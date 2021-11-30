#include <iostream>
#include <vector>

using namespace std;

int prime(int n){
    int i,y=n;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

vector <int> fun(int n){
    int i,x=n,y;
    vector <int> a;
    for(i=1;i<=n;i++){
        if(x%i==0){
            y=prime(i);
            if(y==1){
                a.push_back(i);
            }
        }
    }
    return a;
}

int main()
{
    int n,i;
    cout<<"enter n: ";
    cin>>n;
    vector<int> ans;
    ans=fun(n);
    for(i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}