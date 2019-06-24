//PIC 12F675

void main (){
    
    ANSEL = 0x00;   // Desliga as entradas AD
    CMCON = 7;      // Desliga comparadores internos do PIC

    TRISIO0_bit = 1;    // Estado 1 = entrada no port 0
    TRISIO1_bit = 0;    // Estado 0 = saida no port 1

    GPIO = 0;           //

    while(1){
        if(GPIO.F0 == 1){
           GPIO.F1 = 1;
           delay_ms(2000); 
        }
        else{
            GPIO.F1 = 0;
        }

    }
}