//week10-3.cpp 厩策璸礶 Matrix 材3肈
//LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();
        int top=0,bottom=M-1,left=0,right=N-1;
        vector<int>ans;
        while(top<=bottom && left<=right){
            for(int j=left;j<=right;j++)ans.push_back(matrix[top][j]);//程,┕ǐ
            top++;

            for(int i=top;i<=bottom;i++)ans.push_back(matrix[i][right]);//程︽,┕ǐ
            right--;
            if(!(top<=bottom &&  left<=right))break;

            for(int j=right;j>=left;j--)ans.push_back(matrix[bottom][j]);//程,┕オǐ
            bottom--;
            for(int i=bottom;i>=top;i--)ans.push_back(matrix[i][left]);//程オ︽,┕ǐ
            left++;
        }
        return ans;
    }
};
