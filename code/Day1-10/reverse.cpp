class Solution {
public:
    string reverseString(string s) {
     // reverse(s.begin(),s.end());
     // return s;
    int l=s.length()/2;
    for(int i=0;i<l;i++){
        swap(s[i],s[s.length()-i-1]);
        
    }
        return s;
    }
};
