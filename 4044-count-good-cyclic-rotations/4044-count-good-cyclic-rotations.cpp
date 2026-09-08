class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
        int half = n/2;
        long long total =0;
        for(int x : nums){
            total +=x;
        }
        long long window =0;
        for(int i=0;i<half;i++){
            window+= nums[i];
        }
        int ans=0;
        for(int i=0;i <n;i++){
            if(window > total- window){
                ans++;
            }
            window -= nums[i];
            window += nums[(i + half) % n];
        }
        return ans;
    }
};