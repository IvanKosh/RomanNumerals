/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 17:10
 */

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    int num, i;
    int dnum[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string rnum[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    while(stream >> num) {
        for(i = 0; i < 13; i++) {
            while(num >= dnum[i]) {
                cout << rnum[i];
                num -= dnum[i];
            }
        }
        cout << '\n';
    }
    return 0;
}