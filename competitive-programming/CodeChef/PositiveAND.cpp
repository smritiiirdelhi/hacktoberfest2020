#include <bits/stdc++.h>
using namespace std;

int Power2(int n){
	return n!=0 && ((n&(n-1))==0);
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		if(N==1){
			cout<<1<<endl;
			continue;
		}
		else if(N==3){
			cout<<1<<" "<<3<<" "<<2<<endl;
			continue;
		}
		else if(N==5){
			cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
			continue;
		}
		else if(Power2(N)){
			cout<<-1<<endl;
			continue;
		}
		else{
			cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
			int i=6;
			while(i<=N){
				if(Power2(i)){
					cout<<i+1<<" "<<i<<" ";
					i+=2;
				}
				else{
					cout<<i<<" ";
					i++;
				}
			}
			cout<<endl;
		}
	}
	return 0;
}
