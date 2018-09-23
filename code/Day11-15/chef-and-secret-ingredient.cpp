#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int x,max;
		int n,f=0;
		cin>>n>>x;
		max=x;
		while(n--){
			long long int temp;
			cin>>temp;
			if(temp>=max)
				f=1;
		}

		if(f==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}