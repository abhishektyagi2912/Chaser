// apni kaksha c++ placement course no:- 8.4 tu bhul jaye to dekh liyo bsdike
// consicutive array that sum or diffrence is equal

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 2; // because 2 element to hoga hi
    int pd = arr[1] - arr[0];
    int j = 2;    // suru k do to pd m dekh hi liye na  
    int curr = 2; // length of ai given ki start 2 s krna
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(curr, ans);
        j++;
    }
    cout << ans;

    return 0;
}