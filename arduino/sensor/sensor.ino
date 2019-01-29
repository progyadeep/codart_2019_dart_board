int chart[][3] = {{7,13,0},{6,12,0},{5,11,0}};

void setup() {
  Serial.begin(9600);
  for(int i=0; i<=2; i++){
    pinMode(chart[i][0],INPUT);
    pinMode(chart[i][1],OUTPUT);
  }
}

void loop() {
  int v,i=-1;
  if((v=digitalRead(chart[0][0])) != chart[0][2])
  {
    chart[0][2] = v;
    i=0;
   }
   else if((digitalRead(chart[1][0])) != chart[1][2]){
     chart[1][2] = v;
     i=1;
   }
   else if((digitalRead(chart[2][0])) != chart[2][2]){
     chart[2][2] = v;
     i=2;
   }
   
   if(i != -1){
    digitalWrite(chart[i][1],HIGH);
    delay(200);
    digitalWrite(chart[i][1],LOW);
    delay(200);
   }
}
