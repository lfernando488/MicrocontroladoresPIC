
#DEFINE S1   RA1_BIT
#DEFINE S2   RA0_BIT
#DEFINE LED1 RA3_BIT
#DEFINE LED2 RA2_BIT


void main(){
    CMCON = 7;
    TRISA = 3; // 0B00000011
    PORTA = 3; //NIVEL ALTO NOS PRIMEIROS BITS (CURRENT SOURCE)

    WHILE(1){

        IF(S1 == 0){
            WHILE(1){
            LED1 = 1;
            LED2 = 0;
            DELAY_MS(500);

            LED1 = 0;
            LED2 = 1;
            DELAY_MS(500);
            }
        }
        
        IF(S2== 0){
            WHILE(1){
            LED1 = 1;
            LED2 = 1;
            DELAY_MS(500);
            LED1 = 0;
            LED2 = 0;
            DELAY_MS(500);
            }
        }
    }
}