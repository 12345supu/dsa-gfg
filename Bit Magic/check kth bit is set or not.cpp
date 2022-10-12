Method 1 (Left Shift)
  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (n & (1 << (k - 1)) != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

.............................................................
  
Method 2 (Right Shift)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if (((n >> (k - 1)) & 1) != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

.............................................................
  
One line code
  
bool checkKthBit(int n, int k)
    {
        return (n & (1<<k));
        // Your code here
        // It can be a one liner logic!! Think of it!!
    }

