#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    double sumkvadrat = 0.0;
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
    
    double sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
       sum = sum + a[i]; 
    }
    
    cout << "Сумма равна " << sum << endl;
    cout << endl;
    double med = 0.0;
    med = sum / n;
    cout << "Среднее значение равно " << med << endl;
    cout << endl;
    
    for (int i=1; i<=n; i++)
    {
        cout << "Отклонение" << i << " равно " << a[i] - med << endl;
    }
    
    for (int i=1; i<=n; i++)
    {
        cout << "Квадратичное Отклонение" << i << " равно " << pow ((a[i] - med), 2) << endl;
        sumkvadrat += pow ((a[i] - med), 2);
    }
    
    cout << "Сумма 3-его столбца равна " << sumkvadrat;
    return 0;
    
}
