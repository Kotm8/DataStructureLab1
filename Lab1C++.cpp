#include <iostream>
using namespace std;


string Print1s(long int n){
    string strOUT = "";
    for (long int i = 0; i < n; i++){
        strOUT += "1";
    }  
    return strOUT;
}

int main()
{
    system("chcp 65001");
    setlocale(LC_ALL, ".UTF8");
    system("cls");
    cout << "Худяков Илья Алексеевич 09.03.04-РПИб-о23" << endl;
    int n;
    cin >> n;
    long int rem = 1;
    bool flag = true;
    if ((n % 2 == 1) && (n % 5 != 0) && (n != 1)){
        int count = 1;
        
        for (long int i = 2; i <= n; i++)
        {
            rem = (rem*10 + 1) % n;
            
            if (rem == 0){
                cout << Print1s(i-1);
                break;
            }
            if (rem == 1){
                cout << Print1s(i);
                break;
            }
            
        }
    }
    else if (n == 1){
        cout << 1 << endl;

    }
    else{
        cout << "NO";
    }
    cout << endl;
    system("pause");
    return 0;
}
 