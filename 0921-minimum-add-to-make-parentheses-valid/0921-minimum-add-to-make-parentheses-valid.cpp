class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance=0,unmatchedclosing=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                balance++;
            } else if(s[i]==')'){
                balance--;
                if(balance <0){
                    unmatchedclosing++;
                    balance=0;
                }
            }
            }
            return balance + unmatchedclosing;
    }
};