///week05-3c.cpp 三合一的Part1/Part2 Input/Output
///Part3:stringstream斷字Part4:反過來algorithm
///CPE 這次的第2題 UVA 483 Word Scranble把字弄反
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string line;///Part 1:Input
    while(getline(cin,line)) {
    ///讀入1行 一直讀,讀到Ctrl-z才結束
        stringstream ss(line);
        string word;
        ss>>word;
        reverse(word.begin(), word.end());
        cout << word;
        while(ss >> word){
            reverse(word.begin(), word.end());
            cout << " " << word;
        }
        cout << endl;
        ///Part 2: Output
        ///cout << line << endl;///先隨便印出來
    }
}
