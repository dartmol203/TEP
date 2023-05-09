#include <stdio.h>

int main(){

    int qnt;
    char inp;

    scanf("%d ", &qnt);

    for(int i = 0; i<qnt; i++){
        scanf("%c ", &inp);

        switch (inp)
        {
        case 'c':
        case 'o':
        case 'd':
        case 'e':
        case 'f':
        case 'r':
        case 's':
            printf("Yes\n");
            break;
        default:
            printf("No\n");
            break;
        }
    }


    return 0;
}