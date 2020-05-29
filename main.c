#include <stdio.h>

/*******************Variables globales****************/
char caractere;
int crc16=0xffff;
int retenue;
int poly=0Xa001;
/*********************main******************/


int main() {

    printf("Bonjour, veuillez entrer le caractère en question \n");
    scanf("%c", &caractere);
int octet=caractere;

    crc16=crc16^octet;

printf("octet =%i \n", octet);
    for (int n = 0; n <8 ; n++) {
        crc16 = crc16>>1; //décalage a droite
        printf("CRC16 décalage =%i \n", crc16);

        if (crc16 % 2 == 1) {  //reste de la division par 2
            crc16==crc16 ^ poly;
        }

        printf("n=%i : CRC16 =%i \n", n, crc16);

    }
   //do {



    //}
    //while(n<=7);

    return 0;
}