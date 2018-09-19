#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t-->0){
		unsigned long long m,n,temp;
		cin>>m>>n;
		unsigned long long p;
		int arr[n-m]={0};
		int i=0,j;
		if(m<2){
			p=2;
		arr[0]=1;
		}
		else
			p=m;
		temp=p;
		while(p <= n){
			temp=p;
			// cout<<temp;
			while(temp<=n){
				temp=temp+p;
				if(temp<n)
				arr[temp-m]=1;
			}
			i=p+1;
			while(arr[p]!=0 || i<=n)
			{
				if(arr[i-m]==0){
					p=i;
				}
				i++;
			}
		}
		j=m;
		while(j<(n-m)){
			if(arr[j-m]==0){
				cout<<j<<endl;
			}
			j++;
		}
		cout<<endl;
	}
	return 0;
}