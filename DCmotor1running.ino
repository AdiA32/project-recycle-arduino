// pins and shit
bool rec = false;
int enA = 5;
int in1 = 6;
int in2 = 7;

void setup()
{
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}
void demoOne()
{
  if (rec){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    // set speed to 200 out of possible range 0~255
    analogWrite(enA, 200);
    delay(2000);
  } else {
    //other way
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    // set speed to 200 out of possible range 0~255
    analogWrite(enA, 200);
    delay(2000);
  }
}

void loop()
{
  demoOne();
  delay(1000);
}
