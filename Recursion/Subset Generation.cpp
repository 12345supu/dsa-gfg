//Given a set represented as a string, write a recursive code to print all the subsets of it. The subsets can be printed in any order.

#include <bits/stdc++.h>
using namespace std;
void powerSet(string str, int index = 0,
              string curr = "")
{
    int n = str.length();

    if (index == n) {
        cout << curr << endl;
        return;
    }
    powerSet(str, index + 1, curr + str[index]);
    powerSet(str, index + 1, curr);
}
