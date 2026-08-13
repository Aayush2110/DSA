class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int count=0;
        long long first=LLONG_MIN;
        long long second=LLONG_MIN;
        long long third=LLONG_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
    
         if(nums[i]==first || nums[i]==second || nums[i]==third){
            continue;
         }
        count++;
         if(nums[i]>first){
            third=second;
            second=first;
            first=nums[i];
         }

         else if(nums[i]>second){
            third=second;
            second=nums[i];
            
         }

         else if(nums[i]>third){
            third=nums[i];
         }


        

        }
        if (count<3){
    return first;
        }

return third;
        
    }
};