#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *aptr;
    float fl_value = 34.56;
    float *fl_ptr;
    char cr_value = 'a';
    char *cr_ptr;

    aptr = &a;
    cout << "Value of a: " << a << endl;
    cout <<"Location of a: " <<&a << endl;
    cout <<"Value of aptr: " <<aptr << endl;

    int **aptr2 = &aptr;
    ++aptr;
    cout <<"Value of incremented aptr: " << aptr << endl;
    cout << "Value in double pointer aptr2"<<aptr2<< endl;
    

    fl_ptr = &fl_value;
    cout << "Value of float: " << fl_value << endl;
    cout << "Value of fl_ptr: " << fl_ptr << endl;
    ++fl_ptr;
    cout << "Value of Incremented fl_ptr: " << fl_ptr<< endl;


    cr_ptr = &cr_value;
    cout << "Value of character: " << cr_value << endl;
    cout << "Value of cr_ptr: " << (void*)cr_ptr << endl;
    ++cr_ptr;
    cout << "Value of Incremented cr_ptr: " << (void*)cr_ptr << endl;

    return 0;
}

/*
OUTPUT
Value of a: 10
Location of a: 0x61ff00
Value of aptr: 0x61ff00
Value of incremented aptr: 0x61ff04
Value in double pointer aptr20x61fefc
Value of float: 34.56
Value of fl_ptr: 0x61fef8
Value of Incremented fl_ptr: 0x61fefc
Value of character: a
Value of cr_ptr: 0x61fef7
Value of Incremented cr_ptr: 0x61fef8
*/
