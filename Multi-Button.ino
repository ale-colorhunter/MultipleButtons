

const int button1Pin = 2;  // pushbutton 1 pin
const int button2Pin = 3;  // pushbutton 2 pin
const int ledPin =  13;    // LED pin

int button1State, button2State;  // variables to hold the pushbutton states

//int button1State = 0;
//int button2State = 0;  // variables to hold the pushbutton states

void setup() {
  Serial.begin(9600);

  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);

  
  pinMode(ledPin, OUTPUT); // Set up the LED pin to be an output
}

void loop() {
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);


//if (button1State == HIGH) {
//     digitalWrite(13, LOW);
//     Serial.println("BTN1");
//
//  } else {
//    digitalWrite(13, HIGH);
//  //print out the value of the pushbutton
//
//  }
//
//  if (button2State == HIGH){
//      digitalWrite(13, LOW);
//      Serial.println("BTN2");       //print out the value of the pushbutton
//
//    
//  }   else {
//      digitalWrite(13, HIGH);
//    }
//  }


 if ((button1State == HIGH) && (button2State == HIGH)) {
    digitalWrite(13, LOW);
      Serial.println("Button");
      }

     else {
       digitalWrite(13, HIGH);
         Serial.println("Button is Pressed");       //print out the value of the pushbutton
        }
   }
