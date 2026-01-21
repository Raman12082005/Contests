#include <bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cin>>x;
	
	x -= 100;
	int cnt = 0;
	while(x >= 50){
	    cnt++;
	    x -= 50;
	}
	cout<<cnt<<endl;
	return 0;
}