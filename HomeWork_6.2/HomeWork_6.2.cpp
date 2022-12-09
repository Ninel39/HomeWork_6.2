// HomeWork_6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*Задание 1:
Используя два указателя на массив целых чисел, скопировать один массив в другой.
Использовать в программе арифметику указателей для продвижения по массиву, а также
оператор разыменования.*/

#include <iostream>
#include<Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;
//void Copy(int* parr, int* pcopy_arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		pcopy_arr = parr;
//		cout << *pcopy_arr << "\t";//вывод массива
//		pcopy_arr++;//изменение управляющей переменной(адресная арифметика)
//		parr++;
//	}
//}
//int main()
//{
//	
//	SetConsoleCP(1251);//руссификатор
//	SetConsoleOutputCP(1251);
//	const int n = 10;//константа n со значением 10
//	int arr[10] = { 10,25,36,45,68,86,98,21,85,100 };//массив из 10 целочисленных элементов
//	int copy_arr[10];//объявляем такой же массив, куда будем копировать элементы из первого массива
//	cout << "Массив(10элементов)" << endl;
//	for (int i = 0; i < n; i++)//заполняем массив
//	{
//		cout << arr[i] << "\t";//выводим его на консоль
//	}
//	cout << endl;
//	int* parr = arr;//указатель на массив(на переменную int-разыименование )
//	int* pcopy_arr = copy_arr;
//	cout << "Копия массива(10 элементов)" << endl;
//	Copy(arr, copy_arr, n);//вызов функции
//	return 0;
//
//}


/*Задание 2:
Используя указатель на массив целых чисел, изменить порядок следования элементов массива
на противоположный.
Использовать в программе арифметику указателей для продвижения по массиву, а также
оператор разыменования.*/
//void Copy(int* parr, int* pcopy_arr, int n)
//{
//    for (int i = 0; i < n / 2; i++)//делим массив на 2 части
//    {
//        pcopy_arr = parr;
//        //cout << *pcopy_arr << "\t";//вывод массива
//        parr[i] += parr[n - i - 1];
//            parr[n - i - 1] = parr[i] - parr[n - i - 1];//переставляем элементы массива
//            parr[i] = parr[i] - parr[n - i - 1];
//    }
//    for (int i = 0; i < n; i++)
//        {
//            cout << parr[i] << " ";
//        }
//
//}
//int main()
//{
//    SetConsoleCP(1251);//руссификатор
//    	SetConsoleOutputCP(1251);
//    srand(time(0));
//    const int n = 10;
//    int arr[n]{};
//    int copy_arr[10];
//    cout << "Массив(10элементов)" << endl;
//    for (int i = 0; i < n; i++)
//    {
//        arr[i] = rand() % 101;//от 0 до 100
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    int* parr = arr;//указатель на массив(на переменную int-разыименование )
//    	int* pcopy_arr = copy_arr;
//        cout << "Копия массива(10 элементов)" << endl;
//        	Copy(arr, copy_arr, n);//вызов функции
//        	return 0;
//
//}


/*
* Задание 3:
Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы
во втором массиве элементы находились в обратном порядке.
Использовать в программе арифметику указателей для продвижения по массиву, а также
оператор разыменования.
*/
//а разве 2 задание не то же самое?

/*
* Задание 4:
Используя указатели и оператор разыменования, определить наибольшее из двух чисел.
*/

//
//void findMax(int* a, int* b);//прпототип функции
//
//int main()
//{
//    SetConsoleCP(1251);//руссификатор
//    SetConsoleOutputCP(1251);
//    int a;
//    int b;
//    cout << "Введите первое число" << endl;
//       
//    cin >> a;
//    cout << "ВВедите вторе число"<<endl;
//    cin >> b;
//
//    int* pa = &a;// с помощью амперсанта мы взяли адрес нашей переменной
//    int* pb = &b;
//
//    findMax(pa, pb);//вызов функции
//}
//
//void findMax(int* a, int* b)
//{
//    cout << *a;
//
//    if (*a > *b)
//    {
//        cout << " > ";
//    }
//    else if (*a < *b)
//    {
//        cout << " < ";
//    }
//    else
//    {
//        cout << " = ";
//    }
//    cout << *b << endl;
//}

/*
* Задание 5:
Используя указатели и оператор разыменования, определить знак числа, введённого с
клавиатуры.
*/

//void Poisk(int* N);
//
//int main()
//{
//    SetConsoleCP(1251);//руссификатор
//       SetConsoleOutputCP(1251);
//    int N;
//    cout << "Введите число" << endl;
//       
//    cin >> N;
//
//    int* pN = &N;
//    Poisk(pN);
//    return 0;
//}
//
//void Poisk(int* N)
//{
//    cout << "Ваше число " << *N;
//    if (*N > 0)
//    {
//        cout << " = положительному значению" << endl;
//    }
//    else if (*N < 0)
//    {
//        cout << " = отрицательному значению" << endl;
//    }
//    else
//    {
//        cout << " = нулю" << endl;
//    }
//    
//}

/*Задание 6:
Используя указатели и оператор разыменования, обменять местами значения двух переменных.
*/

//void change(int* a, int* b);
//void Vivod(int* a, int* b);
//
//int main()
//{
//    SetConsoleCP(1251);//руссификатор
//         SetConsoleOutputCP(1251);
//    int a;
//    int b;
//    cout << "Введите первое число" << endl;
//    cin >> a;
//    cout << "ВВедите вторе число "<<endl;
//    cin >> b;
//
//    int* pa = &a;
//    int* pb = &b;
//
//    Vivod(pa, pb);
//    change(pa, pb);
//    Vivod(pa, pb);
//}
//
//void change(int* a, int* b)
//{
//    int C = *a;
//    *a = *b;
//    *b = C;
//    cout << "Меняем числа" << endl;
//}
//
//void Vivod(int* a, int* b)
//{
//    cout << "a = " << *a << endl << "b = " << *b << endl;
//}

/*Задание 7:
Написать примитивный калькулятор, пользуясь только указателями.*/

//enum Operation//ключевое слово enum, после которого идут перечисления
//{
//    Exit = 0,// в фигурных скобках идет перечисление констант через запятую.
//               //Каждой константе по умолчанию будет присваиваться числовое значение начиная с нуля.
//    Plus = 1,
//    Minus = 2,
//    Umnoshenie = 3,
//    Delenie = 4
//};
//
//void calPlus(double* a, double* b);
//void calMinus(double* a, double* b);
//void calUmnoshenie(double* a, double* b);
//void calDelenie(double* a, double* b);
//
//int main()
//{
//    SetConsoleCP(1251);//руссификатор
//            SetConsoleOutputCP(1251);
//    double a;
//    double b;
//    int D;
//    enum Operation deystvie;
//
//    //cout << "This program is a simple calculator." << endl;
//    double* pa = &a;
//    double* pb = &b;
//
//    do
//    {
//        cout << "введите первое число ";
//        cin >> a;
//        cout << "Введите второе число ";
//        cin >> b;
//
//        cout << "Выберите действие" << endl <<
//            "0 = Выход" << endl <<
//            "1 = Сложение" << endl <<
//            "2 = Вычетание" << endl <<
//            "3 = Умножение" << endl <<
//            "4 = Деление" << endl;
//        cin >> D;
//        deystvie = (enum Operation)D;
//
//        switch (deystvie)
//        {
//        case Exit:
//            cout << "Вы передумали? Нажмите любую клавишу для выхода" << endl;
//            break;
//        case Plus:
//            calPlus(pa, pb);
//            break;
//        case Minus:
//            calMinus(pa, pb);
//            break;
//        case Umnoshenie:
//            calUmnoshenie(pa, pb);
//            break;
//        case Delenie:
//            calDelenie(pa, pb);
//            break;
//        default:
//            cout << "Неверный выбор" << endl;
//            break;
//        }
//    } while (deystvie != Exit);
//}
//
//void calPlus(double* a, double* b)
//{
//    cout << *a << " + " << *b << " = " << *a + *b << endl;
//}
//
//void calMinus(double* a, double* b)
//{
//    cout << *a << " - " << *b << " = " << *a - *b << endl;
//}
//
//void calUmnoshenie(double* a, double* b)
//{
//    cout << *a << " * " << *b << " = " << *a * *b << endl;
//}
//
//void calDelenie(double* a, double*b)
//{
//    if (*b == 0)
//    {
//        cout << "Ошибка! На ноль делить нельзя" << endl;
//    }
//    else
//    {
//        cout << *a << " / " << *b << " = " << *a / *b << endl;
//    }
//}

/*Задание 8:
Используя указатель на массив целых чисел, посчитать сумму элементов массива. Использовать
в программе арифметику указателей для продвижения по массиву, а также оператор
разыменования.
*/

//int main() {
//	int a[10] = { 1,7,3,5,2,4,6,7,9,3 };
//		int s = 0;//временная переменная для хранения результата
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << setw(3) << *(a + i);
//	}
//	cout << endl;
//
//	for (int i = 0; i < 10; i++)
//		s += *(a + i);
//	cout << "sum=" << s << endl;
//	return 0;
//}