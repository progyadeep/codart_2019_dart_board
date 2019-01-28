int chart[][3] = {{7,13,0},{6,12,0},{5,11,0}};

void setup() {
  pinMode(chart[0][0],INPUT);
  pinMode(chart[1][0],INPUT);
  pinMode(chart[2][0],INPUT);
  
  pinMode(chart[0][1],OUTPUT);
  pinMode(chart[1][1],OUTPUT);
  pinMode(chart[2][1],OUTPUT);
}

void loop() {
  int v;
  if((v=digitalRead(chart[0][0])) != chart[0][2])
  {
    chart[0][2] = v;
    digitalWrite(chart[0][1],HIGH);
    delay(200);
    digitalWrite(chart[0][1],LOW);
    delay(200);
   }
   else if((digitalRead(chart[1][0])) != chart[1][2]){
     chart[1][2] = v;
     digitalWrite(chart[1][1],HIGH);
     delay(200);
     digitalWrite(chart[1][1],LOW);
     delay(200);
   }
   else if((digitalRead(chart[2][0])) != chart[2][2]){
     chart[2][2] = v;
     digitalWrite(chart[2][1],HIGH);
     delay(200);
     digitalWrite(chart[2][1],LOW);
     delay(200);
   }
   //delay(200);
}