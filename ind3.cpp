#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>


using namespace std;


//1 zadanie (a)
int main()

{
    int tc;
    tc = 0;
    while (tc <= 100)
    {
        cout << "tc = " << tc << " ";
        cout << "tf = " << 9 / 5 * tc + 32 << endl;
        tc += 10;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    // 1 zadanie (b)

    double x;
    x = 0;
    do
    {
        cout << x << "     " << log(x + 1) * sin(x) << " " << endl;
        x += 0.5;

    } while (x <= 5);

    return 0;

}
//1 zadanie (c)
int main()
{
    int i;
    double pi = 3.14159, x;
    for (i = 0; i <= 12; i++) {
        x = i * pi / 6;
        cout << fixed << setprecision(6) << cos(x) << endl;
    }
    return 0;
}

// 1 zadanie (d)

int main()
{
    double x;
    x = -1.5;
    while (x <= 1.5) {
        if (x > 1) {
            cout << (1 + sqrt(abs(cos(x)))) << endl;
        }
        if (-0.5 <= x <= 1) {
            cout << x + 1 << endl;
        }
        if (x < -0.5) {
            cout << 1 - x * x << endl;
        }
        x += 0.25;
    }
}

//2 zadanie 

int main()
{
    int i, n, k = 0, sum = 0, mn = 100000;
    for (i = 0; i < 7; i++) {
        cout << "n = ";
        cin >> n;
        if (n < 0) {
            k += 1;
        }
        if (n >= 10 && n <= 99) {
            sum += n;
        }
        if (n < mn) {
            mn = n;
        }
    }
    cout << "negative: " << k << ", ";
    cout << "summa: " << sum << ", ";
    cout << "min: " << mn;

    return 0;
}


//3 zadanie

int main()
{
    double s;
    int n, i;
    s = 0;
    cout << "n = " << " ";
    cin >> n;
    for (i = 2; i <= n; i = i + 2) {
        s += 1.0 / i;
    }
    cout << "s = " << " " << s;

    return 0;
}

//4 zadanie

int main()
{
    int n, i;
    double x, result, result2;
    cout << "n = ";
    cin >> n;
    cout << "x= ";
    cin >> x;

    result = cos(x);

    for (i = 1; i <= n; i++) {
        result = cos(x + result);
    }
    result2 = sqrt(x);
    for (i = 1; i <= n; i++) {
        result2 = sqrt(x + result2);
    }
    cout << fixed << setprecision(2);
    cout << "result(a): " << result << endl;
    cout << "result(b): " << result2;

}

// 5 zadanie 

int main() {
    double e;
    cout << "Введите epsilon: ";
    cin >> e;

    double s = 0;
    int n = 0;
    double t;

    do {
        t = 1.0 / (2 * n + 1);
        if (n % 2 == 0) {
            s += t;
        }
        else {
            s -= t;
        }
        n++;
    } while (1.0 / (2 * n + 1) >= e);

    cout << s << endl;
    cout << "Точное значение: " << M_PI / 4 << endl;

    return 0;
}

// 6 zadanie


int main() {
    int a, b = 0, c = 0;
    char d;

    do {
        cout << "Введите число: ";
        cin >> a;
        b++;
        if (a % 2 == 0) c++;
        cout << "идем далее? ";
        cin >> d;
    } while (d == 'y' || d == 'Y');

    cout << "Всего чисел: " << b << endl;
    cout << "Четных чисел: " << c << endl;

    return 0;
}

// 7 zadanie

int main() {
    int n;
    double p = 0;

    cout << "Введите количество вершин: ";
    cin >> n;

    double x[100], y[100];

    for (int i = 0; i < n; i++) {
        cout << "Введите x" << i + 1 << ", y" << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        double dx = x[j] - x[i];
        double dy = y[j] - y[i];
        p += sqrt(dx * dx + dy * dy);
    }

    cout << "Периметр: " << p << endl;

    return 0;
}

// 8 zadanie

int main()
{
    int n;

    cout << "Введите размер доски: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "o ";
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}

// 9 zadanie

int main() {
    int a, m = 0, c = 0;

    while (true) {
        cin >> a;
        if (a == 0) break;

        if (a > m) {
            m = a;
            c = 1;
        }
        else if (a == m) {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}