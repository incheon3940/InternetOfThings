#define led_g 8
#define led_r 7
#define TRIG 13
#define ECHO 12

void setup()
{
  Serial.begin(9600);
  pinMode(led_g, OUTPUT);
  pinMode(led_r, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop()
{
  long duration,distance;
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO,HIGH);

  distance = duration / 58.2;

   if(distance>=100)
  {
    digitalWrite(led_r, HIGH);
    digitalWrite(led_g, LOW);
  }
  else
  {
    digitalWrite(led_g, HIGH);
    digitalWrite(led_r, LOW);
  }

  Serial.println(duration);
  Serial.print("\nDIstance : ");
  Serial.print(distance);
  Serial.println(" Cm");
  
  delay(1000);
}

