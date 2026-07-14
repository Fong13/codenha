#include<bits/stdc++.h>
using namespace std;
int a[1000006];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int kq=0,dem=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i-1]){
			dem++;
		}
		if(dem==k){
			kq=a[i];
		}
	}
	cout<<kq;
	return 0;
} 
