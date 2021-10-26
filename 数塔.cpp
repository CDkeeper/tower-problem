#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		memset(a,0,sizeof(a));
		for(int i=0;i<n;++i)
			for(int j=0;j<=i;j++)
				cin>>a[i][j];
		int b[n][n];
		memset(b,0,sizeof(b));
		for(int j=0;j<n;j++)
			b[n-1][j]=a[n-1][j];
			
		for(int i=n-2;i>=0;i--)
		 for(int j=0;j<=i;j++){
		 b[i][j]=a[i][j]+max(b[i+1][j],b[i+1][j+1]);	 
		}
		cout<<b[0][0]<<endl;
	}
}
