//week15-3.cpp 學習計畫 Basic 第5題,超難,很難想到解法
//459. Repeated Substring Pattern
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2=s + s;//兩倍長度
        string s3=s2.substr(1,s2.length()-2);
        return s3.find(s) != string::npos;
    }
};
