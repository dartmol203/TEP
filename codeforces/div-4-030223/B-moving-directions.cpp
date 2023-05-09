#include <bits/stdc++.h>

using namespace std;
int main(){

    string inp;
    int x, y, qnt;

    cin >> qnt;

    for(int i = 0; i<qnt; i++){
        cin >> x;
        cin >> inp;
        x =0;
        y = 0;
        int flag = 0;
        for(int j = 0; j< (int)inp.length(); j++){
            switch (inp[j])
            {
            case 'U':
                y+=1;
                break;
            case 'D':
                y-=1;
                break;
            case 'L':
                x-=1;
                break;
            case 'R':
                x+=1;
                break;
            default:
                break;
            }
            if (x == 1 && y ==1)
            {
                flag = 1;
                printf("Yes\n");
                break;
            }
        }
        if (flag == 0){
            printf("No\n");
        }


    }



    return 0;
}