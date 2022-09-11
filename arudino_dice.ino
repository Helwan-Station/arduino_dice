

void setup() {
  pinMode(8, OUTPUT); //D1
  pinMode(7, OUTPUT); //D6
  pinMode(6, OUTPUT); //D2
  pinMode(5, OUTPUT); //D4
  pinMode(4, OUTPUT); //D3
  pinMode(3, OUTPUT); //D5


  //add button to control dice

  pinMode(10, INPUT);
}

void loop() {

if(digitalRead(10) == LOW)
{
  int no = (rand() % 6) + 1;  //gets random numbers from 1 - 6
  if(no == 1)
  {
    
    digitalWrite(7, HIGH);
  }

  if(no == 2)
  {
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
  }

  if(no == 3)
  {
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
  }

  if(no == 4)
  {
    digitalWrite(8, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
   
  }

  if(no == 5)
  {
     digitalWrite(8, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
  }

  if(no == 6)
  {
      digitalWrite(8, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(3, HIGH);
  }

  delay(1000); //delay for number to show , before all leds are turned off

  
  //making all leds off , for new numbers to show
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
}

}
