// TTC.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Northwest_corner
{
public:
    Northwest_corner();
    ~Northwest_corner();
    void Create();
    void inicialization();
    void print();
private:
    int** c;//Матрица стоимости 
    int* a;//количество поставки, размер 
    int* b;//количество потребности магазинов
    int rows;//строчки матрицы
    int cols;//столбцы

};
Northwest_corner::Northwest_corner()
{
    cout << "Введите размер строк и столбцов" << endl;
    cin >> this->rows;
    cin >> this->cols;
    Create();
    
}
void Northwest_corner::Create()
{
    c = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        c[i] = new int[cols];
    }
    a = new int[rows];
    b = new int[cols];
}
void Northwest_corner::inicialization()
{
    
    cout << "Введите количество товаров" << endl;
    for (int i = 0; i < rows; i++)
    {
        cin >>this-> a[i];
    }
    cout << "Введите потребность в товарах" << endl;

    for (int i = 0; i < cols; i++)
    {
        cin >> this->b[i];
    }
    cout << "Введите таблицу стоимости" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> this->c[i][j];
        }
    }
}
void  Northwest_corner::print()
{
    cout << "Количество товаров пунктах доставки " << endl;
    for (int i = 0; i < this->rows; i++)
    {
        cout <<this-> a[i] << ",";
    }
    cout << endl;
    cout << "Количество товаров нужных на складах " << endl;
    for (int i = 0; i < this->cols; i++)
    {
        cout << this->b[i] << ",";
    }
    cout << endl;
    cout << "Матрица стоимости" << endl;
    for (int i = 0; i <this->rows; i++)
    {
        for (int j = 0; j < this->cols; j++)
        {
            cout <<this-> c[i][j]<<"  ";
        }
        cout << endl;
    }
    cout << endl;
}
Northwest_corner::~Northwest_corner()
{
    for (int i = 0; i < this->rows; i++)
    {
        delete[] this->c[i];
    }
    delete[] this->c;
    delete[] this->a;
    delete[] this->b;

}
int main()
{
    setlocale(LC_ALL, "Russian");
    Northwest_corner A;
    A.inicialization();
    A.print();

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
