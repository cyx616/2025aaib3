//week07-3.cpp LeetCode 學習計畫 Simulation 第1題
//682. Baseba11 Game 計算點數
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for (string op: operations){//Part1：（++進階迴囲
            cout<<"現在讀到了："<<op <<"\n";//Part@2：看他是誰，等一下删掉喔
             //Part03：一堆if判斷要怎麼模擬
            if(op[0]=='C'){//清掉最後1位
                a.pop_back();
            }
            else if(op[0]=='D'){
                a.push_back(a.back()*2);
            }
            else if(op[0]=='+'){
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a. push_back(temp);
                a.push_back(temp+temp2);
            }
            else{
                a.push_back(stoi(op));//Part04:.push_back()
            }
        }
        int ans=0;
        for(int now:a){//Parto5:C++進階迴图 要看陣列裡的值
            ans+= now;//cout << now <<""；//Parto2：看他是誰，等一下刪掉喔（看陣列裡的值）
        }
        //先隨便return等一下再寫真的答案
        return ans;
    }
};
