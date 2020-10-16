#include<bits/stdc++.h>
using namespace std;

int main(){
    // your code goes here
    int T;
    cin>>T;
    while (T--){
        int n;
        cin>>n;
        set<int>a;
        for(int i=0; i<n; i++){
            int h;
            cin>>h;
            if(h>0)
                a.insert(h);
        }
        cout<<(int)a.size()<<endl;
    }
    return 0;    
}