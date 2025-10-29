//week08-1.cpp LeetCode 珼驹肈
//3370. Smallest Number With All Set Bits
class Solution {
public:
    int smallestNumber(int n) {
        int N = 0;
        while(n>0){
            n = n / 2;//材1˙,ノブ猭,тn琌[秈]碭计
            N++;
        }
        cout << "瞷祇瞷n琌碭计㎡?" << N << "计\n";
        int ans = 0;//材2˙,ノ癹伴,舱[场常琌1秈N计]
        for(int i=0;i<N;i++){
            ans = ans*2 + 1;
        }
        return ans;
    }
};
