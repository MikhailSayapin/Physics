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
    
    int inter4045 = 0;
    int inter4550 = 0;
    int inter5055 = 0;
    int inter5560 = 0;
    int inter6065 = 0;
    int inter6570 = 0;
    int inter7075 = 0;
    int inter7580 = 0;
    int inter8085 = 0;
    int inter8590 = 0;
    int inter9095 = 0;
    int inter9500 = 0;
    int inter0005 = 0;
    int inter0510 = 0;
    int inter1015 = 0;
    for (int i=1; i<=n; i++)
    {
        if ((a[i] >= 1.40) && (a[i] <= 1.45))
        {
            inter4045++;
        }
        
        if ((a[i] >= 1.45) && (a[i] <= 1.50))
        {
            inter4550++;
        }
        
        if ((a[i] >= 1.50) && (a[i] <= 1.55))
        {
            inter5055++;
        }
        
        if ((a[i] >= 1.55) && (a[i] <= 1.60))
        {
            inter5560++;
        }
        
        if ((a[i] >= 1.60) && (a[i] <= 1.65))
        {
            inter6065++;
        }
        
        if ((a[i] >= 1.65) && (a[i] <= 1.70))
        {
            inter6570++;
        }
        
        if ((a[i] >= 1.70) && (a[i] <= 1.75))
        {
            inter7075++;
        }
        
        if ((a[i] >= 1.75) && (a[i] <= 1.80))
        {
            inter7580++;
        }
        
        if ((a[i] >= 1.80) && (a[i] <= 1.85))
        {
            inter8085++;
        }
        
        if ((a[i] >= 1.85) && (a[i] <= 1.90))
        {
            inter8590++;
        }
        
        if ((a[i] >= 1.90) && (a[i] <= 1.95))
        {
            inter9095++;
        }
        
        if ((a[i] >= 1.95) && (a[i] <= 2.00))
        {
            inter9500++;
        }
        
        if ((a[i] >= 2.00) && (a[i] <= 2.05))
        {
            inter0005++;
        }
        
        if ((a[i] >= 2.05) && (a[i] <= 2.10))
        {
            inter0510++;
        }
        
        if ((a[i] >= 2.10) && (a[i] <= 2.15))
        {
            inter1015++;
        }
    }
    
    cout << "================================================================" << endl;
    cout << "Количество значений, попавшее в различные интервалы гистограммы:";
    cout << endl << endl;
    cout << "1-ый интервал: " << inter4045 << endl;
    cout << endl;
    cout << "2-ый интервал: " << inter4550 << endl;
    cout << endl;
    cout << "3-ый интервал: " << inter5055 << endl;
    cout << endl;
    cout << "4-ый интервал: " << inter5560 << endl;
    cout << endl;
    cout << "5-ый интервал: " << inter6065 << endl;
    cout << endl;
    cout << "6-ый интервал: " << inter6570 << endl;
    cout << endl;
    cout << "7-ый интервал: " << inter7075 << endl;
    cout << endl;
    cout << "8-ый интервал: " << inter7580 << endl;
    cout << endl;
    cout << "9-ый интервал: " << inter8085 << endl;
    cout << endl;
    cout << "10-ый интервал: " << inter8590 << endl;
    cout << endl;
    cout << "11-ый интервал: " << inter9095 << endl;
    cout << endl;
    cout << "12-ый интервал: " << inter9500 << endl;
    cout << endl;
    cout << "13-ый интервал: " << inter0005 << endl;
    cout << endl;
    cout << "14-ый интервал: " << inter0510 << endl;
    cout << endl;
    cout << "15-ый интервал: " << inter1015 << endl;
    cout << endl;    
        
    return 0;
    
}
