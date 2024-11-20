#include<iostream>


using namespace std;

int main(){

     int row,col;
    cout << "Enter the array's row size: ";
    cin >> row;

    cout << "Enter the array's column size:";
    cin >> col;

    int arr[row][col];

    for(int i=0;i < row ;i++){
        for(int j=0; j <col; j++){
            cout << "a[" << i << "][" << j <<"] : " ;
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    int sum1 = 0;

    for(int i=0;i < row ;i++){
        for(int j=0; j <col; j++){
            
            if(i==0){
                cout << "Enter Row Number : 0" << endl;
                // cout << "Elements of row : " << arr[i][j] << ", " << endl;
                sum = sum + arr[i][j];
               cout << "The sum of row 0: " <<sum << endl <<endl; 
            } 
            
            
             else if (j==0){
                cout << "Enter column Number : 0" << endl;
                // cout << "Elements of row : " << arr[i][j] << ", " << endl;
                sum1 = sum1 + arr[i][j];
              cout << "The sum of column 0: " <<sum1 << endl; 
            }  
       
        }

        cout <<endl;
    }



}
