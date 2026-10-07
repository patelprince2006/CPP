class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size(),ans=-1;

        for(int i=0;i<n;i++){
            if(nums[i]<10){
            if(nums[i]==i){
                ans=i;
                break;
            }
            }
            else{
                int p=nums[i];
                int sum = 0;
                while(p>0){
                int ld=p%10;
                   sum += ld;
                   p=p/10;
                }
                if(sum==i){
                ans=i;
                break;
            }
            }
        }
        return ans;
    }
};