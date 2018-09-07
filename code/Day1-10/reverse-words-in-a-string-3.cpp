class Solution {
public:
    string reverseWords(string s) {
     string token;
     string s2;
     size_t p;
     while((p=s.find(" "))!= std::string::npos){
         token=s.substr(0,p);
         reverse(token.begin(),token.end());
         s2.append(token).append(" ");
         s.erase(0,p+1);
     }
        reverse(s.begin(),s.end());
        s2.append(s);
        return s2;
    }
};
