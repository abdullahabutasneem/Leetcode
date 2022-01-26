vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        int a,b;
        for(int i=0;i<nums.size();i++){
            int x = target - nums[i];
            if(mp.find(x)==mp.end()){
                mp[nums[i]] = i;
            }
            else{
                a = i;
                b = mp[x];
                break;
            }
        }
        
        ans.push_back(a);
        ans.push_back(b);
        return ans;
}
