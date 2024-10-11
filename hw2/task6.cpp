#include <iostream>

using namespace std;

int main(){
    int r, a, ans;
    float c_long;
    cout << "Введите радиус окружности и сторону треугольника" << endl;
    cin >> r >> a;
    c_long = 2 * 3,14 * r;
    ans = 3 * a / c_long;
    cout << ans << endl;
    return 0;
}