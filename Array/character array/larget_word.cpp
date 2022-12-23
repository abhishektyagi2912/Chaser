#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin.getline(arr,n); // getline full array length ko le leta h
    cin.ignore();

    int maxLen=0,currLen=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==' '|| arr[i]=='\0')
        {
            if (currLen> maxLen )
            {
                maxLen=currLen;
            }
            currLen=0;
        }
        currLen++;
        if (arr[i]='\0')
        {
            break;
        }
    }
    


    return 0;
}