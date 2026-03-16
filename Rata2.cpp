#include <iostream>
using namespace std;

int main(){
    int nilai[5];
    int total = 0;
    float rata;
    for (int i = 0; i < 5; i++)
    {
        cout << "Masukan nilai mahasiswa ke-" << i+1 <<": ";
        cin >> nilai[i];
        total += nilai[i];
    }
    rata = total/5.0;
    cout << "Total nilai: " << total << endl;
    cout << "Rata-rata: " << rata;
    
    return 0;
}