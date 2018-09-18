#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-->0){
		int l,c,k=1;
		cin>>l>>c;
		c=c*3+1;
		l=3*l+1;
		int total=l*c,i=0,r=0;
			while(total-->0){
				if(r%3==0){
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
						if(k<=2){
							cout<<".";
							k++;	
						}
						else if(k==3){
							cout<<"*";
							k=1;
						}
							i++;
					}
					if(i==c){
						cout<<endl;
						r++;
						i=0;
						k=1;
					}
				}
			}
		cout<<endl;
	}

	return 0;
}