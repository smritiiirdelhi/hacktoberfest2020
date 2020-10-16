#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,chefP, mi=INT_MAX,ans;
	    cin>>n>>chefP;
	    ll p[n];
	    for(int i=0; i<n; i++){
	        cin>>p[i];
	        if(p[i]<=chefP){
	            if(chefP%p[i]==0){
	                ll k=chefP/p[i];
	                
	                if(k<mi){
	                    mi=k;
	                    ans=p[i];
	                }
	            }
	        }
	    }
	    
	    if(mi==INT_MAX)
	    cout<<"-1\n";
	    else{
	        cout<<ans<<"\n";
	    }
	}
	return 0;
}
