#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        long long n,maxX,minX;
        cin>>n>>minX>>maxX;

        long long w,b,oddValue=3,evenValue=2,num1,num2;

        //1 2
        //1 2
        for(int i=0;i<n;i++){
            cin>>w>>b;

            oddValue=w*oddValue+b;  //5
            evenValue=w*evenValue+b;//4
        }

        if(oddValue%2==0 && evenValue%2==0){
            num1=maxX-minX+1;
            num2=0;
        }
        else if(oddValue%2!=0 && evenValue%2!=0){
            num1=0;
            num2=maxX-minX+1;
        }
        else{
            long long eCount=0,oCount=0;
            for(int i=minX;i<=maxX;i++){
                if(i%2==0){
                    eCount++;
                }
                else{
                    oCount++;
                }
            }

            if(evenValue%2==0){
                num1=eCount;
                num2=oCount;
            }
            else{
                num1=oCount;
                num2=eCount;
            }
        }
        cout<<num1<<" "<<num2<<"\n";
    }

    return 0;
}
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t-->0){
// 		long long int n,min,max,sum_even=2,sum_odd=3,temp_odd,temp_even,i;
// 		cin>>n>>min>>max;
// 		long long int w,b;
// 		while(n-->0){
// 			cin>>w>>b;
// 			sum_even=sum_even*w+b;
// 			sum_odd=sum_odd*w+b;
// 		}
// 		if(sum_even %2 ==0 && sum_odd%2==0){
// 			cout<<max-min+1<<" "<<0<<endl;
// 		}
// 		else if(sum_even %2 ==1 && sum_odd%2==1){
// 			cout<<0<<" "<<max-min+1<<endl;
// 		}
// 		else{
// 			long long int eTotal=0,oTotal=0;
// 			for(i=min;i<=max;i++){
// 				if(i%2==0)
// 					eTotal++;
// 				else
// 					oTotal++;
// 			}
// 			if(sum_even %2==0){
// 			cout<<eTotal<<" "<<oTotal<<endl;
// 			}
// 			else{
// 			cout<<oTotal<<" "<<eTotal<<endl;
// 			}
// 		}
// 	}

// 	return 0;
// }