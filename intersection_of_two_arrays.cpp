class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector <int> nums3;
        for(int i : nums1){
        
        for(int j : nums2){
       
       if(i==j){
          bool found=false;

          for(int x : nums3){

            if(x==i){
                found=true;
            }
          }
          if(found == false) {
    nums3.push_back(i);
}
       }
          
          
          
          }

        }
        return nums3;
    }
};