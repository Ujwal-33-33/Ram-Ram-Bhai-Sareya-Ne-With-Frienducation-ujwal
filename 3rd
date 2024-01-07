class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a = nums.size();
        vector<int>v(a+1);
        iota (begin(v), end(v), 0);
        for(int i = 0;i<a;i++){
            v[nums[i]] = -1;
        }
        for(int i = 0;i<a+1;i++){
            if(v[i] != -1){
                return v[i];
            }
        }
        return 0;
    }
};
