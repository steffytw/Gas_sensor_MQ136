int pin8 = 8;                     // digital pin
int sensor=A0;                    //analog pin
int sensorValue = 0;              // intial sensor value

void setup() {
  pinMode(pin8,OUTPUT);          // intialize digitalpin
  Serial.begin(9600);            // intialize serial communication
  

}

void loop() {
  sensorValue=analogRead(sensor);          //read input
  Serial.println(sensorValue,DEC);        //print value
  if(sensorValue > 500)                   
  {
    digitalWrite(pin8,HIGH);          //led will glow
    }
    else
    {
      digitalWrite(pin8,LOW);            //led will not glow
      }
  

}
