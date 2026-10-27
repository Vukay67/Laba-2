#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y;
    cout<<"Введите x: ";
    cin>>x;


    if(2 <= x && x < 6)
        y = pow(x, 2) + 3 * x;
    else if( x < 2)
        y = pow(x, 3) + 4;
    else if(x >= 6)
        y = 4 *( x + 3);

    cout<<"Резултат : "<<y<<endl;

// ЗАДАНИЕ НА ЛАБОРАТОРНУЮ РАБОТУ
// 1
    int num_1, num_2;
    cout<<"Введите первое число: ";
    cin>>num_1;
    cout<<"Введите второе число: ";
    cin>>num_2;

    if (num_1 < num_2)
        cout<<num_1 * 2<<endl;
        cout<<num_2<<endl;

    
// 2
    int num1, num2, num3;
    cout<<"Введите первое число: ";
    cin>>num1;
    cout<<"Введите второе число: ";
    cin>>num2;
    cout<<"Введите трете число: ";
    cin>>num3;

    if (num1>num2 && num1>num3)
        cout<<num1;
    else if (num2>num1 && num2>num3)
        cout<<num2;
    else if (num3>num1 && num3>num2)
        cout<<num3;
    
// 3
    int num;
    int sub = num / 1000;

    return 0;
}