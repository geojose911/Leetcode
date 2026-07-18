class Solution {
public:
    int findGCD(vector<int>& nums) {
        int l=nums[0],s=nums[0];
      for(int i=0;i<nums.size();i++){
        if(nums[i]<s){
          s=nums[i];}
      }
      for(int j=0;j<nums.size();j++){
        if(nums[j]>l){
          l=nums[j];
        }
      }
      return std::gcd(s,l);

    }
};