class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
        int n=nums.size();
        vector<int>a=nums,b=target;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a!=b)
        return 0;
        vector<bool>suffixsorted(n,true);
        for(int i=n-2;i>=0;i--){
            suffixsorted[i]=suffixsorted[i+1] && target[i]>=target[i+1];
        }
        int c=0;
        bool prefixsame=true;
        for(int i=0;i<n;i++){
            if(prefixsame && suffixsorted[i]){
                c++;
            }
            if(nums[i]!=target[i]){
                prefixsame=false;
            }
        }
        return c;
    }
};