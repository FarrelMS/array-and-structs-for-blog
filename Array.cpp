#include <iostream>
using namespace std;

int main(){
    //deklarasi array
    int arr[]={2,4,6,8};
    for (int i = 0; i < 4; i++)
    {
    //memanggil array dengan indeks no dari iterasi itu
        cout << arr[i] << endl;
    //alamat dari setiap array (bertetangaan antar id)
        cout << &arr[i] << endl;
    }
    

    return 0;
}