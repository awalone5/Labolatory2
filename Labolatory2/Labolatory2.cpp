#include <iostream>
#include <cmath>

using namespace std;

void calculateF1(double a, double b, double X);
void calculateF2(double a, double c);
void calculateF3(double c, double X);

int main()
{
    double Xstart = -10, Xend = 10, a = -6, b = 3.5, c = -5.3, H = 1;
    string choose;
    string choose2;
    string func;

    cout << "If you want yo use your variables type \"y\" ane enter them in right order(Xstart, Xend, a, b, c, H)" << endl;
    cin >> choose2;

    if (choose2._Equal("y"))
    {
        cin >> Xstart >> Xend >> a >> b >> c >> H;
    }

    cout << "If you want to use user func enter \"y\"";
    cin >> choose;

    if (choose._Equal("y")) {

        if (H < 0)
        {
            cout << "Invalid argument for H";
            return 1;
        }

        double intPartA, intPartB, intPartC;

        double fracPartA = modf(a, &intPartA);
        double fracPartB = modf(b, &intPartB);
        double fracPartC = modf(c, &intPartC);

        for (double X = Xstart; X <= Xend; X += H)
        {

            if (a < 0 && X != 0)
            {

                if (!(fracPartA == 0 || fracPartB == 0) && (fracPartB != 0 || fracPartC != 0) || (fracPartB != -fracPartB || fracPartC != -fracPartC))
                {
                    calculateF1(a, b, X);
                }
                else {
                    calculateF1((int)a, (int)b, (int)X);
                }

            }
            else if (a > 0 && X == 0)
            {

                if (!(fracPartA == 0 || fracPartB == 0) && (fracPartB != 0 || fracPartC != 0) || (fracPartB != -fracPartB || fracPartC != -fracPartC))
                {
                    calculateF2(a, c);
                }
                else {
                    calculateF2((int)a, (int)c);
                }

            }
            else
            {

                if (!(fracPartA == 0 || fracPartB == 0) && (fracPartB != 0 || fracPartC != 0) || (fracPartB != -fracPartB || fracPartC != -fracPartC))
                {
                    calculateF3(c, X);
                }
                else {
                    calculateF3((int)c, (int)X);
                }

            }
        }
    }
    else {
        double intPartA, intPartB, intPartC;

        double fracPartA = modf(a, &intPartA);
        double fracPartB = modf(b, &intPartB);
        double fracPartC = modf(c, &intPartC);

        for (double X = Xstart; X <= Xend; X += H)
        {

            if (a < 0 && X != 0)
            {

                if (!(fracPartA == 0 || fracPartB == 0) && (fracPartB != 0 || fracPartC != 0) || (fracPartB != -fracPartB || fracPartC != -fracPartC))
                {
                    double result = a * pow(X, 2) + pow(b, 2) * X;
                    cout << result << endl;
                }
                else {
                    double result = (int)a * pow((int)X, 2) + pow((int)b, 2) * (int)X;
                    cout << result << endl;
                }

            }
            else if (a > 0 && X == 0)
            {

                if (!(fracPartA == 0 || fracPartB == 0) && (fracPartB != 0 || fracPartC != 0) || (fracPartB != -fracPartB || fracPartC != -fracPartC))
                {
                    double result = a / c;
                    cout << result << endl;
                }
                else {
                    double result = (int)a / (int)c;
                    cout << result << endl;
                }

            }
            else
            {

                if (!(fracPartA == 0 || fracPartB == 0) && (fracPartB != 0 || fracPartC != 0) || (fracPartB != -fracPartB || fracPartC != -fracPartC))
                {
                    double result = 1.0 + X / c;
                    cout << result << endl;
                }
                else {
                    double result = 1.0 + (int)X / (int)c;
                    cout << result << endl;
                }
            }
        }
    }
}

void calculateF1(double a, double b, double X) {
    double result = a * pow(X, 2) + pow(b, 2) * X;

    cout << result << " F1 " << endl;
}

void calculateF2(double a, double c) {
    double result = a / c;

    cout << result << " F2 " << endl;
}

void calculateF3(double c, double X) {
    double result = 1.0 + X / c;

    cout << result << " F3 " << endl;
}
