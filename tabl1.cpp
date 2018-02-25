#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Введите количество измерений" << endl;
    cin >> n;
    cout << endl;
    double a[n+1];
    for (int i = 1; i <= n; i++)
    {
        cout << "Введите " << i << "Значение" << endl;
        cin >> a[i];
    }
    cout << endl;
    
    //Массив значений заполнен.
    
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
       sum = sum + a[i]; 
    }
    
    cout << "Сумма равна " << sum << endl;
    cout << endl;
    double med;
    med = sum / n;
    cout << "Среднее значение равно " << med << endl;
    cout << endl;
    
}
