void setup() {
   Serial.begin(19200); //Inicializa o monitor serial com atualização de 19200bits
}


void loop() {    
  
  int valorPortaAnalogica = analogRead(A1); //recebe o valor da porta analógica A1
  float voltagem = valorPortaAnalogica*(5.00/1023.00); //converte valor em bits da porta analógica para um valor em volts
  Serial.println(voltagem); //exibe no monitor serial o valor da voltagem;
  
  }
