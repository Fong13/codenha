#include<bits/stdc++.h>
using namespace std;
int a[1000006];
int main(){
	int n,x,v=0;
	cin>>n>>x;
	v=n+1;
	for(int i=1;i<=n;i++){
		cin>>a[i];}
		for(int i=1;i<=n;i++){
		if(a[i]==x){
			v=i;
		}}
		if(v<n){
			cout<<v;
		}
		else{
			n=n+1;
		}
	a[n]=x;
}
