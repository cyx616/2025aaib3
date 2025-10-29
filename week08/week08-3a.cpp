//week08-3a.cpp LeetCode 學習計畫simulation
//1275. Find Winner on a Tic Tac Toe Game
//看起來3x3陣列, 所以開 int a[3][3] = {}陣列 再用myPrint()印出來
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
        int a[3][3] = {};//有大括號
        int now = 1;
        for(vector<int> move : moves){
            int i=move[0], j=move[1];//玩家A 第1個玩家
            a[i][j] = now;//把陣列印出來喔!!!我們的小幫手
            myPrint(a);
            if(now==1)now = 2;
            else now = 1;
        }
        return "A";//先隨便return啦!
    }
};
