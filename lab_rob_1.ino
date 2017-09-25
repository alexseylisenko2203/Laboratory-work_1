int StateSwitch = 0 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);//для виводу параметру на 3 цифровий вивід(зелений світлодіод)
  pinMode(4,OUTPUT);//для виводу параметру на 4 цифровий вивід(червоний світлодіод)
  pinMode(5,OUTPUT);//для виводу параметру на 5 цифровий вивід(червоний світлодіод)
  pinMode(2,INPUT); //для введення інформації з 2 цифрового виводу
}

void loop() {
  // put your main code here, to run repeatedly:
  StateSwitch = digitalRead(2);// зчитуємо інформацію з 2 цифрового виводу і присвоюємо цю інформацію змінній
  if (StateSwitch == LOW) { // якщо кнопка не натиснута, то ...
    digitalWrite(3, HIGH); // зелений світлодіод випромінює світлову енергію
    digitalWrite(4, LOW); // подається мала напруга і червоний діод майже не горить
    digitalWrite(5, LOW); // подається мала напруга і червоний діод майже не горить
  }
  else { // коли кнопка натиснута, то ...
    digitalWrite(3, LOW); // подається мала напруга і зелений діод майже не горить
    digitalWrite(4, LOW);// подається мала напруга і червоний діод майже не горить
    digitalWrite(5, HIGH);// червоний світлодіод випромінює світлову енергію

    delay(250); // робимо затримку на 1/4 секунди виконання програмного коду

    digitalWrite(4,HIGH); // червоний світлодіод випромінює світлову енергію
    digitalWrite(5,LOW); // подається мала напруга і зелений діод майже не горить
    delay(250);  // робимо затримку на 1/4 секунди виконання програмного коду
  }
} // переходимо на початок блоку loop 
