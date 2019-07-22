int chart[][3] = {{7,0,13},{6,0,12},{5,0,11}};
int ops[] = {0,0,0};
int i;

void setup() {
  Serial.begin(9600);
  for(i=0; i<=2; i++){
    pinMode(chart[i][0], INPUT);
    pinMode(chart[i][2], OUTPUT);
  }
}

void loop() {
  for(i=0; i<=2; i++){
      ops[i] = digitalRead(chart[i][0]);
  }
  for(i=2; i>=0; i--){
    if(chart[i][1] != ops[i]){
      chart[i][1] = ops[i];
      Serial.write(i);
      digitalWrite(chart[i][2], HIGH);
      delay(200);
      digitalWrite(chart[i][2], LOW);
      break;
    }
  }
}
