#include <stdio.h>
#define max 100
//Define global variable
int matrix[max][max];
int matrix1[max][max], matrix2[max][max];
//INPUTTING
void inputmatrix(int mat[max][max], int row, int col){
    printf("Input elements:\n");
    //Inputting Matrix
    for (int i=0; i<row; i++){
        printf("Row %d\n", i+1);

        for (int j=0; j<col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    //Printing Matrix
    printf("-----------\nYour matrix is:\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++) {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
}
//TRANSPOSING
int transpose(int row, int col, int mat[max][max]){
    int transpose[col][row];
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++) {
            transpose[j][i]=mat[i][j];
        }
    }
    printf("-----------\nYour transpose matrix is:\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++) {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }
}

//ADDITION
int addition(int mat1[max][max], int mat2[max][max], int row, int col) {
    int addtrix[max][max];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            addtrix[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("-----------\nYour addition matrix is:\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++) {
            printf("%d  ", addtrix[i][j]);
        }
        printf("\n");
    }
}

//SUBTRACTION
int subtraction(int mat1[max][max], int mat2[max][max], int row, int col) {
    int subtrix[max][max];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            subtrix[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    printf("-----------\nYour addition matrix is:\n");
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++) {
            printf("%d  ", subtrix[i][j]);
        }
        printf("\n");
    }
}

//MULTIPLICATION
void multiply(int mat1[max][max], int mat2[max][max], int row1, int col1, int row2, int col2){
    int product[max][max];

    // Initializing the product matrix to zero
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiplying matrices
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            for (int k = 0; k < col1; k++){
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Printing the product matrix
    printf("-----------\nYour product matrix is:\n");
    for (int i = 0; i < row1; i++){
        for (int j = 0; j < col2; j++){
            printf("%d  ", product[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int r1, c1, r2, c2;
    printf("Enter the dimensions of the matrix 1 in R C format.\n");
    scanf("%d %d", &r1, &c1);
    inputmatrix(matrix1, r1, c1);
    printf("---------------------\nEnter the dimensions of matrix 2 in R C format.\n");
    scanf("%d %d", &r2, &c2);
    inputmatrix(matrix2, r2, c2);
    //transpose(r1, c1, matrix1);
    //transpose (r2, c2, matrix2);
    printf("------------------------------\nEnter desired operation.\n'1' for Addition.\n'2' for Subtraction.\n'3' for multiplication.\n'4' for division (incomplete).");
    int res;
    scanf("%d", &res);

    switch(res)
    {
    case 1: {
            if (r1==r2 && c1==c2){
                addition(matrix1, matrix2, r1, c1);
            } else {printf("Addition not possible, order does not match");}
            break;
        }
    case 2: {
            if (r1==r2 && c1==c2){
                subtraction(matrix1, matrix2, r1, c1);
            } else {printf("Subtraction not possible, order does not match");}
            break;
        }
    case 3: {
        if (c1 != r2){
        printf("Matrix multiplication not possible: columns of matrix 1 must match rows of matrix 2.\n");}
        else {multiply(matrix1, matrix2, r1, c1, r2, c2);}
        break;
    }
    }
    return 0;
}
