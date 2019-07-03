#DEFINE S2      RA0_BIT 
#DEFINE S1      RA1_BIT
#DEFINE LED2    RA2_BIT
#DEFINE LED1    RA3_BII

INT NUMBERS;

void main (){

    CMCON = 7; //DESABILITA OS COMPARADORES
    TRISA = 3; //INDICA QUE S1 E S2 SÃO ENTRADA DIGITAL
    TRISB = 0;
    
    PORTA = 3;
    PORTB = 0;

    WHILE(1){
        NUMBERS = RAND();

        LED1 = NUMBERS;
        LED2 = ~LED1;
        DELAY_MS(500);

        // ENQUANTO LED1 FOR IGUAL A 1 (ACESO)
        WHILE(LED1){
            IF(S1 == 0) LED1 = 0;
            DELAY_MS(70);
        }

        // ENQUANTO LED2 FOR IGUAL A 1 (ACESO)
        WHILE(LED2){
            IF(S2 == 0) LED2 = 0;
            DELAY_MS(70);
        }

        DELAY_MS(500);
    }
}