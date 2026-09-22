class NumArray {
    vector<int>pr;
public:
 
    NumArray(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        pr=move(nums);
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return pr[right];
        }
        return pr[right]-pr[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */