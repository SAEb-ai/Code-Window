#include <bits/stdc++.h>
using namespace std;

int recordbreakingday(int a[], int n)
{
    a[n] = -1;
    if (n
        == 1) { // If the no elements are 1 in an array
                // then it is always a record breaking day.
        return 1;
    }
    int max1 = -1;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (max1 < a[i]
            && a[i] > a[i + 1]) // Checking the conditions
                                // given for a record
                                // breaking day.
            ans++;
        max1 = max(max1, a[i]);
    }
    return ans;
}

int main()
{

    int n1 = 8, n2 = 7;
    int a1[n1 + 1] = { 1, 2, 0, 7, 2, 0, 2, 2 };
    int a2[n2 + 1] = { 2, 7, 3, 6, 5, 1, 4 };
    cout << recordbreakingday(a1, n1) << endl;
    cout << recordbreakingday(a2, n2);
    return 0;
}
