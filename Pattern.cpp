#include <iostream>
using namespace std;

int main()
{
    // (1) Pattern
    //   int n=4;
    //   for (int row = 0; row < n; row++)
    //   {
    //     for (int column = 0; column < n; column++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //   }
    // Output-
    // * * * *
    // * * * *
    // * * * *
    // * * * *

    // (2)   Half Pyramid
    // int n=5;
    // for (int row = 0; row <= n; row++)
    // {   //for each row, print stars=row ka No.
    //     for (int column = 0; column < row; column++)
    //     {
    //         cout<<"* ";
    //     }
    //      //after every row
    //     cout<<endl;
    // }
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *

    // (3)
    // int n=4;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 1; col < (n-row+1); col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // * * * *
    // * * *
    // * *
    // *

    // (4)
    //  int n=4;
    //  for (int row = 1; row <= n; row++)
    //  {
    //     for (int col = 1; col <= n-row; col++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //  }
    //       *
    //     * *
    //   * * *
    // * * * *

    // (5)
    // int n=4;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= (row-1); col++)
    //     {
    //         cout<<"  ";
    //     }
    //     for (int  col = 1; col <= n-row+1; col++)
    //     {
    //         cout<<"* ";
    //     }

    //     cout<<endl;
    // }
    // * * * *
    //   * * *
    //     * *
    //       *

    // (6)
    // int i,j,r;
    //     cout<<"Enter the no of Rows";
    //     cin >> r;
    //    for(i=0;i<=r;i++)
    //    {
    //      for(j=1;j<=r-i;j++)
    //      cout<<" ";
    //      for(j=1;j<=2*i-1;j++)
    //        cout<<"*";
    //      cout<<endl;
    //    }
    //    for(i=r-1;i>=1;i--)
    //    {
    //      for(j=1;j<=r-i;j++)
    //      cout<<" ";
    //      for(j=1;j<=2*i-1;j++)
    //        cout<<"*";
    //      cout<<endl;;
    //    }
    // 5

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    //  *******
    //   *****
    //    ***
    //     *

// OR
// int n=5;
// for (int row = 1; row <= n; row++)
// {
//     for (int col = 1; col <= n-row; col++)
//     {
//         cout<<" ";
//     }
//     for (int col = 1; col <= row; col++)
//     {
//             cout<<"* ";
//     }
    
//     cout<<endl;
// }
// int n1=4;
// for (int row = 1; row <=n1; row++)
// {  //for spaces
//    for (int col = 1; col <=row-1; col++)
//    {
//         cout<<" ";
//    }
//    //for stars
//    for (int col = 1; col <=n1-row+1; col++)
//    {
//         cout<<" *";
//    }
//    cout<<endl;
// }
// Logic for this is that use one pyramid and one inverted Pyramid And change the Space Value





// Pyramid
// int n=5;
// for (int row = 1; row <= n ; row++)
// {
//     for (int col = 1; col <= n-row ; col++)
//     {
//         cout<<" ";
//     }
//     for (int col = 1; col <= row ; col++)
//     {
//             cout<<"* ";
//     }
    
//     cout<<endl;
// }
//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 



// Inverted Pyramid
// int n=4;
// for (int row = 1 ; row <=n ; row++)
// {  //for spaces
//    for (int col = 1 ; col <=row-1 ; col++)
//    {
//         cout<<" ";
//    }
//    //for stars
//    for (int col = 1 ; col <=n-row+1 ; col++)
//    {
//         cout<<"* ";
//    }
//    cout<<endl;
// }
// * * * * 
//  * * * 
//   * * 
//    * 




// For Hollow inverted Half Pyramid
// int n=6;
// for (int row = 1; row <= n; row++)
// {
//     if (row==1||row==n)
//     {
//        for (int col = 1; col <= n-row+1 ; col++)
//        {
//         cout<<"*";
//        }
        
//     }
//     else
//     {
//         cout<<"*";
//         for (int col = 1; col <= n-row-1 ; col++)
//         {
//             cout<<" ";
//         }
//         cout<<"*";
//     }
//     cout<<endl;
// }
// ******
// *   * 
// *  *  
// * *   
// **    
// *     





// Hollow Full Pyramid
// int n, i, j;
//    cout << "Enter number of lines: ";
//    cin >> n;
//    for(i = 1; i<=n; i++) {
//       for(j = 1; j<=(n-i); j++) { //print the blank spaces before star
//          cout << " ";
//       }
//       if(i == 1 || i == n) { //for the first and last line, print the stars continuously
//          for(j = 1; j<=i; j++) {
//             cout << "* ";
//          }
//       }else{
//          cout << "*"; //in each line star at start and end position
//          for(j = 1; j<=2*i-3; j++) { //print space to make hollow
//             cout << " ";
//          }
//          cout << "*";
//       }
//       cout << endl;
//    }
// Enter number of lines: 5
//     *     
//    * *    
//   *   *   
//  *     *  
// * * * * * 



return 0;
}
