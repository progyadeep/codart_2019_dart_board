int chart[][3] = {{7,12,0},{6,11,0},{5,10,0}};
int v, i=-1;;

void setup() {
  Serial.begin(9600);
  int i;
  for(i=0; i<=2; i++)
    pinMode(chart[i][0], INPUT);

  for(i=0; i<=2; i++)
    pinMode(chart[i][1], OUTPUT);
  
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
}

void loop() {
  i=-1;  
  if((v=digitalRead(chart[0][0])) != chart[0][2])
  {
    chart[0][2] = v;
    Serial.println(1);
    i=0;
   }
   else if((digitalRead(chart[1][0])) != chart[1][2]){
     chart[1][2] = v;
     Serial.println(2);
     i=1;
   }
   else if((digitalRead(chart[2][0])) != chart[2][2]){
     chart[2][2] = v;
     Serial.println(3);
     i=2;
   }

   if(i != -1){
    digitalWrite(chart[i][1],HIGH);
    delay(200);
    digitalWrite(chart[i][1],LOW);
    delay(200);
   }
}
