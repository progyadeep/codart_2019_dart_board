int chart[][2] = {{7, 0}, {6, 0}, {5, 0}};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i <= 2; i++) {
    pinMode(chart[i][0], INPUT);
    //pinMode(chart[i][1], OUTPUT);
  }
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
}

void loop() {
  int v, i = -1;
  if ((v = digitalRead(chart[0][0])) != chart[0][1])
  {
    chart[0][1] = v;
    Serial.println(0);
  }
  else if ((v = digitalRead(chart[1][0])) != chart[1][1]) {
    chart[1][1] = v;
    Serial.println(1);
  }
  else if ((v = digitalRead(chart[2][0])) != chart[2][1]) {
    chart[2][1] = v;
    Serial.println(2);
  }
  delay(200);
}
