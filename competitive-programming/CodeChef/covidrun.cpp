#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,N,K,X,Y,res;
	cin>>T;
	while(T--){
		cin>>N>>K>>X>>Y;
		int arr[N]={0};
			arr[X]=1;
		int i=0;
		while(i<N){
			arr[X] = 1;
			X = (X+K)%N;
			i++;
		}
		if (arr[Y]==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}