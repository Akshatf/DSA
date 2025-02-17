#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

// mandatory to pass number of col in 2D array because (c*i+j)

void findelement(int arr[][4], int target, int rsize, int csize)
{
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Yes found at " << i << ", " << j << " index ";
                return;
            }
        }
    }
    cout << "Target not found";
}

bool findelement2(int arr[][4], int target, int rsize, int csize)
{
    for (int i = 0; i < rsize; i++)
    {
        for (int j = 0; j < csize; j++)
        {
            if (arr[i][j] == target)
            {
                // cout<<"Yes found at "<<i<<", "<<j <<" index ";
                return true;
            }
        }
    }
    return false;
}

void findelement3(vector<vector<int>> &arr, int target){
    int rsize = arr.size();
    int csize=arr[0].size();
    for(int i = 0;i<rsize;i++){
        for(int j =0;j<csize;j++){
            if(arr[i][j]==target){
                cout<<"Found at "<<i<<" "<<j<<" indexs";
                return;
            }
        }
    }
    cout<<"Target not found";
}

int minimumvalue(int arr[][4],int rsize , int csize){

    int minvalue = INT_MAX;

    for( int i = 0 ; i<rsize;i++){
        for(int j = 0 ; j <csize; j++){
            minvalue=min(arr[i][j],minvalue);
        }
    }
    return minvalue;
}

int maximumvalue(int arr[][4],int rsize , int csize){

    int maxvalue = INT_MIN;

    for( int i = 0 ; i<rsize;i++){
        for(int j = 0 ; j <csize; j++){
            maxvalue=max(arr[i][j],maxvalue);
        }
    }
    return maxvalue;
}

int rowwisesum(int arr[][4], int rsize , int csize){

    for(int i= 0 ; i <rsize; i++){
        int sum = 0 ; 
        for(int j = 0 ;j< csize ; j++ ){
            sum = sum + arr[i][j]; 
        }
        cout<<"Sum of row " <<i<<" : "<<sum<<endl;
    }
}

int colwisesum(int arr[][4], int rsize , int csize){

    for(int j= 0 ; j <csize; j++){
        int sum = 0 ; 
        for(int i = 0 ;i< rsize ; i++ ){
            sum = sum + arr[i][j]; 
        }
        cout<<"Sum of col " <<j<<" : "<<sum<<endl;
    }
}

int diagonalsum1(int arr[][3],int rsize, int csize){
    int sum = 0 ; 
    for(int i= 0 ; i<rsize; i++){
        sum = sum + arr[i][i]; 
    }
    cout<<"Sum of "<<" : "<<sum<<endl;
}

int diagonalsum2(int arr[][3],int rsize, int csize){
    int sum = 0 ; 
    for(int i= 0 ; i<rsize; i++){
        for(int j = 0;j<csize;j++){
            if(i+j==rsize-1){
                sum = sum + arr[i][j]; 
            }
        }
        
    }
    cout<<"Sum is "<<" : "<<sum<<endl;
}

// By using another array
int transposeofmatrix(int arr[][3], int rsize , int csize){
    int ans [100][100];
    for(int i =0; i<rsize;i++){
        for(int j = 0 ; j<csize;j++){
            ans[i][j]= arr[j][i];
        }
    }
    for(int i = 0; i<rsize;i++){
        for(int j = 0; j<csize;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

//within same array using swap function 
int transposeofmatrix2(int arr[][3], int rsize , int csize){

    for(int i =0; i<rsize;i++){
        for(int j = i ; j<csize;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i = 0; i<rsize;i++){
        for(int j = 0; j<csize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{

    // int arr[3][4] = {
    //     {10, 20, 30, 40},
    //     {50, 55, 57, 59},
    //     {69, 73, 79, 89}};
    // int rsize = 3;
    // int csize = 4;
    // int target;
    // cout << "Enter target element";
    // cin >> target;

    // findelement(arr, target, rsize, csize);

    // bool ans = findelement2(arr,target,rsize,csize);
    // cout<<ans;





    // vector<vector<int>> arr (4, vector<int>(3,0));
    // int rsize = arr.size();
    // int csize = arr[0].size();
    // int target;


    // // inserting values 

    // for(int i=0;i<rsize;i++){
    //     for(int j =0; j<csize;j++){
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
    // }
    // cout<<"enter target"<<endl;
    // cin>>target;

    // findelement3(arr,target);




    // MIN NUMBER  

    // int arr[3][4] = {
    //     {10, 20, 30, 40},
    //     {50, 55, 57, 59},
    //     {69, 73, 79, -89}};
    // int rsize = 3;
    // int csize = 4;
    // int ans = minimumvalue(arr,rsize,csize);
    // cout<<ans<<endl;


    // MAX NUMBER

    // int arr[3][4] = {
    //     {10, 20, 30, 40},
    //     {50, 55, 57, 59},
    //     {69, 73, 79, -89}};
    // int rsize = 3;
    // int csize = 4;
    // int ans = maximumvalue(arr,rsize,csize);
    // cout<<ans<<endl;


    // int arr[3][4] = {
    //     {10, 20, 30, 40},
    //     {50, 55, 57, 59},
    //     {69, 73, 79, -89}};
    // int rsize = 3;
    // int csize = 4;
    // rowwisesum(arr,rsize,csize);
    // colwisesum(arr,rsize,csize);


    int arr[3][3] = {
        {10, 20, 30},
        {50, 55, 57},
        {69, 73, 79}};
    int rsize = 3;
    int csize = 3;
    // diagonalsum1(arr,rsize,csize);
    // diagonalsum2(arr,rsize,csize);
    // transposeofmatrix(arr,rsize,csize);
    transposeofmatrix2(arr,rsize,csize);
}

