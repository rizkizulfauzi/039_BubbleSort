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

void bubbleSortArray(){
    int pass = 1; //step1

   do 
   {
    for (int j = 0; j <= n -1-pass;j++)
    {//step 2

        if(arr[j] > arr[j+1]){
            int temp;
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }

    pass = pass + 1; //step4
    
   } while (pass <= n - 1); //step 5
}



