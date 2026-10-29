#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High);
void Print(int* a, const int size);
int Min(int* a, const int size);

int main()
{
    srand((unsigned)time(NULL));

    const int n = 10;
    int a[n];
    int Low = -20;
    int High = 50;

    Create(a, n, Low, High);

    cout << "a: ";
    Print(a, n);

    cout << "min = " << Min(a, n) << endl;

    return 0;
}

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(5) << a[i];
    cout << endl;
}


int Min(int* a, const int size)
{
    int min;
    int imin = -1;

    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0)
        {
            min = a[i];
            imin = i;
            break;
        }

    if (imin == -1)
    {
        cerr << "немає елементів, які задовольняють умові" << endl;
        return 0;
    }

 
    for (int i = imin + 1; i < size; i++)
        if (a[i] < min && a[i] % 2 == 0)
            min = a[i];

    return min;
}