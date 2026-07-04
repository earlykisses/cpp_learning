class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          
          sort(strs.begin(),strs.end());

          string temp1 = strs[0];
          string temp2 = strs.back();

          int i = 0;
          int j = 0;
          string temp = "";

          while(i<temp1.length() && j<temp2.length()){

                if(temp1[i] == temp2[j]){
                    temp.push_back(temp1[i]);
                }
                else
                break;

                i++;
                j++;
          }

          return temp;
    }
};
