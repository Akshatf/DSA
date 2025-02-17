#include <iostream>
using namespace std;

void sortzeroone(int arr[], int n)
{
    int zerocount = 0;
    int onecount = (n - zerocount);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zerocount++;
        }
    }

    // insertion
    fill(arr, arr + zerocount, 0);
    fill(arr + zerocount, arr + n, 1);

    // int i = 0 ;
    // for(;i< zerocount ; i++){
    //     arr[i] =0;
    // }
    // for(;i< onecount ; i++){
    //     arr[i] = 1;
    // }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// void pairr(int arr[],int n ){
//     for(int i = 0 ; i<n;i++){
//         for(int j = 0 ; j<n;j++){
//             cout<<arr[i]<<","<<arr[j]<<"  ";
//         }
//         cout<<endl;
//     }
// }
// void pairr(int arr[],int n ){
//     for(int i = 0 ; i<n;i++){
//         for(int j = i+1 ; j<n;j++){
//             cout<<arr[i]<<","<<arr[j]<<"  ";
//         }
//         cout<<endl;
//     }
// }

// void pairr(int arr[],int n ){
//     for(int i = 0 ; i<n;i++){
//         for(int j = n-1 ; j>=0;j--){
//             cout<<arr[i]<<","<<arr[j]<<"  ";
//         }
//         cout<<endl;
//     }
// }

// void pairr(int arr[],int n ){
//     for(int i = 0 ; i<n;i++){
//         for(int j = n-1 ; j>=0;j--){
//             cout<<arr[i]<<","<<arr[j]<<"  ";
//         }
//         cout<<endl;
//     }
// }

// void pairr(int arr[],int n ){
//     for(int i = 0 ; i<n;i++){
//         for(int j = 0 ; j<i;j++){
//             cout<<arr[i]<<","<<arr[j]<<"  ";
//         }
//         cout<<endl;
//     }
// }

// TWO SUM
// my approach

// void twosum(int arr[], int n, int target){
//     for(int i = 0; i< n;i++){
//         for(int j= 0;j<n ;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<"Index of i:"<<i<<","<<"Index of j:"<<j;
//             }
//         }
//         cout<<endl;
//     }
// }

pair<int, int> checkTwoSum(int arr[], int n, int target)
{

    // here ans is variable name
    pair<int, int> ans = make_pair(-1, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    return ans;
}

void checkTwoSum2(int arr[], int n, int target, int ans[])
{

    // USING EXTRA ARRAY
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans[0] = arr[i];
                ans[1] = arr[j];
                return;
            }
        }
    }
    return;
}

void threesum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout<<i<<", "<<j<<", "<<k<<endl;
                }
            }
        }
    }
}


void rotatearray(int arr[], int n , int shift){
    int finalshift = shift%n;
    if(finalshift==0){
        return;
    }
    int temp[1000];
    int index = 0;
    for(int i = n-finalshift;i<n;i++){
        temp[index]= arr[i];
        index++;
    }
    for(int i = n-1 ; i>=0;i--){
        arr[i]=arr[i-finalshift];
    }
    for(int i =0 ; i<finalshift;i++){
        arr[i]=temp[i];
    }

}

int main()
{

    // // FIND UNIQUE USING BRUTE FORCE

    // int arr[] = {1, 2, 3, 4, 3, 2, 1};
    // int size = 7;
    // for (int i = 0; i < size; i++)
    // {
    //     int count = 0;
    //     // Check how many times arr[i] appears
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //         }
    //     }
    //     // Unique number found
    //     if (count == 1)
    //     {
    //         cout << "Unique number: " << arr[i] << endl;
    //         break;
    //     }
    // }

    // // FIND UNIQUE USING XOR

    // int  nums []={1,2,3,2,1};
    // int ans = 0 ;
    // int n = 5;
    // for(int i = 0 ; i< n ; i++){
    //     ans = ans ^ nums[i];
    // }
    // cout<<"unique "<<ans;

    // int arr []={1,0,0,0,1,1,1,1,1,0};
    // int n=10;
    // sortzeroone(arr,n);

    // int arr [] = {1,2,3,4};
    // int n = 4;
    // pairr(arr,n);

    // int arr[] = {10, 20, 30, 5, 15};
    // int n = 5;
    // int target = 35;
    // twosum(arr, n, target);

    // pair<int,int> ans = checkTwoSum(arr,n,target);
    // if(ans.first==-1&&ans.second==-1){
    //     cout<<"Pair not found";

    // }
    // else{
    //     cout<<"Pair Found"<<ans.first<<","<<ans.second<<endl;
    // }

    // int ans []={INT16_MIN,INT16_MIN};
    // checkTwoSum2(arr,n,target,ans);
    // cout<<ans[0]<<","<<ans[1];


    // threesum(arr,n,target);


    int arr[]={10,20,30,40,50,60};
    int n = 6;
    int shift = 172;
    cout<<"Before"<<endl;
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotatearray(arr,n,shift);
    cout<<"after"<<endl;
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }

}