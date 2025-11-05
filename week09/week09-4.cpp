//week09-4.cpp 學習計畫 Matrix 第3題
//LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int top=0, botton=M-1, left=0, right=N-1;
        vector<int>ans;
        while(top<=botton && left <= right){
            for(int j=left; j<=right; j++){//沿著 top 行
                ans.push_back(matrix[top][j]);
            }
            top++;//每完成一個方向,就收縮對應的邊界
            if(top > botton) break;

            for(int i=top; i<=botton; i++){//沿著 right右邊界
                ans.push_back(matrix[i][right]);
            }
            right--;//收縮右邊界
            if(left>right)break;

            for(int j=right;j>=left;j--){
                ans.push_back(matrix[botton][j]);
            }
            botton--;
            if(top > botton) break;

            for(int i=botton; i>=top; i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            if(left > right)break;
        }
        return ans;
    }
};
