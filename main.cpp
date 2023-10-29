#include <iostream>
#include <math.h>
#include "functions.h"
using namespace std;

const int n = 9;

int main(){
    //defining matrix
    int matrix[n][n];
    //taking inputs
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>matrix[i][j];
        }
    }
    //checking for solved sudoku
    if(SudokuSolver(matrix,0,0,9)){
        Print(matrix);
    }
    else{
        cout<<"No Solution exists"<<endl;
    }
    return 0;
}