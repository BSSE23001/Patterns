// Created by MUHAMMAD HAMZA on 1/19/2024.

#include <iostream>

using namespace std;

#include "Functions.h"

void rectangularShape(int m, int n, const string &key) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << key;
        }
        cout << endl;
    }
}

void hollowRectangularShape(int m, int n, const string &key) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m-1 || j == 0 || j == n-1) {
                cout << key;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void invertedTriangularShape(int m, const string &key) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (j < m-i) {
                cout << key;
            }
        }
        cout << endl;
    }
}

void hollowInvertedTriangularShape(int m, const string &key) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || j == 0 || j == m-1-i) {
                cout << key;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void rightTriangularShapeR(int m, const string &key) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (j == m-1 || j > m-2-i) {
                cout << key;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void hollowRightTriangularShapeR(int m, const string &key) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (j == m-1 || j == m-1-i || i == m-1) {
                cout << key;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void rightTriangularShapeL(int m, const string &key) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            cout << key;
        }
        cout << endl;
    }
}

void hollowRightTriangularShapeL(int m, const string &key) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == m-1) {
                cout << key;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void floydTriangle(int m) {
    int k = 1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            cout << k++ << " ";
        }
        cout << endl;
    }
}

void butterflyShape(int m, const string &key) {
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= i; j++) {
            cout << key;
        }
        int sp = 2*m - 2*i;
        for (int j = 1; j <= sp; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << key;
        }
        cout << endl;
    }
    for (int i = m; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << key;
        }
        int sp = 2*m - 2*i;
        for (int j = 1; j <= sp; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << key;
        }
        cout << endl;
    }
}

void zeroOnePattern(int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            if ((i+j)%2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void rhombusShape(int m, const string &key) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m-1-i; j++) {
            cout << " ";
        }
        for (int j = 0; j < m; j++) {
            cout << key;
        }
        cout << endl;
    }
}

void numbersPyramidPattern(int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m-i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void palindromicPattern(int m) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m-i; j++) {
            cout << " ";
        }
        for (int j = i; j >= 0; j--) {
            cout << j+1;
        }
        for (int j = 1; j <= i; j++) {
            cout << j+1;
        }
        cout << endl;
    }
}

void starDiamondPattern(int m, const string &key) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m-1-i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << key;
        }
        for (int j = 1; j <= i; j++) {
            cout << key;
        }
        cout << endl;
    }
    for (int i = m-2; i >= 0; i--) {
        for (int j = 0; j < m-1-i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << key;
        }
        for (int j = 1; j <= i; j++) {
            cout << key;
        }
        cout << endl;
    }
}