VOID MAIN (){
        //    76543210
    TRISB = 0b00000000;
    PORTB = 0b00000000;

    WHILE (1){

        PORTB ++;
        delay_ms(50);
        //OBS: quando todos os bits forem 1 (255) o valor retorna para 0    


    }
}