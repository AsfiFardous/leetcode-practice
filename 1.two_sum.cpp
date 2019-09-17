class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        vector<pair<int,int> > v;
        for(i=0;i<nums.size();i++){
            v.push_back(make_pair(nums[i], i));
        }
        sort(v.begin(),v.end());
        vector<int> ans;
        i=0;
        while(i<j){
            if(v[i].first+v[j].first==target){
                ans.push_back(v[i].second);
                ans.push_back(v[j].second);
                return ans;
            }
            else if(v[i].first+v[j].first>target){
                j--;
            }
            else
                i++;
        }
        return ans;
    }
};
