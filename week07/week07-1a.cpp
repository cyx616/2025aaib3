///week07-1.cpp
///TAICA NYCU ��߶�����q�j�ǹq���t �����Ҳ�6�g
///Input:1-9���Ʀr Output:¶��骺���
///ex. Input: 3
///3 3 3 3 3
///3 2 2 2 3
///3 2 1 2 3
///3 2 2 2 3
///3 3 3 3 3
///Input 2��3�h��, Input 5 ��9�h��
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;///Step01: Input

    for(int i=1;i<2*n;i++){
        for(int j=1;j<2*n;j++){
            if(j>1)cout<<" ";
            cout << n;
        }
        cout <<"�{�b�O��i��"<<i;
        cout << endl;///����
    }
}
