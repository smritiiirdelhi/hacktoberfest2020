#include<bits/stdc++.h>
using namespace std;

int Squares(int row, int column, int moves) { 

    int a = 0, b = 0, c = 0, d = 0, total = 0; 
    a = row - moves; 
    b = row + moves; 
    c = column - moves; 
    d = column + moves; 
  
    if (a < 1) a = 1; 
    if (c < 1) c = 1; 
    if (b > 8) b = 8; 
    if (d > 8) d = 8; 

    total = (b - a + 1) * (d - c + 1) - 1; 
    return total; 
} 

int main(){
    // your code goes here
    int T;
    cin>>T;
    while (T--){
        int R,C,K;
        cin>>R>>C>>K;
        cout<<(Squares(R,C,K)+1)<<endl;
    }
	return 0;
}