String str = "";   // 暫存輸入字串的變數  

void setup() {
  Serial.begin(9600);
  Serial.println("Ready.");
}

void loop() {
  while (Serial.available() > 0) {
    char val = Serial.read();

    if (val != '\n') {    // 若序列輸入字元不是 '\n'
      str += val;         // 把字元連結成字串
    } else {
      Serial.print("Input data: ");
      Serial.println(str.toFloat());   // 將字串轉換成浮點數字
      str = "";    // 清除字串
    }
  }
}
