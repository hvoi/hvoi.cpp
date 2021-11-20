#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int num_1, num_2;
    float res;
    cout << "Enter_1: " << endl;
    cin >> num_1;
    cout << "Enter_2: " << endl;
    cin >> num_2;

    res = num_1 + num_2;
    cout << num_1 << " + " << num_2 << " = " << res << endl;
    res = num_1 - num_2;
    cout << num_1 << " - " << num_2 << " = " << res << endl;
    res = num_1 * num_2;
    cout << num_1 << " * " << num_2 << " = " << res << endl;
    res = num_1 / num_2;
    cout << num_1 << " / " << num_2 << " = " << res << endl;
    
    system("PAUSE");
    return 0;
}
