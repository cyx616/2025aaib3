///week05-3b.cpp �T�X�@��Part1/Part2 Input/Output
///CPE �o������2�D UVA 483 Word Scranble��r�ˤ�
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line;///Part 1:Input
    while(getline(cin,line)) {
    ///Ū�J1�� �@��Ū,Ū��Ctrl-z�~����
        stringstream ss(line);
        string word;
        while(ss >> word){
            reverse(word.begin(), word.end());
            cout << " " << word;

        }
        cout << endl;
        ///Part 2: Output
        ///cout << line << endl;///���H�K�L�X��
    }
}
