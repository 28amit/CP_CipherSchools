class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int> m;
   for(int i=0;i<nums.size();i++)
   {
       int f=target-nums[i];
       if(m.count(f))
       {
          v.push_back(m[f]);
           v.push_back(i);
           return v;
       }
       m[nums[i]]=i;
   }
     return v;
    }
};