#include <iostream>

using namespace std;

class matrix {
private:
    int m[3][3];

public:
    void read() {
        cout << "Enter the elements of the 3x3 matrix: \n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "m[" << i << "][" << j << "] = ";
                cin >> m[i][j];

            }
        }
    }

    void display() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << m[i][j] << "\t";
            }
            cout << endl;
        }
    }

    friend matrix trans(matrix);
};

matrix trans(matrix m1)
{
    matrix m2;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m2.m[i][j] = m1.m[j][i];
        }
    }
    return m2;
}

int main() {
    matrix mat1, mat2;
    mat1.read();
    cout << "\nYou entered the following matrix:\n";
    mat1.display();
    mat2 = trans(mat1);
    cout << "\nTransposed matrix:\n";
    mat2.display();
    return 0;
}


