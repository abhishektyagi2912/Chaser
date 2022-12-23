#include <iostream>
using namespace std;

void name(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int first[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    name(first, 10);

    int second[10] = {}; // garbage value
    name(second, 10);

    int third[10];
    fill_n(third, 10, 6); // use for same array
    name(third, 10);

    int sizeofarray = sizeof(third) / sizeof(int); // size of int is 4 that is in bits or the third 10*4 =40/4=10answer
                                                   // but in upper formula if we have an array of size 10 but we put only 2element in it then they do not show ans 2 they show 10 the actual size
    cout << "print " << sizeofarray;

    return 0;
}