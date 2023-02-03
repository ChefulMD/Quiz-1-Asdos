#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    printf(":::::::::::::::::::::\n");
    printf("   Tugas Quiz Asdos  \n");
    printf(":::::::::::::::::::::\n*********************\n");
    printf("       1. Level 1\n");
    printf("       2. Level 2\n");
    printf("       3. Level 3\n");
    printf("       4. EXIT\n\n");
    printf("*********************\n:::::::::::::::::::::\n");
    printf("\nPilih Menu = ");
    int a,b,c,g;
    scanf("%d",&a);
    switch(a){
        case 1 :
            system("cls");
            printf("Masukkan angka = ");
            scanf("%d",&b);

            for(int i = 0;i <= b;i++){
                for(int k = 0;k <= i;k++){
                    printf(" %d",i + k);
                }
                printf("\n");
            }
            printf("\nPress any key....");
            getch();
            goto*main();
            break;
        case 2 :
             system("cls");
            printf("Masukkan angka = ");
            scanf("%d",&b);

            for(int i = 1;i <= b;i++){
                for(int k = 1;k <= i;k++){
                    printf(" %d",i * k);
                }
                printf("\n");
            }
            printf("\nPress any key....");
            getch();
            goto*main();
            break;
        case 3 :
            level3 :
            system("cls");
            printf("Masukkan angka = ");
            scanf("%d",&b);
            if(b > 9 || b < 1){
                printf("~Masukkan angka antara 1 - 9~\n");
                getch();
                goto level3;
            }
            for(int i = 1;i <= b;i++){
                for(int j = b;j > i;j--){
                    printf(" ");
                }
                for(int k = 1;k < i;k++){
                    printf("%d",k);
                }
                for(int k = i;k >= 1;k--){
                    printf("%d",k);
                }
                printf("\n");
    }
         for(int i = 1;i <= b;i++){
                for(int k = 1;k <= i;k++){
                    printf(" ");
                }
                c = 0;
                for(int j = b;j > i;j--){
                    c++;
                    printf("%d",c);
                }
                 for(int j = b-1;j > i;j--){
                    printf("%d",j-i);
                }
                printf("\n");
            }
                printf("Press any key to continue");
                getch();
                goto*main();
                break;
        case 4 :
            system("cls");
            printf("~TERIMA KASIH~");//jaga-jaga ngebug
            break;
        default :
            system("cls");
            printf("~Pilih salah satu dari menu~\n(restart jika input berupa char=bug)\n\nPress any key...");
            getch();
            goto*main();
            break;
    }
    return 0;
}
