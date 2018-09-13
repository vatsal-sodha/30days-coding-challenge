#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-->0){
		int l,c,total,r=0,i=0;
		cin>>l>>c;
		total=l*c;
		while(total>0){
			if(total%c==0){
				if(c%2==1 && r%2==1){
					cout<<".";
				}
				if(c%2==1 && r%2==0)
					cout<<"*";
				if(c==1)
					cout<<endl;
				i++;
				r++;
			}
			else{
				if(i%2==1){
					cout<<".";
					i++;
				}
				if(i%2==0){
					cout<<"*";
					i++;
				}
				if(i==(c-1)){
					i=0;
					cout<<endl;
				}

			}

			total--;
		}
		cout<<endl;
	}
	// 	while(total>0)
	// 	{
	// 		if(total % c == 0){
	// 			if(k==0){
	// 				cout<<"*";
	// 				i++;
	// 				k=1;
	// 			}
	// 			else if(k==1){
	// 				cout<<".";
	// 				i++;
	// 				k=0;
	// 			}
	// 			if(c==1){
	// 				cout<<endl;
	// 				i=0;
	// 			}
	// 		}
	// 		else{
	// 		if(i%2==0){
	// 			cout<<"*";
	// 			i++;
	// 		}
	// 		else if(i%2==1){
	// 			cout<<".";
	// 			i++;
	// 		}
	// 		if(i==c-1){
	// 			// cout<<"inside";
	// 			cout<<endl;
	// 			i=0;
	// 		}
	// 	}
	// 	total--;
	// 	}
	// 	cout<<endl;
	// }
	return 0;
}