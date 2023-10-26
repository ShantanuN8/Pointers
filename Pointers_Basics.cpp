#include<iostream>
using namespace std;

void increment(int *a)
{
    (*a)++;
}

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int i;
    int *ptr = &arr[i];  

    for (i = 0; i < 4; i++)
    {
        cout << *ptr << " ";
        cout << &arr[i] << endl;
        ptr++;
    }

    int arr1[] = {10, 20, 30, 40};
    int j;
    for (j = 0; j < 4; j++)
    {
        cout << arr[j] << endl;
    }

    int b = 2;
    increment(&b);
    cout << b << endl;

    int c = 15;
    int d = 20;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
    swap(&c, &d);
    cout << "After swapping:" << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;

    char *str = "Symbiosis Institute of Technology";
    cout << *(str + 0) << *(str + 10) << *(str + 23);

    return 0;
}
/*
OUTPUT
10 0x7ffe03442030
20 0x7ffe03442034
30 0x7ffe03442038
40 0x7ffe0344203c
10
20
30
40
3
c: 15
d: 20
After swapping:
c: 20
d: 15
SIT
*/
