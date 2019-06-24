void main (){
    //REGISTRADOR ANALOGICO (1 PARA ANALOGICO OU 0 PARA IO DIGITAL)
    ANSEL = 0;

    // DESABILITA COMPARADORES DO PROCESSADOR
    CMCON = 7;

    //Configurando pinos de entrada e saída (pinos 0 e 1)
    TRISIO0_bit = 0;
    TRISIO1_bit = 0;

    GPIO = 0;

    while(1){
        GPIO.F0 = 1;
        GPIO.F1 = 0;
        delay_ms(100);

        GPIO.F0 = 0;
        GPIO.F1 = 1;
        delay_ms(100);
    }

}