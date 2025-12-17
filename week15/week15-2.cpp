//week15-2.cpp 學習計畫 Math 最後一題 Medium 題
//LeetCode 50. Pow(x, n) 算出x的n次方,不能用for迴圈
//因為 n 可能非常大 2^31 也就是說10^9 很大, 不能傭for迴圈
class Solution {
public:
    double myPow(double x, long long int n) {
        if(x==1)return 1;
        if(n<0)return myPow(1/x,-n);//負的,函式呼叫函式
        if(n==0) return 1;//所有數的0次方,都是1

        //思考: ???的???次方
        double half = myPow(x,n/2);//一半喔(要用double才能留下小數點)
        if(n%2==0)return half * half;
        else return half * half *x;
    }
};
