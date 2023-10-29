#include <iostream>
#include <math.h>
using namespace std;

const int n = 9;

//function to print the matrix
void Print(int matrix[][n]){
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

//function to check if we can put the given number in the cell or not
bool isValid(int matrix[][9],int i,int j,int x,int n){
    //row and column check 
    for(int k=0;k<n;k++){
        if(matrix[i][k] == x || matrix[k][j] == x){
            return false;
        }
    }
    //subgrid check
    int root = sqrt(n);
    int sRow = (i - i%root);
    int sCol = (j - j%root);
    for(int a=sRow;a<(sRow+root);a++){
        for(int b=sCol;b<(sCol+root);b++){
            if(matrix[a][b] == x){
                return false;
            }
        }
    }
    return true;
}

//function to find the solved sudoku
bool SudokuSolver(int matrix[][9],int st,int end,int n){
    //base case
    if(st == n){
        return true;
    }
    //if the end is out of range then we need to move to another row
    if(end == n){
        return SudokuSolver(matrix,st+1,0,n);
    }
    //if the given cell already has a number
    if(matrix[st][end] != 0){
        return SudokuSolver(matrix,st,end+1,n);
    }
    //trying to fill the cell with appropriate number
    for(int x=1;x<=9;x++){
        //checking is the number valid
        if(isValid(matrix,st,end,x,n)){
            matrix[st][end] = x;
            bool ans = SudokuSolver(matrix,st,end+1,n);
            if(ans){
                return true;
            }
            //backtrack if the we cannot fill the number x in given cell
            matrix[st][end] = 0;
        }
    }
    return false;
}