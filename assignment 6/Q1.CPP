#include <iostream>
using namespace std;
class matrix
{
    int **a;
    int r, c;

public:
    matrix(int r, int c)
    {
        this->r = r;
        this->c = c;
        a = new int *[r];
        for (int i = 0; i < r; i++)
        {
            a[i] = new int[c];
        }
    }
    void getdata()
    {
        cout << "Enter the elements of the matrix" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void show()
    {
        cout << "The matrix is" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    matrix mul(matrix m)
    {
        matrix temp(r, m.c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < m.c; j++)
            {
                temp.a[i][j] = 0;
                for (int k = 0; k < c; k++)
                {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }
        return temp;
    }
};
int main()
{
    int r1, c1, r2, c2;
    cout << "Enter the number of rows and columns of the first matrix " << endl;
    cin >> r1 >> c1;
    matrix m1(r1, c1);
    m1.getdata();
    cout << " Enter the number of rows andcolumns of the second matrix " << endl;
    cin >> r2 >> c2;
    matrix m2(r2, c2);
    m2.getdata();
    if (c1 != r2)
    {
        cout
            << "Matrix multiplication is not possible" << endl;
    }
    else
    {
        matrix m3 = m1.mul(m2);
        m3.show();
    }
    return 0;
}