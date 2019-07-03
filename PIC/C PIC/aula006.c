//DEFININDO NOMES AS PORTAS "VARIAVÉIS"
#DEFINE S1 GPIO.F0
#DEFINE S2 GPIO.F1
#DEFINE D1 GPIO.F4
#DEFINE D2 GPIO.F5

void main (){

    ANSEL = 0; //Somente entradas digitais

    //CIRCUITO COMPARADOR
    CMCON = 7;

    TRISIO0_BIT = 1;    //SAÍDA
    TRISIO1_BIT = 1;    //SAÍDA
    TRISIO4_BIT = 0;    //ENTRADA
    TRISIO5_BIT = 0;    //ENTRADA

    //DEFINIDO ESTADO INICIAL DOS PINOS
    S1 = 1;
    S2 = 1;
    D1 = 0;
    D2 = 0;

    WHILE(1){
        IF(S1 == 0 ){
            D1 = ~D1;
            DELAY_MS(300);
        }
        IF(S2 == 0 ){
            D2 = ~D2;
            DELAY_MS(300);
        }
    }
}