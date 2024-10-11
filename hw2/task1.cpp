#include <iostream>

using namespace std;

int main(){
    int h1, m1;
    cout << "Введите время отправления - ЧЧ ММ: " << endl;
    cin >> h1 >> m1;
    int h2, m2;
    cout << "Введите время в пути - ЧЧ ММ: " << endl;
    cin >> h2 >> m2;
    int day, h3, m3;
    m3 = (m1 + m2) % 60;
    h3 = (h1 + h2 + ((m1 + m2) / 60)) % 24;
    day = 1 + (h1 + h2 + ((m1 + m2) / 60)) / 24;
    cout << "Время прибытия: " << day << "день(-я), " << h3 << ":" << m3 << endl;
    
    return 0;
}