void main (){
    //Todos os pinos serão usados como saída (comando TRISB)
    TRISB = 0b00000000;
    //Inicializa todos os poinos da portb com nivel baixo (0)
    PORTB = 0b00000000;

    //Loop infinito
    while(1){
        //Passa nível 1 para pino RB1 
        RB1_bit = 1;
        //Define o tempo em milisegundos
        delay_ms(1000);

        //Passa nível 0 para pino RB1 
        RB1_bit = 0;
        //Define o tempo em milisegundos
        delay_ms(1000);
    }
}