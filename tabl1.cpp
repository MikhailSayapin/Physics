#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    label1:
    char ex;
    double sumkvadrat = 0.0;
    int n;
    cout << "Введите количество измерений" << endl;
    cin >> n;
    cout << endl;
    double a[n+1];
    for (int i = 1; i <= n; i++)
    {
        cout << "Введите " << i << " Значение" << endl;
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
        cout << "Отклонение " << i << " равно " << a[i] - med << endl;
    }
    
    cout << endl;
    
    for (int i=1; i<=n; i++)
    {
        cout << "Квадратичное отклонение " << i << " равно " << pow ((a[i] - med), 2) << endl;
        sumkvadrat += pow ((a[i] - med), 2);
    }
    
    cout << endl;
    
    cout << "Сумма квадратичных отклонений равна " << sumkvadrat << endl;
    cout << endl;
    
    label2:
    
    cout << "Завершить работу программы? (y/n)" << endl;
    cin >> ex;
    
    if (ex == 'y')
    {
        cout << "\n До свидания! \n";
        return 0;
    }
    
    if (ex == 'n')
    {
        goto label1;
    }
    
    else
    {
        cout << "Неверный ввод\n";
        goto label2;
    }
    
}
