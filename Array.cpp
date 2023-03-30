#include<iostream>
using namespace std;

// Passing Array as Function
// void printarray(int num[],int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout<<num[i]<<" "<<endl;
//     }  
// }
// int main()
// {
//     int arr[10]={2,3,5,4,2,4,5,64,3,19};
//     int n=10;

//     printarray(arr,n);

//     return 0;
// }




// Question-> Array
// out- maximum element and Minimum element

// int getMax(int num[],int n)
// {
//     int Maximum= INT32_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         // Maximum=max(Maximum,num[i]);

//         if (num[i]>Maximum)
//         {
//             Maximum=num[i];
//         }
        
//     }
//     return Maximum;
// };

// int getMin(int num[],int n)
// {
//     int Minimum= INT32_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         // Minimum=min(Minimum,num[i]);

//         if (num[i]<Minimum)
//         {
//             Minimum=num[i];
//         }
        
//     }
//     return Minimum;
// };

// int main()
// {
//     int size;
//     cin>>size;

//     int num[100];

//     // Taking input for array
//     for (int i = 0; i < size; i++)
//     {
//         cin>>num[i];
//     }

//     cout<<"Max Value is: "<< getMax(num,size)<<endl;
//     cout<<"Min Value is: "<< getMin(num,size);

//     return 0;
// }