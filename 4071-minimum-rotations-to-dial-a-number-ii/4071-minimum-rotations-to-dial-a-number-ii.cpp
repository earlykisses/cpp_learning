class Solution {
public:
    int minRotations(int n, string s) {
        auto dist= [](int a,int b){
            int d=abs(a-b);
            return min(d,10-d);
        };
        int total = dist(0,s[0] - '0');
        for(int i=1;i<n;i++){
            total +=dist(s[i-1] - '0',s[i] -'0');
        }
        int ans=total;
        int last=s[n-1] -'0';
        for(int k=0;k<n;k++){int first=(k==0) ? 0: s[k-1]- '0';
                            int start=s[k]-'0';
                            int oldCost= dist(first,start);
                            int newCost=dist(first,last);
                            if(k==0){
                                oldCost=dist(0,start);
                                newCost=dist(0,last);
                            }
                            ans=min(ans,total-oldCost+newCost);
                            }
        return ans;
        
    }
};