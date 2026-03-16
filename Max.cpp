#include <iostream>
using namespace std;

int main()
{
    int nilai[5];
    int max;
    for(int i = 0; i < 5; i++)
    {
        cout << "Masukkan nilai ke-" << i+1 << " : ";
        cin >> nilai[i];
    }
    //nilai ke 1 sebagai default paling besar
    max = nilai[0];
    //loop untuk membandingnkan dengan bilangan selanjutnya
    //jika lebih besar dari max maka dia max yang baru
    for(int i = 1; i < 5; i++)
    {
        if(nilai[i] > max)
        {
            max = nilai[i];
        }
    }
    cout << "Nilai tertinggi adalah :" << max << endl;
    return 0;
}