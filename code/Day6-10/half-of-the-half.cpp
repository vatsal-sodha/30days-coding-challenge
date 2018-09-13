#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int t;
	cin>>t;
	while(t >0){
		string s;
		cin>>s;
		int l=s.length();
		int i=0;
		while(i<(l/2)){
			cout<<s[i];
			i+=2;
		}
		cout<<endl;
	t--;
	}
	return 0;
}
