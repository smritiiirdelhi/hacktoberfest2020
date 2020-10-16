#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll i,j,k,t,ip;
	
	cin>>t;
	
	while(t--){
	    ll n,p,a,b,c,d,x,y,z,q,r,mv=0;
	    double d1,d2;
	    string s;
	    vector<ll> v;
	    
	    cin>>n>>x>>p>>k;
	
	    for(i=0; i<n; i++){
	        cin>>ip;
	        v.push_back(ip);
	    }
	    
	    sort(v.begin(),v.end());
	    c = count(v.begin(),v.end(),x);
	    ll sm=0;
	    
	    if(c==0){
	        v[k-1]= x;
	        mv++;
	        sort(v.begin(),v.end());
	    }
	    
	    if(v[p-1]==x){
	        cout<<mv<<endl;
	    }
	    else{
	        ll pos=0;
	        for(i=0; i<n; i++){
	            if(v[i]==x){
	                pos = i;
	                break;
	            }
	        }
	        ll sht =-1;
	        ll nsht = abs(pos-(p-1));
	        if(p-1> pos){
	            sht=1;
	            if(k>=(p)){
	                for(i=0; i<n; i++){
	                    if(v[i]==x){
	                        pos = i;
	                    }
	                }
	                nsht = abs(pos-(p-1));
	                cout<<mv+nsht<<endl;
	            }
	            else{
	                cout<<"-1\n";
	            }
	        }
	        else{
	            sht =0;
	            if(k<=p){
	                cout<<mv+nsht<<endl;
	            }
	            else{
	                cout<<"-1\n";
	            }
	        }
	    }
	}
	return 0;
}
