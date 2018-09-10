class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> answer;
        int i,prev=INT_MIN+S.length()+100;
        for(i=0;i<S.length();i++){
            if(S[i]==C) prev=i;
            answer.push_back(i-prev);
        }
        prev=INT_MAX;
        for(i=S.length()-1;i>=0;i--){
            if(S[i]==C) prev=i;
            answer[i]=min(answer[i], prev-i);
        }
        return answer;
    }
};
