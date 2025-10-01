//week04-5.cpp
//LeetCode 學習計畫第7題 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();
        for(int i=N-1; i>=0; i--){
            if(digits[i] == 9)digits[i] = 0;
            else{
                digits[i]++;//就+1後,沒有進位
                return digits;//找到答案了送出去
            }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
