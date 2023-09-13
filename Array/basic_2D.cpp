/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool linearSearch(int crr[][3],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(crr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

void printArrayrowwise(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void printArrayColwise(int arr[][4],int row,int col)

{
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int arr[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    int brr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    /* error coz col is not given atleast give col size //in function as well
    int crr[][]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    */
    
    //print 2d arr
    int row=3;
    int col=4;
   // printArrayrowwise(arr,row,col);
    cout<<endl;
    //printArrayColwise(arr,row,col);
    cout<<endl;
    //input 
    int crr[3][3];
    int r=3,c=3;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>crr[i][j];
        }
    }
    
    printArrayrowwise(crr,r,c);
    
    int target=80;
    bool ispresent=linearSearch(crr,r,c,target);
    if(ispresent){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}
