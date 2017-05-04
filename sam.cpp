#include <iostream>
#include <ctime>
#include <cmath>
#include <new>
#include <cstdlib>

using namespace std;

class Array
{
public:
    void Create (int *&Arr, const int m); //выделение памяти
    void Delete (int *&Arr); //освобождение памяти
    void Fill (int *&Arr, const int m); //заполнение данными
    void Func (int *&Arr, const int m);//нужная функция 
};

void Array::Create (int *&Arr, const int m)
{
    Arr=new int[m];
}

void Array::Delete (int *&Arr)
{
    delete []Arr;
    Arr=NULL;
}

void Array::Fill (int *&Arr, const int m)
{
    for (int i=0;i<m;i++)
    {
        cout << "введите " << i+1 << " элемент массива" << endl;
        cin >> Arr[i];
    }
}
void Array::Func (int *&Arr, const int m)
{
	int f=0, last=0, k=0;
	cout << "введите модуль диапазона" << endl;
	cin >> k;
	for (int i=0;i<m;i++)
            if (Arr[i]>=(-k)&&Arr[i]<=k)
            {
                last=Arr[i];
                f=i;
            }
        if (f==0)
            cout << "таких элементов в данном массиве нет" << endl;
        else
        {
            cout << "последним элементом массива в данном диапазоне является " << last << " под номером " << f+1 << endl;
        }    
}

int main()
{
    int *Ptr=NULL;
    Array Ar;
    int m=0;
    cout << "введите размер массива" << endl;
    cin >> m;
    Ar.Create(Ptr,m);
    Ar.Fill(Ptr,m);
    Ar.Func(Ptr,m);
    Ar.Delete(Ptr);    
    return 0;
}
