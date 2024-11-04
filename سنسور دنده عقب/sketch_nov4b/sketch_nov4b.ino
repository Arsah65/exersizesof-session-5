int e=1, t=0, d, s,k,l=6;

void setup() {
  // put your setup code here, to run once:
  pinMode(t, OUTPUT);
  pinMode(e, INPUT);
 pinMode(l, OUTPUT);
 Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(t, LOW);
  delay(2);
  digitalWrite(t, HIGH);
  delay(10);
  digitalWrite(t, LOW);
  d = pulseIn(e, HIGH);
  s = (d / 2) * 0.0343;
  if ( s>=4&&s<=30){
    k= map(s,4,30,0,255);
  analogWrite(l,k);
  Serial.println(s);
  delay(500);
  }
  else {
    digitalWrite(l,LOW);
  }
}