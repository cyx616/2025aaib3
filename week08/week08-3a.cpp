//week08-3a.cpp LeetCode �ǲ߭p�esimulation
//1275. Find Winner on a Tic Tac Toe Game
//�ݰ_��3x3�}�C, �ҥH�} int a[3][3] = {}�}�C �A��myPrint()�L�X��
class Solution{
public:
    void myPrint(int a[3][3]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << a[i][j] <<" ";
            }
            cout<< "\n";
        }
        cout<< "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};//���j�A��
        int now = 1;
        for(vector<int> move : moves){
            int i=move[0], j=move[1];//���aA ��1�Ӫ��a
            a[i][j] = now;//��}�C�L�X�ӳ�!!!�ڭ̪��p����
            myPrint(a);
            if(now==1)now = 2;
            else now = 1;
        }
        return "A";//���H�Kreturn��!
    }
};
