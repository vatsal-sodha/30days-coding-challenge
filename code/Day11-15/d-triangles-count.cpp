#include <iostream>
using namespace std;

int main(){
	int t,i=1;
	cin>>t;
	while(t-->0){
		int l,k,n;
		cin>>l>>k;
		if(k>l){
			cout<<"Case "<<i<<": 0"<<endl;
		}
		else{
			n=l-k+1;
			long long int t=((n*n)+n)/2;
			cout<<"Case "<<i<<": "<<t<<endl;
		}
		i++;
	}
	return 0;
}