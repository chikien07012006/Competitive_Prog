#include <bits/stdc++.h>

using namespace std;

const int mod  = 1e9 + 9;

struct Matrix {
    static const int size = 2;
    int row, col;
    int data[size][size];

    Matrix(){
        row = col = size;
        for (int i = 0; i < row; ++i) fill_n(data[i], col, 0);
    };

    auto & operator [] (int i) { return data[i]; }

    const auto & operator[] (int i) const { return data[i]; }


    Matrix operator + (const Matrix &b) {
        Matrix a = *this;
        for (int i = 0; i < a.row; ++i)
            for (int j = 0; j < a.col; ++j)
                a[i][j] = (a[i][j] + b[i][j]) % mod;
        return a;
    }

    Matrix operator * (const Matrix &b) {
        Matrix a = *this, c;
        for (int i = 0; i < a.row; ++i)
            for (int j = 0; j < b.col; ++j)
                for (int k = 0; k < a.col; ++k) {
                    c[i][j] += 1ll * a[i][k] * (b[k][j] % mod) % mod;
                    c[i][j] %= mod;
                }
        return c;
    }


    bool iszero() {
        for (int i = 0; i < size; ++i)
            for (int j = 0; j < size; ++j)
                if (data[i][j]) return false;

        return true;
    }
};

