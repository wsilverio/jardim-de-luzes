### jardim

Controlador modular para 8x [LEDs RGB de potência (3W)](https://www.adafruit.com/product/2530).  
Método de controle: [shiftPWM](https://github.com/elcojacobs/ShiftPWM) (PWM + shift register).  
Comunicação entre as placas: protocolo RS485.  
Criado com [Proteus Design Suite v8.5](https://www.labcenter.com/).  

##### Alimentação
- Circuito: 12 -> 5V
- LEDs: 5V

##### Conectores
- **J1** - Alimentação circuito 12V 1A
- **J2** - Alimentação LEDs 12V 8,5A
- **J3** - FTDI (DTR, RX, TX, 5V, CTS, GND)
- **J4** - Entrada comunicação
- **J5** - Saída comunicação
- **J6** - Ventoinha 12V
- **XLR1** (Fêmea) - Saída comunicação
- **XLR2** (Macho) - Entrada comunicação
- **X1 ... X8** - LEDs (B, G, R, VCC)


##### Jumpers
- **JP1** - Seleção de alimentação (fonte externa / FTDI)
- **JP2** - Seleção de modo de operação (master / slave)

##### LEDs
- **D2** (amarelo) - VCC
- **D5** (vermelho) - VCC LEDs
- **D3** (verde) - Uso geral

##### Botão
- **S1** - Reset
