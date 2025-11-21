#include <iostream>

using namespace std;

int main()
{
    string var1 = "Ayooooo belajar C++";
    string* var2 = &var1; //ini akan mengakses alamat memori yaitu var1 ke dalam var2
    // tanda bintang * untuk menandakan tipe data, tanda & menunjukkan untuk mengakses alamat memori dan var1 yaitu nama pinternya
    cout << var1 << endl;
    cout << var2 << endl;

}
