class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product =1;
        int original=n;
        while(n>0){
            int digit =n%10;
            sum = sum+digit;
            product = product *digit;
            n/=10;
        }
        int ans=sum+product;
        if(original% ans==0){
            return 1;
        }
        return 0;
    }
};