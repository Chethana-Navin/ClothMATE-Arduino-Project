
int TIME = 3000; // change 



int ON = LOW;
int OFF = HIGH;
int n = 1;


void setup() {
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT); 
  pinMode(11, OUTPUT); 
  pinMode(10, INPUT);  
  pinMode(2, INPUT_PULLUP);
 
  Serial.begin(9600);
  digitalWrite(13, OFF);
  digitalWrite(12, OFF); 
  digitalWrite(11, OFF); 


}

void loop() {
  int rain = digitalRead(10);
  
 


              if (rain == LOW &&  n ==1 ) {  
                 Serial.println("Rain detected, retracting the clothline");
                digitalWrite(11,ON);
                delay(TIME);
                digitalWrite(11,OFF);
                delay(1000); 
                n = 0 ;
                    
                } else if(  rain == HIGH &&  n == 0){
                Serial.println("No rain, extending the clothline");
                digitalWrite(13,ON);
                digitalWrite(12,ON);
                digitalWrite(11,ON);
                delay(TIME);
                digitalWrite(11,OFF);
                digitalWrite(12,OFF);
                digitalWrite(13,OFF);
                delay(1000); 
                n = 1;
                }
               
                delay(1000); 
                
 
}
      
 
   
