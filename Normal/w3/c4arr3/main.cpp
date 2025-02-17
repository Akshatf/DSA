#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // decalre 2D array
    //  int arr[4][3];

    // intitalise

    // int arr [3][2] = {
    //     {10,20},
    //     {30,40},
    //     {50,60}
    // };

    // int arr [3][2] = {10,20,30,40,50,60};

    // remaining places will be filled by 0
    // int arr[3][2] = {10, 20};

    // cout<<arr[2][1]<<endl;

    // traverseing

    // // row-wise

    // int arr [3][3] = {10,20,30,40,50,60,70,80,90};
    // int rsize = 3;
    // int csize = 3;
    // for (int i = 0; i < rsize; i++)
    // {
    //     for (int j = 0; j < csize; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     // cout << endl;
    // }

    // // col-wise

    // int arr[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    // int rsize = 2;
    // int csize = 3;

    // only works for square matrix

    // for (int i = 0; i < rsize; i++)
    // {
    //     for (int j = 0; j < csize; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     // cout << endl;
    // }

    // col-wise generalized works for both sq and rectangle

    // for (int j = 0;j<csize;j++){
    //     for(int i = 0;i<rsize;i++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // diagonal-wise

    // int arr[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    // int rsize = 3;
    // int csize = 3;
    // // for (int i = 0; i < rsize; i++)
    // // {
    // //     for (int j = 0; j < csize; j++)
    // //     {
    // //         if(i==j){
    // //             cout << arr[j][i] << " ";
    // //         }

    // //     }
    // //     cout << endl;
    // // }

    // // diagonal-wise (left to right)
    // int arr[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    // int rsize = 3;
    // int csize = 3;
    // for (int i = 0; i < rsize; i++)
    // {
    //     for (int j = csize-1; j >=0 ; j--)
    //     {
    //         if(i+j==csize-1){
    //             // cout<<"P I"<<i<<"P J"<<j<<endl;
    //             cout << arr[i][j] << " ";
    //         }

    //     }
    //     cout << endl;
    // }

    // //TC of O(n)
    // for(int i = 0;i<rsize;i++){
    //     cout<<arr[i][i]<<" ";
    // }

    // // TAKING INPUT ROW-WISE

    // int arr[2][3];
    // int rsize=2;
    // int csize =3;

    // for(int i = 0;i<rsize;i++){
    //     for(int j=0;j<csize;j++){
    //         cout<<"Enter the value for i "<<i<<"and j "<< j<<" index";
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i = 0;i<rsize;i++){
    //     for(int j=0;j<csize;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // TAKING INPUT COL-WISE

    // int arr[2][3];
    // int rsize = 2;
    // int csize = 3;
    // for (int j = 0; j < csize; j++)
    // {
    //     for (int i = 0; i < rsize; i++)
    //     {
    //         cout << "Enter the value for i " << i << "and j " << j << " index";
    //         cin >> arr[i][j];
    //     }
    // }
    // for (int i = 0; i < rsize; i++)
    // {
    //     for (int j = 0; j < csize; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }





    // 2D array using vector 
    
    // vector<vector<int>> arr (4, vector<int>(3,23));
    // int rsize = arr.size();
    // int csize = arr[0].size();

    // for(int i=0;i<rsize;i++){
    //     for(int j =0; j<csize;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }







}