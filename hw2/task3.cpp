#include <iostream>

using namespace std;

int main(){
    int k, s;
    float p;
    int ans, one_year;
    cout << "Введите стартовый капитал, проценты и нужную сумму" << endl;
    cin >> k >> p >> s;
    one_year = (p/100) * (p/100 + k);
    ans = s / one_year;
    cout << ans;

    return 0;
}
