int chart[][3] = {{7,12,0},{6,11,0},{5,10,0}};

void setup() {
  int i;
  for(i=0; i<=2; i++)
    pinMode(chart[i][0], INPUT);

  for(i=0; i<=2; i++)
    pinMode(chart[i][1], OUTPUT);
  
  pinMode(13, OUTPUT);
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
