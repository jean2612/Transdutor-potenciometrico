#include <LiquidCrystal.h>//Carrega a biblioteca LiquidCrystal

//Define os pinos que serão utilizados para ligação ao display
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
   Serial.begin(19200); //Inicializa o monitor serial com atualização de 19200bits
   lcd.begin(16, 2);

}


void loop() {    
  
  int valorPortaAnalogica = analogRead(A1); //recebe o valor da porta analógica A1
  float voltagem = valorPortaAnalogica*(5.00/1023.00); //converte valor em bits da porta analógica para um valor em volts
  Serial.println(voltagem); //exibe no monitor serial o valor da voltagem;
   //Limpa a tela
  //lcd.clear();
  lcd.setCursor(3, 0); //coloca um espaçamento e seleciona primeira linha
  lcd.print("Vout="); //imprimi mensagem no lcd
  lcd.setCursor(3, 1); //coloca um espaçamento e seleciona segunda linha
  lcd.print(voltagem); //imprimi o valor lido pela porta analógica(A1) e exibe no lsd
  lcd.print("V");
  }



 
