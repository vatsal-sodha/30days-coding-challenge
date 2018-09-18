#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-->0){
		int l,c;
		cin>>l>>c;
		int total=l*c*16,i=0,r=0;
			while(total-->0){
				if(r==0 || r==(l-1)){
					cout<<"*";
					i++;
					if(i==c){
						cout<<endl;
						r++;
						i=0;
					}
				}
				else{
					if(i==0 || i==(c-1)){
						cout<<"*";
						i++;
					}
					else{
						cout<<".";
						i++;
					}
					if(i==c){
						cout<<endl;
						r++;
						i=0;
					}
				}
			}
		cout<<endl;
	}

	return 0;
}