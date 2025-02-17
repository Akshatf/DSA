// #include <iostream>
// using namespace std;

// int main()
// {
//     // int arr [10];

//     // int brr[4] = {10,2};
//     // cout<< brr[2];

//     // int crr[4];
//     // fill (crr,crr+4,101);
//     // cout<<crr[0]<<" "<<crr[1]<<" "<<crr[2]<<" "<<crr[3]<<" "<<crr[4]<<" "<<crr[5];

//     // // input
//     // int arr[5];
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << "Enter the value of index " << i << endl;
//     //     cin >> arr[i];
//     // }
//     // // printing array
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << i[arr] << " ";
//     // }
// }

// array with functions

#include <iostream>
#include <limits.h>
using namespace std;

// void print ( int arr [], int size){

//     arr [1]=50;
//         for (int i = 0; i < size; i++)
//     {
//         cout << i[arr] << " ";
//     }

// }
// int main(){
//     int arr[] = {10,20,30,40,50,60};
//     int size = 6;
//     print ( arr,size);
// }

// void print ( int arr [], int size){

//     for (int i = 0; i < size; i++)
// {
//     arr[i]= arr[i]+10;
// }

// }
// int main(){
// int arr[4] = {0};
// int size = 4;
// print ( arr,size);
// for (int i = 0; i < size; i++)
// {

//     cout << i[arr] << " ";
// }
// }

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void solve1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 10;
    }
}

bool findtarget(int arr[], int n, int target)
{
    // traverse the entire arrat
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    // mtlb pure loop me kahi bhi target anhi mila means element not found
    return false;
}

int maxnumber(int arr[], int n)
{
    int maxans = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        maxans = max(maxans, arr[i]);
        // if(arr[i]>maxans){
        //     maxans = arr[i];
        // }
    }
    return maxans;
}

void countnum(int brr[], int n)
{
    int onecount = 0;
    int zerocount = 0;
    for (int i = 0; i < n; i++)
    {
        if (brr[i] & 1)
        {
            onecount++;
        }
        else
        {
            zerocount++;
        }
    }
    cout << "count 0 is " << zerocount << endl;
    cout << " count 1 is " << onecount << endl;
}

void extremeprint(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i];
            i++;
        }
        else
        {
            cout << arr[i];
            cout << arr[j];
            i++;
            j--;
        }
    }
}

// REVERSE ARRAY

void y(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseXOR(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        arr[start] ^= arr[end];
        arr[end] ^= arr[start];
        arr[start] ^= arr[end];
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 0;
    // solve1(arr,size);
    // print(arr,size);
    // bool ans = findtarget(arr, size ,target);
    // cout<<ans;

    //    int max = maxnumber(arr,size);
    //    cout<<"max num is "<<max<<endl;

    // int brr[] ={0,0,0,1,1};
    // int n = 5;
    // countnum(brr,n);

    // extremeprint(arr , size);
    // reverseArray(arr,size);
    // y(arr, size);

    // using bitwise XOR
    // reverseXOR(arr,size);
}