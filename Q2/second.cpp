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


    
    int smallValue = 0;

      for(int i=0;i < row ;i++){
        for(int j=0; j <col; j++){
            if(smallValue < arr[i][j]){
                smallValue = arr[i][j];
            }
        }

        cout <<endl;
    }
    cout << "the largest Elements is : "<<smallValue;

}
