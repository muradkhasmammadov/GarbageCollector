
// the setup function runs once when you press reset or power the board

char t;
const int r1=2,r2=3,l1=4,l2=5,a1= 6, a2 = 7 ,c1= 8, c2 =9;
 

 
void setup() {
Serial.begin(9600);
pinMode(r1,OUTPUT);   //right motors forward
pinMode(r2,OUTPUT);   //right motors reverse
pinMode(l1,OUTPUT);   //left motors forward
pinMode(l2,OUTPUT);  
pinMode(a1,OUTPUT);   //right motors forward
pinMode(a2,OUTPUT);   //right motors reverse
pinMode(c1,OUTPUT);   //left motors forward
pinMode(c2,OUTPUT);    //left motors reverse

}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  
  if(t == 'F'){      //move reverse (all motors rotate in reverse direction)
 digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(a1,HIGH);
  digitalWrite(a2,LOW);
  digitalWrite(c1,HIGH);
  digitalWrite(c2,LOW);
  
 digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);
  digitalWrite(a1,HIGH);
  digitalWrite(a2,LOW);
  digitalWrite(c1,HIGH);
  digitalWrite(c2,LOW);


}
 else if(t == 'G'){            //move forward(all motors rotate in forward direction)
  
   digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  digitalWrite(a1,LOW);
  digitalWrite(a2,HIGH);
  digitalWrite(c1,LOW);
  digitalWrite(c2,HIGH);

  
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  digitalWrite(a1,LOW);
  digitalWrite(a2,HIGH);
  digitalWrite(c1,LOW);
  digitalWrite(c2,HIGH);

}
else if(t == 'L'){      //turn right (left side motors rotate in forward direction, right side motors rotate in reverse direction for 100ms & stop)
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(l1,LOW);
  digitalWrite(l2,HIGH);
  
  digitalWrite(a1,HIGH);
  digitalWrite(a2,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(c2,HIGH);
 
  delay(100);
  t = 'S';
}
 
else if(t == 'R'){      //turn left (right side motors rotate in forward direction, left side motors rotate in reverse direction for 100ms & stop)
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(l1,HIGH);
  digitalWrite(l2,LOW);

  digitalWrite(a1,LOW);
  digitalWrite(a2,HIGH);
  digitalWrite(c1,HIGH);
  digitalWrite(c2,LOW);
  delay(100);
  t = 'S';
}
 
else if(t == 'S'){      //STOP (all motors stop)
  digitalWrite(r1,LOW);
  digitalWrite(r2,LOW);
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(c1,LOW);
  digitalWrite(c2,LOW);
}
delay(100);
}
}
