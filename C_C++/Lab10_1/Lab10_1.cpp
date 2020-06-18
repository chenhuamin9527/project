// 1、建立一个名为Lab10_1.cpp的 程序，实现以下要求：

// a、建立一个名为Matrix的矩阵类，存储一个二维double数组，以及矩阵的行数、列数等。

// b、通过运算符重载+，实现两个相同规格矩阵对象之间的的+运算，即矩阵C=A+B

// c、通过运算符重载<<，使得可以通过流运算符输出显示矩阵。例如cout<<C，显示矩阵C的数据

#include <bits/stdc++.h>
using namespace std;
class Matrix
{
public:
    Matrix(int rows,int cols)
    {
        this->rows = rows;
        this->cols = cols;
    }
    Matrix(){}
    void setMatrix()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> items[i][j];
            }
        }
    }
    int getRows() const {return rows;}
    int getCols() const {return cols;}
    Matrix operator+(const Matrix& m)
    {
        Matrix temp(2,2);
        if(m.getRows() == rows && m.getCols() == cols)
        {
            Matrix t(rows, cols);
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    t.items[i][j] = this->items[i][j] + m.items[i][j];
                }
            }
            return t;
        }
        else
        {
            cout << "error input" << endl;
            return temp;
        }
    }
    friend ostream & operator<< (ostream &out, const Matrix &m)
    {
        for (int i = 0; i < m.rows; i++)
        {
            out << "(" << "";
            for (int j = 0; j < m.cols; j++)
            {
                out << m.items[i][j];
                if(j < m.cols-1)
                out << ",";
            }
            cout << ")" << endl;
        }
        return out;
    }
private:
    int rows,cols;
    double items[20][20];
};
int main()
{
    Matrix m1(2,2);
    Matrix m2(2,2);
    m1.setMatrix();
    m2.setMatrix();
    Matrix m3 = m2 + m1;
    cout << m1 << endl;
    cout << m3;
    return 0;
}