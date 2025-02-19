#include<iostream>
using namespace std;

void sortzeroonetwo(int arr[], int size)
{
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            zerocount++;
        else if (arr[i] == 1)
            onecount++;
        else if (arr[i] == 2)
            twocount++;
    }

    // int i = 0;
    // while (zerocount--) arr[i++] = 0;
    // while (onecount--) arr[i++] = 1;
    // while (twocount--) arr[i++] = 2;

    int index = 0;
    for (int i = 0; i < zerocount; i++)
    {
        arr[index++] = 0;
    }
    for (int i = 0; i < onecount; i++)
    {
        arr[index++] = 1;
    }
    for (int i = 0; i < twocount; i++)
    {
        arr[index++] = 2;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "0" << " " << zerocount << endl;
    cout << "1" << " " << onecount << endl;
    cout << "2" << " " << twocount << endl;
}

void dutchnationalflag(int arr[], int size)
{
    int low = 0, mid = 0, high = size - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        { // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    // Print the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 0, 1, 0, 2, 0, 0, 1, 1};
    int size = 10;
    // sortzeroonetwo(arr, size);
    // dutchnationalflag(arr, size);
}