///week01-4b.cpp使用c語言寫
#include <iostream>///使用c++語言外掛
using namespace std;///使用c++語言的命名空間
int main()
{
    int a,b;
    cin >> a>> b;///c++語言 讀資料
    int ans = 0;
    for(int i=a;i<=b;i++){
        if(i%3==0)ans += i;
    }
   cout << ans;///c++語言 印資料
}

