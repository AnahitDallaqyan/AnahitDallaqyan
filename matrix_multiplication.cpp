#include <iostream>
using namespace std;
int n1,m1;
int main () {
    //First matrix
    cout << "Enter the row size: ";
    cin >> n1;
    cout << "Enter the column size: ";
    cin >> m1;
    cout << "Enter the elements: " << "\n";
    int matrix1[n1][m1];
        for (int i = 0; i < n1; ++i){
        for (int j = 0; j < m1; ++j){
            cin >> matrix1[i][j];
        }
    };
    cout << "The first matrix: " << "\n";
    for (int i=0; i<n1; ++i){
        for (int j=0; j<m1; ++j){
            cout << matrix1[n1][m1] << " ";
        }
        cout << "\n";
    }
    //Second matrix
    int n2,m2;
    cout << "Enter the row size: ";
    cin >> n2;
    cout << "Enter the column size: ";
    cin >> m2;
    int matrix2[n2][m2];
    cout << "Enter the second matrix elements: " << "\n";
    for (int i = 0; i < n2; ++i){
        for (int j = 0; j < m2; ++j){
            cin >> matrix2[i][j];
        }
    };
    cout << "The second matrix: " << "\n";
    for (int i=0; i<n2; ++i){
        for (int j=0; j<m2; ++j){
            cout << matrix2[n2][m2];
        }
        cout << "\n";
    }
    if (m1==n2){
      int mul[n1][m2];
      for (int i=0; i<n1; ++i){
        for (int j=0; j<m2; ++j){
            mul[n1][m2]=0;
            for(int k=0; k<m1; ++k){
                mul[n1][m2] = mul[n1][m2] + matrix1[i][k]*matrix2[k][j];
            }
        }
      }
    cout << "Matrix multiplication: "<<"\n";
    for(int i=0; i<n1; ++i){
        for(int j=0; j<m2; ++j){
            cout << mul[i][j] << " ";
        }
        cout << "\n";
    }
    }
    else {
        cout << "Something is wrong!";
    };
    return 0;

}
