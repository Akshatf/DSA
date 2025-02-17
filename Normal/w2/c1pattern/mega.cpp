

// MEGA CLASS

#include <iostream>
using namespace std;

// // FULL PYRAMID
// void fullpyramid(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// invertedfullpyramid
// void invertedfullpyramid(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i ; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i ; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }
// }

// void diamond(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i ; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i ; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }
// }

// // hollowfullpyramid

// void hollowfullpyramid(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             if(i==0||i==n-1||j==0||j==i)
//             cout << "* ";
//             else{
//                 cout<<"  ";
//             }
//         }

//         cout << endl;
//     }
// }

// // hollowinvertedfullpyramid
// void hollowinvertedfullpyramid(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i ; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i ; j++)
//         {
//             if(i==0||i==n-1||j==0||j==n-i-1)
//             cout << "* ";
//             else{
//                 cout<<"  ";
//             }
//         }

//         cout << endl;
//     }
// }

// hollow diamond

// void hollowdiamond(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             if (i == 0 || j == 0 || j == i)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n - i; j++)
//         {
//             if (j == 0 || i == n - 1 || j == n - i - 1)
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }

//         cout << endl;
//     }
// }

// mix pyramid

// void mixpyramid(int n)
// {
//     // pART 1
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//             cout << "*";

//         // for (int k = 0; k < i; k++)
//         for (int k = 0; k < 2*i+1; k++) //ye use krn aagr space ka locha na rkhna ho
//             cout << " ";

//         for (int a = 0; a < n - i; a++)
//             cout << "*";
//         cout << endl;
//     }
//     //part 2
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//             cout << "*";

//         // for (int k = 0; k < n-i-1; k++)
//         for (int k = 0; k < 2*(n-i)-1; k++)
//             cout << " ";

//         for (int a = 0; a < i+1; a++)
//             cout << "*";
//         cout << endl;
//     }

// }

// void fancy(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 cout << i + 1;
//             }
//             else
//             {
//                 cout << "* ";
//             }
//         }
//         cout << endl;
//     }
// }


// // invertedfancy
// void invertedfancy(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 cout << i + 1;
//             }
//             else
//             {
//                 cout << "* ";
//             }
//         }
//         cout << endl;
//     }
//     for (int i = n - 1; i > 0; i--)
//     {
//         for (int j = 0; j < 2 * i - 1; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 cout << i;
//             }
//             else
//             {
//                 cout << "* ";
//             }
//         }
//         cout << endl;
//     }
// }

void abcda(int n){

    for(int i = 0; i< n ; i++){  
        char ch = 'A';
        for(int j = 0 ; j < i+1;j++){
            
            cout<<ch;
            ch++;
        }

        ch--;
        for(; ch >'A';ch--){
            ch--;
            cout<<ch;
            
        }
        
        cout<<endl;

    }
}


int main()
{

    int n;
    cin >> n;
    

    // FULL PYRAMID
    // fullpyramid(n);

    // invertedfullpyramid
    // invertedfullpyramid(n);
    // diamond(5);
    // hollowfullpyramid(n);
    // hollowinvertedfullpyramid(n);
    // hollowdiamond(n);
    // mixpyramid(n);
    // fancy(n);
    // invertedfancy(n);
    abcda(n);
}