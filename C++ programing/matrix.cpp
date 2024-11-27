#include<iostream>
using namespace std;

class matrix
{
    int row, col;
    int M[10][10];
public:
    matrix(int r, int c)
    {
        row = r;
        col = c;
    }
    void set_matrix()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> M[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }
    }
    friend matrix mul(matrix a, matrix b);
};

matrix mul(matrix a, matrix b)
{
    matrix result(a.row, b.col);
    for (int i = 0; i < a.row; i++)
    {
        for (int j = 0; j < b.col; j++)
        {
            result.M[i][j] = 0;
            for (int k = 0; k < a.col; k++)
            {
                result.M[i][j] += a.M[i][k] * b.M[k][j];
            }
        }
    }
    return result;
}

int main()
{
    matrix m1(2, 2), m2(2, 2);
    cout << "Enter elements for matrix 1: ";
    m1.set_matrix();
    cout << "Enter elements for matrix 2: ";
    m2.set_matrix();

    matrix result = mul(m1, m2);

    cout << "Resultant Matrix: " << endl;
    result.display();

    return 0;
}
