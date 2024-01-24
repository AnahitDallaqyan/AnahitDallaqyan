#include <iostream>
const int N = 3;
void sum_matrix(int mat1[][N], int mat2[][N], int sum[][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void difference_matrix (int mat1[][N], int mat2[][N], int diff[][N]){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            diff[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}
void multiplication_matrix (int mat1[][N], int mat2[][N], int ml[][N]) {
for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            ml[i][j] += mat1[i][j] * mat2[i][j];
        }
    }
}

int main() {
    int mat1[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int mat2[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum[N][N];
    int diff[N][N];
    int ml[N][N];
    sum_matrix(mat1, mat2, sum);
    std::cout << "The first matrix: " << "\n";  
    for(int i = 0; i < N; i++) {  
        for(int j = 0; j < N; j++) {  
            std::cout << mat1[i][j] << " ";  
        }  
        std::cout << "\n";  
    } 
    
    std::cout << "The second matrix: " << "\n";  
    for(int i = 0; i < N; i++) {  
        for(int j = 0; j < N; j++) {  
            std::cout << mat2[i][j] << " ";  
        }  
        std::cout << "\n";  
    } 
    std::cout << "Sum of matrices:" << "\n";
    for(int i = 0; i < N; i++) {  
        for(int j = 0; j < N; j++) {  
            std::cout << sum[i][j] << " ";  
        }  
        std::cout << "\n";  
    }  
    difference_matrix ( mat1, mat2, diff);
    std::cout << "Difference of matrices:" << "\n";
    for(int i = 0; i < N; i++) {  
        for(int j = 0; j < N; j++) {  
            std::cout << diff[i][j] << " ";  
        }  
        std::cout << "\n";  
    }  
    multiplication_matrix(mat1, mat2, ml);
    std::cout << "Multiplication of matrices:" <<"\n";
    for(int i = 0; i < N; i++) {  
        for(int j = 0; j < N; j++) {  
            std::cout << ml[i][j] << " ";  
        }  
        std::cout << "\n";  
    }  
    return 0;
} 

 
 

     
 
    


