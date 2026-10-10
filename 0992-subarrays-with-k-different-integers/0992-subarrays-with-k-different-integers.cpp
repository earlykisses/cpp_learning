class Solution {
public:
int atmost(vector<int>&nums,int k){
    int l=0;
    int r=0;
    int c=0;
    map<int,int>mp;
    while(r<nums.size()){
        mp[nums[r]]++;
        while(mp.size()>k){
            mp[nums[l]]--;
            if(mp[nums[l]]==0)
            mp.erase(nums[l]);
            l++;
        }
        c=c+(r-l)+1;
        r++;
    }
    return c;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};