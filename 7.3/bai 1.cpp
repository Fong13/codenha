#include<bits/stdc++.h>
using namespace std;
int a[1000006];
int main(){
	int n,k,h;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
		cout<<a[k];
	return 0;
}
