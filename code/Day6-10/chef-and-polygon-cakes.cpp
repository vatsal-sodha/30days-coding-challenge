#include <iostream>
using namespace std;
unsigned long long gcd(unsigned long long a, unsigned long long b){
	if(b==0)
		return a;
	else
		gcd(b,a%b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long a,n,k,sum,tn,d,num,deno;
		cin>>n>>a>>k;
		// sum=(n-2)*180;
		// d=(sum*2)/n-2*a;
		// d=d/(n-1);
		// tn=a+(k-1)*d;
		// cout<<tn<<" "<<d<<endl;
		num=a*n*n+a*n+(k-1)*(n-2)*360-2*a*n*k;
		deno=n*(n-1);
		d=gcd(num,deno);
		cout<<num/d<<" "<<deno/d<<endl;
	}
	return 0;
}