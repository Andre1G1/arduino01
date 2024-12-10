int green = 1;
int BTN = 2;

void setup() {
  // Настраиваем пин зеленого светодиода как выход
  pinMode(green, OUTPUT);
  // Настраиваем пин кнопки как вход
  pinMode(BTN, INPUT);
}

void loop() {
  // Читаем состояние кнопки
  if (digitalRead(BTN) == LOW) {
    // Включаем зеленый светодиод
    digitalWrite(green, LOW);
  }
  if (digitalRead(BTN) == HIGH) {
    // Выключаем зеленый светодиод
    digitalWrite(green, HIGH);
  }
}