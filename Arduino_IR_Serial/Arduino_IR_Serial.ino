#define reading A0
unsigned int value;

void setup() {
// put your setup code here, to run once:
pinMode(reading,INPUT);
Serial.begin(9600);  //set the baud rate of the serial monitor
Serial.print("Value");
Serial.println ("\tVoltage");  //"\t" create spacing of a tab
}

void loop() {
// put your main code here, to run repeatedly:
value = analogRead(reading);  //take reading from sensor
float raw_voltage = value*0.00488;  //convert analog value to voltage
Serial.print(value);  //display analog value in serial monitor
Serial.print("\t");
Serial.println(raw_voltage);  //display value of voltage in serial monitor
delay(1000);  //create a delay of 1s
}
