#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double discriminant = pow(b, 2) - 4 * a * c;
    if (discriminant < 0) {
        cout << "no roots";
    }
    else if (discriminant == 0) {
        cout << -b / (2 * a);
    }
    else {
        cout << (-b + sqrt(discriminant)) / (2 * a)<<" ";
        cout << (-b - sqrt(discriminant)) / (2 * a);
    }
    
}
