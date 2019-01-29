int chart[][2] = {{7,0},{6,0},{5,0}};
int v,i;

void setup() {
  Serial.begin(9600);
  for(i=0; i<=2; i++)
    pinMode(chart[i][0], INPUT);
  
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
}

void loop() {
  for(i=0; i<=2; i++){
   if((v=digitalRead(chart[i][0])) != chart[i][1]){
     chart[i][1] = v;
     Serial.println(i);
     delay(100);
     break;
   }
  }
}
