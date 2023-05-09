#include <bits/stdc++.h>

using namespace std;
int main(){
    int qnt;

    string inp;
    int size;

    cin >> qnt;

    for(int i = 0; i< qnt; i++){
        cin >> size;
        cin >> inp;
        int size0 = size;
        for(int j = 0; j < size/2; j++){
            if((inp[j]== '0' && inp[size-1-j]== '1') || (inp[j]== '1' && inp[size-1-j]== '0')){
                size0-=2;
            }else{
                break;
            }
        }
        cout << size0 <<'\n';

    }


    return 0;
}