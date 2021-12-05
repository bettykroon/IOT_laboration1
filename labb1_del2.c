//Laboration 1 del 2
//Betty Kroon
//https://www.tinkercad.com/things/f4brEzHBdhH-labb1del2/editel

#define led1 13
#define led2 12
#define led3 11
#define led4 10
#define button 7

int state = 0;
int old = 0;
int buttonTryck = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(button, INPUT);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  
}

void loop()
{
  buttonTryck = digitalRead(button);
  if(buttonTryck == 1)
  {
  	delay(50);
    buttonTryck = digitalRead(button);
    if(buttonTryck == 0) 
    {
    	state = old +1;
    }
  }
  else
  {
  	delay(100);
  }
  switch(state)
  {
  	case 1:
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
		delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
		delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
		delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
		delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
		delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
		delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
		delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
		delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
		delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
		delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	old = state;
    	break;
    case 2:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
    	delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
    	delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
    	delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
    	delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
    	delay(1000);
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
    	delay(1000);
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
    	old = state;
    	break;
    default:
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
    	old = 0;
    	break;
  }
}