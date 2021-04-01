

// utlrasonic pinout
#define TRIGGER_PIN  14 // D5
#define ECHO_PIN     12 //D6 
#define LED1 13
//#define LED2 12
double duration, distance;
void setup() {
  Serial.begin(115200);


 pinMode(TRIGGER_PIN, OUTPUT);
 pinMode(ECHO_PIN, INPUT);
 pinMode(LED1, OUTPUT);

}


void loop() {
//  thing.handle();
      digitalWrite(TRIGGER_PIN, LOW);  
      digitalWrite(TRIGGER_PIN, HIGH); 
      delayMicroseconds(10); // the delay 
      digitalWrite(TRIGGER_PIN, LOW);  
      duration = pulseIn(ECHO_PIN, HIGH); // calculating time 
      distance = (duration/2) / 29.1; 

      if(distance < 50){
      digitalWrite(LED1,  HIGH);
    }
    else{
      digitalWrite(LED1, LOW);
    }

}
