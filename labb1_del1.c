//laboration 1 del 1
//Betty Kroon
//https://www.tinkercad.com/things/36K2H3eK9Sm-labb1del1/editel

#define led1 13        //led1 ansluten till digital out pin 13
#define led2 12        //led2 ansluten till digital out pin 12
#define led3 11        //led3 ansluten till digital out pin 11
#define led4 10        //led4 ansluten till digital out pin 10
#define knapp 7        //knapp ansluten till digital ingång pin 7

int state = 0;         //håller reda på hur många gånger knappen tryckts på
int old = 0;           //hur många gånger knappen tryckts på innan
int buttonTryck = 0;   //om knappen tryckts på eller inte

void setup()
{
  pinMode(led1, OUTPUT);  //sätter led1 som output
  pinMode(led2, OUTPUT);  //sätter led2 som output
  pinMode(led3, OUTPUT);  //sätter led3 som output
  pinMode(led4, OUTPUT);  //sätter led4 som output
  pinMode(knapp, INPUT);  //sätter knapp som input
  
  digitalWrite(led1, LOW); //lamporna är av
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
}

void loop()
{
  buttonTryck = digitalRead(knapp);     //läser av knappen
  if(buttonTryck == 1)                  //om knappen tryckts på
  {
  	delay(50);
    buttonTryck = digitalRead(knapp);   //läser av knappen igen
    if(buttonTryck == 0)                //vi vet nu att knappen tryckts på
    {
    	state = old +1;                 //därför ökar vi old state med 1 till current state
    }
  }
  else   //om knappen ej tryckts på
  {
  	delay(100);
  }
  switch(state)
  {
  	case 1:                         //om knappen tryckts på 1 gång
    	digitalWrite(led1, LOW);	//led1 av
    	digitalWrite(led2, LOW);	//led2 av
    	digitalWrite(led3, LOW);	//led3 av
    	digitalWrite(led4, HIGH);	//led4 på = 0001 = 1 binärt
    	old = state;				//sätter old state till current state
    	break;
    case 2:                         //om knappen tryckts på 2 gånger...
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
    	old = state;
    	break;
    case 3:
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	old = state;
    	break;
    case 4:
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
    	old = state;
    	break;
    case 5:
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
    	old = state;
    	break;
    case 6:
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
    	old = state;
    	break;
    case 7:
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	old = state;
    	break;
    case 8:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
    	old = state;
    	break;
    case 9:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
    	old = state;
    	break;
    case 10:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
    	old = state;
    	break;
    case 11:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	old = state;
    	break;
    case 12:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
    	old = state;
    	break;
    case 13:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, HIGH);
    	old = state;
    	break;
    case 14:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, LOW);
    	old = state;
    	break;
    case 15:
    	digitalWrite(led1, HIGH);
    	digitalWrite(led2, HIGH);
    	digitalWrite(led3, HIGH);
    	digitalWrite(led4, HIGH);
    	old = state;
    	break;
    default:                      //om ingen av casen, sätt alla lampor till av
    	digitalWrite(led1, LOW);
    	digitalWrite(led2, LOW);
    	digitalWrite(led3, LOW);
    	digitalWrite(led4, LOW);
    	old = 0;
    	break;
  }
}
