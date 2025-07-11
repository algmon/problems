#include<bits/stdc++.h>
#include <cmath>

using namespace std;

int a, b, c, d;

int main()
{
    cin >> a >> b;
    div_t result = div(a, b);
    // case 1: a = 10, b = 3, c=3, d=1
    // case 2: a =  9, b = 3, c=3, d=0
    // std::cout << "整数除法: " << a << " / " << b << " = " << result.quot << ", 余数 = " << result.rem << std::endl;
    c = result.quot;
    d = result.rem;
    cout << c << " " << d << endl;
}