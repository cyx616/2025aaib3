//week03-4b.cpp 第2種寫法
// LeetCode 學習計畫第6週 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;//搬東西用nums[k++] = nums[i] 這種寫法
        for(int i=0;i<nums.size();i++){//全部巡一次
            if(nums[i] !=0)nums[k++] = nums[i];//搬到的k位置,再++
        }

        for(int i=k; i<nums.size(); i++){//從k往右[刷0]
            nums[i] = 0;//之後,塞 0 的值
        }
    }
};
