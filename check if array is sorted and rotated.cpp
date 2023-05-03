class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size()==1) return true;
        int index=-1;
       for(int i=0;i<nums.size()-1;i++){
        if(nums[i] > nums[i+1]){
            index=i;
            break;
        }
       }
       if(index==-1) return true;
       cout<<index<<endl;
      reverse(nums.begin(),nums.begin()+index+1);
      reverse(nums.begin()+index+1,nums.end());
      reverse(nums.begin(),nums.end());
      for(int i=0;i<nums.size()-1;i++){
          if(nums[i]>nums[i+1]) return false;
      }
      return true;
    }
};