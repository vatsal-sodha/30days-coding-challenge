#include <iostream>
#include <cmath>
using namespace std;
// long long int gcd(long long a, long long b){
// 	if(b==0)
// 		return a;
// 	else
// 		gcd(b,a%b);
// }
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		// int arr[n],i=0,l;
		// long long int total=9,d,t=9*pow(10,n-1);
		// if(n%2==0)
		// 	l=n/2;
		// else
		// 	l=(n/2)+1;

		// for(i=1;i<l;i++){
		// 	total*=10;

		// }
		// d=gcd(t,total);
		// cout<<total/d<<" "<<t/d<<endl;
		cout<<"1 1";
		for(int i=0;i<n/2;i++){
			cout<<"0";
		}
		cout<<endl;

	}
	return 0;
}