class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
     int i=left,j,flag;
     vector<int>v;
     while(i<=right){
         if(i<=9)
             v.push_back(i);
         else{
            j=i;
             flag=0;
             while(j>0){
                int rem=j%10;
                if (rem!=0){
                    if(i%rem==0){
                    }
                     else{
                         flag=1;
                         break;
                     }
                 }
                 else{
                     flag=1;
                 }
            j=j/10;
             }
            if(flag==0)
                v.push_back(i);
        }
         i++;
     }
        return v;
    }
};
