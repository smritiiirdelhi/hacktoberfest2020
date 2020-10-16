#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
		long n,k,res=0,temp=0,cnt=0;
		cin>>n>>k;
		long Q[n];
		
		for(long i=1; i<=n; i++)
			cin>>Q[i];
			
			for(long i=1; i<=n; i++){
				if(Q[i]<k){
					cout<<i<<endl;
					break;
				}
				else{
					if(i==n){
						temp=1;
						cnt=Q[i]-k;
					}
					else{
						Q[i+1] = Q[i+1] + (Q[i] - k);
					}
				}
			}
			if(temp){
				cout<<((cnt/k)+n+1)<<endl;
			}
	}
	return 0;
}
