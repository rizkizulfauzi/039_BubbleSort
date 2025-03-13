#include <iostream>
#include <string>
using namespace std;

int arr[20];
int n;

void input(){
    while(true){
        cout << "Masukan banyaknya elemen pada array :";
        cin >> n;
        if (n<=20)
        break;
        else{
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n" << endl;
        }
    }

    cout << endl;
    cout << "======================" << endl;
    cout << "Masukkan element array" << endl;
    cout << "======================" << endl;

   for (int i - 0; <n; i++){
    cout << "Data ke-" <<(i+i) << ";";
   }

}



