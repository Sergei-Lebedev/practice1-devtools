#pragma once

#include <iostream>

typedef unsigned char uchar;

class Matrix
{
 public:
    Matrix(int rows, int cols);
    Matrix(const Matrix& m);
    ~Matrix();

    int rows() const { return kRows; }
    int cols() const { return kCols; }
    uchar** data() const { return values; }
    bool operator==(const Matrix& m) const;
    uchar* operator[](int i) const { return values[i]; }

    // Initialization methods
    void Zeros();
    void Ones();
    void Random(int seed = 1);

    friend std::ostream& operator<<(std::ostream& os, const Matrix& m);

 private:
    Matrix() {};

    uchar** values;
    int kRows, kCols;
};
