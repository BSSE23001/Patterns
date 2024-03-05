#include <iostream>

using namespace std;

#include "Functions.h"

int main() {
    cout << "\t===>Patterns<===\n";
    int choice;
    do {
        cout << "1  - Rectangular Shape\n"
                "2  - Hollow Rectangular Shape\n"
                "3  - Inverted Right Triangle (Inverted Half Pyramid)\n"
                "4  - Hollow Inverted Right Triangle\n"
                "5  - Right Triangle - 90° Angle on Right Side (Half Pyramid with 180° rotation)\n"
                "6  - Hollow Right Triangle - 90° Angle on Right Side\n"
                "7  - Right Triangle - 90° Angle on Left Side (Simple Half Pyramid)\n"
                "8  - Hollow Right Triangle - 90° Angle on Left Side\n"
                "9  - Floyd's Triangle\n"
                "10 - Butterfly Patten\n"
                "11 - 0-1 Pattern\n"
                "12 - Rhombus Pattern\n"
                "13 - Numbers Pattern of Pyramid Shape\n"
                "14 - Palindromic Pattern\n"
                "15 - Star or Diamond Pattern\n"
                "16 - Exit Program\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int m, n;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter No. of Columns: ";
                cin >> n;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                rectangularShape(m, n, key);
                break;
            }
            case 2: {
                int m, n;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter No. of Columns: ";
                cin >> n;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                hollowRectangularShape(m, n, key);
                break;
            }
            case 3: {
                int m;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                invertedTriangularShape(m, key);
                break;
            }
            case 4: {
                int m;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                hollowInvertedTriangularShape(m, key);
                break;
            }
            case 5: {
                int m;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                rightTriangularShapeR(m, key);
                break;
            }
            case 6: {
                int m;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                hollowRightTriangularShapeR(m, key);
                break;
            }
            case 7: {
                int m;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                rightTriangularShapeL(m, key);
                break;
            }
            case 8: {
                int m;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                hollowRightTriangularShapeL(m, key);
                break;
            }
            case 9: {
                int m;
                cout << "Enter No. of Rows: ";
                cin >> m;
                floydTriangle(m);
                break;
            }
            case 10: {
                int m;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                butterflyShape(m, key);
                break;
            }
            case 11: {
                int m;
                cout << "Enter No. of Rows: ";
                cin >> m;
                zeroOnePattern(m);
                break;
            }
            case 12: {
                int m;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                rhombusShape(m,key);
                break;
            }
            case 13: {
                int m;
                cout << "Enter No. of Rows: ";
                cin >> m;
                numbersPyramidPattern(m);
                break;
            }
            case 14: {
                int m;
                cout << "Enter No. of Rows: ";
                cin >> m;
                palindromicPattern(m);
                break;
            }
            case 15: {
                int m;
                string key;
                cout << "Enter No. of Rows: ";
                cin >> m;
                cout << "Enter Pattern Shape: ";
                cin >> key;
                starDiamondPattern(m,key);
                break;
            }
            case 16: {
                cout << "Program is Closing !\n";
                break;
            }
            default: {
                cout << "Try Again Later!\n";
            }
        }
    } while (choice != 16);
    return 0;
}