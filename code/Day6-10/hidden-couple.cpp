#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int j=1;
	while(j<=t){
		string s;
		cin>>s;
		int sum=0;
		for(int i=0;i<s.size();i++){
			sum+=int(s[i]);
		}
		if(sum%3==0)
			cout<<"Case "<<j<<": Yes"<<endl;
		else
			cout<<"Case "<<j<<": No"<<endl;
	j++;
	}
	return 0;
}