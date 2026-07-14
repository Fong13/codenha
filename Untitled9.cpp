#include<bits/stdc++.h>
using namespace std;
int a[1000006];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int m=1;
for(int i=2;i<=n;i++){
		if(a[i]!=a[i-1]){
			a[m+1]=a[i];
			m++;
		}
}
for(int i=1;i<=m;i++){
		cout<<a[i]<<" ";
	}
return 0;
}
