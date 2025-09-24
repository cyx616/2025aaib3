//week03-4a.cpp 第1種寫法,成功!
// LeetCode 學習計畫第6週 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;//先偷偷塞答案,在塞回去 nums
        for(int i=0;i<nums.size();i++){//先偷偷塞答案,在塞回去 nums
            if(nums[i] !=0)ans.push_back(nums[i]);
        }//有[不是0的數]偷偷備份、塞到答案後面

        for(int i=0; i<nums.size(); i++){//再巡一次
            if(i<ans.size())nums[i] = ans[i];//塞剛剛輩分的答案
            else nums[i] = 0;//之後,塞 0 的值
        }
    }
};
