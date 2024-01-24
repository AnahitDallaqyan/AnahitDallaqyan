#include<iostream>
using namespace std;
        int N;
        int main() {
        cout << "Enter the size of matrix: " << "\n";
        cin >> N;
        cout << "Enter the  elements:"<< "\n";
        int matrix[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j ){
        	cin >> matrix[i][j];
	}
    };
    cout << "Matrix is: " << "\n";
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
	cout << matrix[i][j] << " ";
	}
    cout << "\n";
    };
    int sum = 0;
    for (int i = 1; i < N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            sum = sum + matrix[i][j];
        }
    };
    cout << "Sum = " << sum << "\n";
   	return 0;
}
