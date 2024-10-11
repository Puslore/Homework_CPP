#include <iostream>

using namespace std;

int main(){
    float a, b, c, x0, y0;
    cout <<"Input 'a', 'b' and 'c' parameters: " << endl;
    cin >> a >> b >> c;
    x0 = -1 * b / 2 / a;
    y0 = a * x0 * x0 + b * x0 + c;
    cout << "Вершина параболы равна: ("<< x0 <<";"<< y0 <<")" << endl;
    
    return 0;
}