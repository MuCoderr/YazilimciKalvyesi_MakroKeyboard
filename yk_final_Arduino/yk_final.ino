#include "TRKeyboard.h"

int key;
String shortCut1, shortCut2,shortCut3,shortCut4,shortCut5,shortCut6,shortCut7,shortCut8,shortCut9,shortCut10,shortCut11,shortCut12;

void setup() {
  TRKeyboard.begin(); 
  
  pinMode(2, INPUT_PULLUP);  // 1. tuş
  pinMode(3, INPUT_PULLUP);  // 2. tuş
  pinMode(4, INPUT_PULLUP);  // 3. tuş
  pinMode(5, INPUT_PULLUP);  // 4. tuş
  pinMode(6, INPUT_PULLUP);  // 5. tuş
  pinMode(7, INPUT_PULLUP);  // 6. tuş
  pinMode(8, INPUT_PULLUP);  // 7. tuş
  pinMode(9, INPUT_PULLUP);  // 8. tuş
  pinMode(10, INPUT_PULLUP); // 9. tuş
  pinMode(16, INPUT_PULLUP); // 10. tuş
  pinMode(14, INPUT_PULLUP); // 11. tuş
  pinMode(15, INPUT_PULLUP); // 12. tuş

  Serial.begin(9600);
}

void loop() {
  // seri portta okunacak bir mesaj olup olmadığı kontrol edilir.
  if (Serial.available() > 0){ 
    
    // seri porttan gelen mesaj alınır ve "message" değişkenine atanır. Bu değişken, gelen mesajı tutar.
    String message = Serial.readStringUntil('\n');
    
    // gelen mesajdaki tuş numarası ve kısayol metni arasındaki ayırıcı karakteri ("," karakteri) 
    // bulmak için "indexOf()" fonksiyonu kullanılır ve sonucu "separatorIndex" değişkenine atanır. 
    int separatorIndex = message.indexOf(","); 
    
    // Ayırıcı karakter bulunduysa ve mesajın uzunluğundan büyükse, "message.substring()" fonksiyonları kullanılarak 
    // tuş numarası ve kısayol metni ayrılır ve sırasıyla "keyNumber" ve "shortcut" değişkenlerine atanır.
    if (separatorIndex >= 0 && separatorIndex < message.length() - 1) 
    {
      int keyNumber = message.substring(0, separatorIndex).toInt();
      String shortcut = message.substring(separatorIndex + 1);
      handleShortcut(keyNumber, shortcut); // tuş numarası ve kısayol metni kullanılarak tanımlanan kısayol atanır.
    }
  }

   if (digitalRead(2) == LOW) {
    handleShortcut(1,shortCut1);
    while(digitalRead(2) == LOW);
   }
   if (digitalRead(3) == LOW) {
    handleShortcut(2,shortCut2);
    while(digitalRead(3) == LOW);
   }
   if (digitalRead(4) == LOW) {
    handleShortcut(3,shortCut3);
    while(digitalRead(4) == LOW);
   }
   if (digitalRead(5) == LOW) {
    handleShortcut(4,shortCut4);
    while(digitalRead(5) == LOW);
   }
   if (digitalRead(6) == LOW) {
    handleShortcut(5,shortCut5);
    while(digitalRead(6) == LOW);
   }
   if (digitalRead(7) == LOW) {
    handleShortcut(6,shortCut6);
    while(digitalRead(7) == LOW);
   }
   if (digitalRead(8) == LOW) {
    handleShortcut(7,shortCut7);
    while(digitalRead(8) == LOW);
   }
   if (digitalRead(9) == LOW) {
    handleShortcut(8,shortCut8);
    while(digitalRead(9) == LOW);
   }
   if (digitalRead(10) == LOW) {
    handleShortcut(9,shortCut9);
    while(digitalRead(10) == LOW);
   }
   if (digitalRead(16) == LOW) {
    handleShortcut(10,shortCut10);
    while(digitalRead(16) == LOW);
   }
   if (digitalRead(14) == LOW) {
    handleShortcut(11,shortCut11);
    while(digitalRead(14) == LOW);
   }
   if (digitalRead(15) == LOW) {
    handleShortcut(12,shortCut12);
    while(digitalRead(15) == LOW);
   }
   
}

void handleShortcut(int keyNumber, String shortcut) {
// 1.Tuş Atamaları
  if (keyNumber == 1 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut1 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 1 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut1 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 1 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut1 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 1 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut1 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 1 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut1 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 1 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut1 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 1 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut1 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 1 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut1 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 1 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut1 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 1 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut1 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 1 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut1 = "alt+1";
    alt_1();
  }
  if (keyNumber == 1 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut1 = "alt+2";
    alt_2();
  }
  if (keyNumber == 1 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut1 = "alt+3";
    alt_3();
  }
  if (keyNumber == 1 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut1 = "alt+4";
    alt_4();
  }
  if (keyNumber == 1 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut1 = "alt+a";
    alt_a();
  }
  if (keyNumber == 1 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut1 = "alt+c";
    alt_c();
  }
  if (keyNumber == 1 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut1 = "alt+s";
    alt_s();
  }
  if (keyNumber == 1 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut1 = "alt+v";
    alt_v();
  }
  if (keyNumber == 1 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut1 = "alt+x";
    alt_x();
  }
  if (keyNumber == 1 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut1 = "alt+z";
    alt_z();
  }
  if (keyNumber == 1 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut1 = "shift+1";
    shift_1();
  }
  if (keyNumber == 1 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut1 = "shift+2";
    shift_2();
  }
  if (keyNumber == 1 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut1 = "shift+3";
    shift_3();
  }
  if (keyNumber == 1 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut1 = "shift+4";
    shift_4();
  }
  if (keyNumber == 1 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut1 = "shift+a";
    shift_a();
  }
  if (keyNumber == 1 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut1 = "shift+c";
    shift_c();
  }
  if (keyNumber == 1 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut1 = "shift+s";
    shift_s();
  }
  if (keyNumber == 1 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut1 = "shift+v";
    shift_v();
  }
  if (keyNumber == 1 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut1 = "shift+x";
    shift_x();
  }
  if (keyNumber == 1 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut1 = "shift+z";
    shift_z();
  }
  if (keyNumber == 1 && shortcut == "if") { // if bloğu kısayolu için
    shortCut1 = "if";
    ifblogu();
  }
  if (keyNumber == 1 && shortcut == "do") { // do bloğu kısayolu için
    shortCut1 = "do";
    doblogu();
  }
  if (keyNumber == 1 && shortcut == "while") { // while bloğu kısayolu için
    shortCut1 = "while";
    whileblogu();
  }
  if (keyNumber == 1 && shortcut == "deu") { // deu kısayolu için
    shortCut1 = "deu";
    deu();
  }
  if (keyNumber == 1 && shortcut == "debis") { // debis kısayolu için
    shortCut1 = "debis";
    debis();
  }
  if (keyNumber == 1 && shortcut == "sakai") { // sakai kısayolu için
    shortCut1 = "sakai";
    sakai();
  }
  if (keyNumber == 1 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut1 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 1 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut1 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 1 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut1 = "vs-open";
    vs_open();
  }
  
// 2.Tuş Atamaları
  if (keyNumber == 2 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut2 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 2 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut2 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 2 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut2 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 2 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut2 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 2 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut2 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 2 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut2 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 2 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut2 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 2 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut2 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 2 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut2 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 2 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut2 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 2 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut2 = "alt+1";
    alt_1();
  }
  if (keyNumber == 2 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut2 = "alt+2";
    alt_2();
  }
  if (keyNumber == 2 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut2 = "alt+3";
    alt_3();
  }
  if (keyNumber == 2 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut2 = "alt+4";
    alt_4();
  }
  if (keyNumber == 2 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut2 = "alt+a";
    alt_a();
  }
  if (keyNumber == 2 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut2 = "alt+c";
    alt_c();
  }
  if (keyNumber == 2 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut2 = "alt+s";
    alt_s();
  }
  if (keyNumber == 2 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut2 = "alt+v";
    alt_v();
  }
  if (keyNumber == 2 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut2 = "alt+x";
    alt_x();
  }
  if (keyNumber == 2 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut2 = "alt+z";
    alt_z();
  }
  if (keyNumber == 2 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut2 = "shift+1";
    shift_1();
  }
  if (keyNumber == 2 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut2 = "shift+2";
    shift_2();
  }
  if (keyNumber == 2 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut2 = "shift+3";
    shift_3();
  }
  if (keyNumber == 2 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut2 = "shift+4";
    shift_4();
  }
  if (keyNumber == 2 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut2 = "shift+a";
    shift_a();
  }
  if (keyNumber == 2 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut2 = "shift+c";
    shift_c();
  }
  if (keyNumber == 2 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut2 = "shift+s";
    shift_s();
  }
  if (keyNumber == 2 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut2 = "shift+v";
    shift_v();
  }
  if (keyNumber == 2 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut2 = "shift+x";
    shift_x();
  }
  if (keyNumber == 2 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut2 = "shift+z";
    shift_z();
  }
  if (keyNumber == 2 && shortcut == "if") { // if bloğu kısayolu için
    shortCut2 = "if";
    ifblogu();
  }
  if (keyNumber == 2 && shortcut == "do") { // do bloğu kısayolu için
    shortCut2 = "do";
    doblogu();
  }
  if (keyNumber == 2 && shortcut == "while") { // while bloğu kısayolu için
    shortCut2 = "while";
    whileblogu();
  }
  if (keyNumber == 2 && shortcut == "deu") { // deu kısayolu için
    shortCut2 = "deu";
    deu();
  }
  if (keyNumber == 2 && shortcut == "debis") { // debis kısayolu için
    shortCut2 = "debis";
    debis();
  }
  if (keyNumber == 2 && shortcut == "sakai") { // sakai kısayolu için
    shortCut2 = "sakai";
    sakai();
  }
  if (keyNumber == 2 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut2 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 2 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut2 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 2 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut2 = "vs-open";
    vs_open();
  }
  
// 3.Tuş Atamaları
  if (keyNumber == 3 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut3 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 3 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut3 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 3 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut3 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 3 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut3 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 3 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut3 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 3 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut3 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 3 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut3 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 3 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut3 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 3 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut3 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 3 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut3 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 3 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut3 = "alt+1";
    alt_1();
  }
  if (keyNumber == 3 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut3 = "alt+2";
    alt_2();
  }
  if (keyNumber == 3 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut3 = "alt+3";
    alt_3();
  }
  if (keyNumber == 3 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut3 = "alt+4";
    alt_4();
  }
  if (keyNumber == 3 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut3 = "alt+a";
    alt_a();
  }
  if (keyNumber == 3 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut3 = "alt+c";
    alt_c();
  }
  if (keyNumber == 3 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut3 = "alt+s";
    alt_s();
  }
  if (keyNumber == 3 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut3 = "alt+v";
    alt_v();
  }
  if (keyNumber == 3 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut3 = "alt+x";
    alt_x();
  }
  if (keyNumber == 3 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut3 = "alt+z";
    alt_z();
  }
  if (keyNumber == 3 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut3 = "shift+1";
    shift_1();
  }
  if (keyNumber == 3 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut3 = "shift+2";
    shift_2();
  }
  if (keyNumber == 3 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut3 = "shift+3";
    shift_3();
  }
  if (keyNumber == 3 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut3 = "shift+4";
    shift_4();
  }
  if (keyNumber == 3 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut3 = "shift+a";
    shift_a();
  }
  if (keyNumber == 3 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut3 = "shift+c";
    shift_c();
  }
  if (keyNumber == 3 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut3 = "shift+s";
    shift_s();
  }
  if (keyNumber == 3 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut3 = "shift+v";
    shift_v();
  }
  if (keyNumber == 3 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut3 = "shift+x";
    shift_x();
  }
  if (keyNumber == 3 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut3 = "shift+z";
    shift_z();
  }
  if (keyNumber == 3 && shortcut == "if") { // if bloğu kısayolu için
    shortCut3 = "if";
    ifblogu();
  }
  if (keyNumber == 3 && shortcut == "do") { // do bloğu kısayolu için
    shortCut3 = "do";
    doblogu();
  }
  if (keyNumber == 3 && shortcut == "while") { // while bloğu kısayolu için
    shortCut3 = "while";
    whileblogu();
  }
  if (keyNumber == 3 && shortcut == "deu") { // deu kısayolu için
    shortCut3 = "deu";
    deu();
  }
  if (keyNumber == 3 && shortcut == "debis") { // debis kısayolu için
    shortCut3 = "debis";
    debis();
  }
  if (keyNumber == 3 && shortcut == "sakai") { // sakai kısayolu için
    shortCut3 = "sakai";
    sakai();
  }
  if (keyNumber == 3 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut3 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 3 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut3 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 3 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut3 = "vs-open";
    vs_open();
  }
  
// 4.Tuş Atamaları
  if (keyNumber == 4 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut4 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 4 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut4 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 4 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut4 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 4 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut4 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 4 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut4 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 4 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut4 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 4 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut4 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 4 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut4 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 4 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut4 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 4 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut4 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 4 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut4 = "alt+1";
    alt_1();
  }
  if (keyNumber == 4 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut4 = "alt+2";
    alt_2();
  }
  if (keyNumber == 4 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut4 = "alt+3";
    alt_3();
  }
  if (keyNumber == 4 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut4 = "alt+4";
    alt_4();
  }
  if (keyNumber == 4 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut4 = "alt+a";
    alt_a();
  }
  if (keyNumber == 4 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut4 = "alt+c";
    alt_c();
  }
  if (keyNumber == 4 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut4 = "alt+s";
    alt_s();
  }
  if (keyNumber == 4 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut4 = "alt+v";
    alt_v();
  }
  if (keyNumber == 4 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut4 = "alt+x";
    alt_x();
  }
  if (keyNumber == 4 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut4 = "alt+z";
    alt_z();
  }
  if (keyNumber == 4 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut4 = "shift+1";
    shift_1();
  }
  if (keyNumber == 4 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut4 = "shift+2";
    shift_2();
  }
  if (keyNumber == 4 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut4 = "shift+3";
    shift_3();
  }
  if (keyNumber == 4 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut4 = "shift+4";
    shift_4();
  }
  if (keyNumber == 4 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut4 = "shift+a";
    shift_a();
  }
  if (keyNumber == 4 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut4 = "shift+c";
    shift_c();
  }
  if (keyNumber == 4 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut4 = "shift+s";
    shift_s();
  }
  if (keyNumber == 4 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut4 = "shift+v";
    shift_v();
  }
  if (keyNumber == 4 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut4 = "shift+x";
    shift_x();
  }
  if (keyNumber == 4 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut4 = "shift+z";
    shift_z();
  }
  if (keyNumber == 4 && shortcut == "if") { // if bloğu kısayolu için
    shortCut4 = "if";
    ifblogu();
  }
  if (keyNumber == 4 && shortcut == "do") { // do bloğu kısayolu için
    shortCut4 = "do";
    doblogu();
  }
  if (keyNumber == 4 && shortcut == "while") { // while bloğu kısayolu için
    shortCut4 = "while";
    whileblogu();
  }
  if (keyNumber == 4 && shortcut == "deu") { // deu kısayolu için
    shortCut4 = "deu";
    deu();
  }
  if (keyNumber == 4 && shortcut == "debis") { // debis kısayolu için
    shortCut4 = "debis";
    debis();
  }
  if (keyNumber == 4 && shortcut == "sakai") { // sakai kısayolu için
    shortCut4 = "sakai";
    sakai();
  }
  if (keyNumber == 4 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut4 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 4 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut4 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 4 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut4 = "vs-open";
    vs_open();
  }
  
// 5.Tuş Atamaları
  if (keyNumber == 5 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut5 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 5 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut5 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 5 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut5 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 5 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut5 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 5 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut5 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 5 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut5 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 5 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut5 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 5 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut5 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 5 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut5 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 5 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut5 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 5 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut5 = "alt+1";
    alt_1();
  }
  if (keyNumber == 5 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut5 = "alt+2";
    alt_2();
  }
  if (keyNumber == 5 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut5 = "alt+3";
    alt_3();
  }
  if (keyNumber == 5 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut5 = "alt+4";
    alt_4();
  }
  if (keyNumber == 5 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut5 = "alt+a";
    alt_a();
  }
  if (keyNumber == 5 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut5 = "alt+c";
    alt_c();
  }
  if (keyNumber == 5 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut5 = "alt+s";
    alt_s();
  }
  if (keyNumber == 5 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut5 = "alt+v";
    alt_v();
  }
  if (keyNumber == 5 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut5 = "alt+x";
    alt_x();
  }
  if (keyNumber == 5 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut5 = "alt+z";
    alt_z();
  }
  if (keyNumber == 5 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut5 = "shift+1";
    shift_1();
  }
  if (keyNumber == 5 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut5 = "shift+2";
    shift_2();
  }
  if (keyNumber == 5 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut5 = "shift+3";
    shift_3();
  }
  if (keyNumber == 5 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut5 = "shift+4";
    shift_4();
  }
  if (keyNumber == 5 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut5 = "shift+a";
    shift_a();
  }
  if (keyNumber == 1 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut1 = "shift+c";
    shift_c();
  }
  if (keyNumber == 5 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut5 = "shift+s";
    shift_s();
  }
  if (keyNumber == 5 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut5 = "shift+v";
    shift_v();
  }
  if (keyNumber == 5 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut5 = "shift+x";
    shift_x();
  }
  if (keyNumber == 5 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut5 = "shift+z";
    shift_z();
  }
  if (keyNumber == 5 && shortcut == "if") { // if bloğu kısayolu için
    shortCut5 = "if";
    ifblogu();
  }
  if (keyNumber == 5 && shortcut == "do") { // do bloğu kısayolu için
    shortCut5 = "do";
    doblogu();
  }
  if (keyNumber == 5 && shortcut == "while") { // while bloğu kısayolu için
    shortCut5 = "while";
    whileblogu();
  }
  if (keyNumber == 5 && shortcut == "deu") { // deu kısayolu için
    shortCut5 = "deu";
    deu();
  }
  if (keyNumber == 5 && shortcut == "debis") { // debis kısayolu için
    shortCut5 = "debis";
    debis();
  }
  if (keyNumber == 5 && shortcut == "sakai") { // sakai kısayolu için
    shortCut5 = "sakai";
    sakai();
  }
  if (keyNumber == 5 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut5 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 5 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut5 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 5 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut5 = "vs-open";
    vs_open();
  }
  
// 6.Tuş Atamaları
  if (keyNumber == 6 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut6 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 6 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut6 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 6 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut6 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 6 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut6 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 6 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut6 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 6 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut6 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 6 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut6 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 6 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut6 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 6 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut6 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 6 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut6 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 6 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut6 = "alt+1";
    alt_1();
  }
  if (keyNumber == 6 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut6 = "alt+2";
    alt_2();
  }
  if (keyNumber == 6 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut6 = "alt+3";
    alt_3();
  }
  if (keyNumber == 6 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut6 = "alt+4";
    alt_4();
  }
  if (keyNumber == 6 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut6 = "alt+a";
    alt_a();
  }
  if (keyNumber == 6 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut6 = "alt+c";
    alt_c();
  }
  if (keyNumber == 6 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut6 = "alt+s";
    alt_s();
  }
  if (keyNumber == 6 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut6 = "alt+v";
    alt_v();
  }
  if (keyNumber == 6 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut6 = "alt+x";
    alt_x();
  }
  if (keyNumber == 6 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut6 = "alt+z";
    alt_z();
  }
  if (keyNumber == 6 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut6 = "shift+1";
    shift_1();
  }
  if (keyNumber == 6 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut6 = "shift+2";
    shift_2();
  }
  if (keyNumber == 6 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut6 = "shift+3";
    shift_3();
  }
  if (keyNumber == 6 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut6 = "shift+4";
    shift_4();
  }
  if (keyNumber == 2 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut2 = "shift+a";
    shift_a();
  }
  if (keyNumber == 6 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut6 = "shift+c";
    shift_c();
  }
  if (keyNumber == 6 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut6 = "shift+s";
    shift_s();
  }
  if (keyNumber == 6 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut6 = "shift+v";
    shift_v();
  }
  if (keyNumber == 6 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut6 = "shift+x";
    shift_x();
  }
  if (keyNumber == 6 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut6 = "shift+z";
    shift_z();
  }
  if (keyNumber == 6 && shortcut == "if") { // if bloğu kısayolu için
    shortCut6 = "if";
    ifblogu();
  }
  if (keyNumber == 6 && shortcut == "do") { // do bloğu kısayolu için
    shortCut6 = "do";
    doblogu();
  }
  if (keyNumber == 6 && shortcut == "while") { // while bloğu kısayolu için
    shortCut6 = "while";
    whileblogu();
  }
  if (keyNumber == 6 && shortcut == "deu") { // deu kısayolu için
    shortCut6 = "deu";
    deu();
  }
  if (keyNumber == 6 && shortcut == "debis") { // debis kısayolu için
    shortCut6 = "debis";
    debis();
  }
  if (keyNumber == 6 && shortcut == "sakai") { // sakai kısayolu için
    shortCut6 = "sakai";
    sakai();
  }
  if (keyNumber == 6 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut6 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 6 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut6 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 6 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut6 = "vs-open";
    vs_open();
  }
  
// 7.Tuş Atamaları
  if (keyNumber == 7 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut7 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 7 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut7 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 7 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut7 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 7 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut7 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 7 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut7 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 7 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut7 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 7 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut7 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 7 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut7 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 7 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut7 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 7 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut7 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 7 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut7 = "alt+1";
    alt_1();
  }
  if (keyNumber == 7 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut7 = "alt+2";
    alt_2();
  }
  if (keyNumber == 7 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut7 = "alt+3";
    alt_3();
  }
  if (keyNumber == 7 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut7 = "alt+4";
    alt_4();
  }
  if (keyNumber == 7 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut7 = "alt+a";
    alt_a();
  }
  if (keyNumber == 7 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut7 = "alt+c";
    alt_c();
  }
  if (keyNumber == 7 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut7 = "alt+s";
    alt_s();
  }
  if (keyNumber == 7 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut7 = "alt+v";
    alt_v();
  }
  if (keyNumber == 7 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut7 = "alt+x";
    alt_x();
  }
  if (keyNumber == 7 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut7 = "alt+z";
    alt_z();
  }
  if (keyNumber == 7 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut7 = "shift+1";
    shift_1();
  }
  if (keyNumber == 7 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut7 = "shift+2";
    shift_2();
  }
  if (keyNumber == 7 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut7 = "shift+3";
    shift_3();
  }
  if (keyNumber == 7 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut7 = "shift+4";
    shift_4();
  }
  if (keyNumber == 7 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut7 = "shift+a";
    shift_a();
  }
  if (keyNumber == 7 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut7 = "shift+c";
    shift_c();
  }
  if (keyNumber == 7 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut7 = "shift+s";
    shift_s();
  }
  if (keyNumber == 7 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut7 = "shift+v";
    shift_v();
  }
  if (keyNumber == 7 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut7 = "shift+x";
    shift_x();
  }
  if (keyNumber == 7 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut7 = "shift+z";
    shift_z();
  }
  if (keyNumber == 7 && shortcut == "if") { // if bloğu kısayolu için
    shortCut7 = "if";
    ifblogu();
  }
  if (keyNumber == 7 && shortcut == "do") { // do bloğu kısayolu için
    shortCut7 = "do";
    doblogu();
  }
  if (keyNumber == 7 && shortcut == "while") { // while bloğu kısayolu için
    shortCut7 = "while";
    whileblogu();
  }
  if (keyNumber == 7 && shortcut == "deu") { // deu kısayolu için
    shortCut7 = "deu";
    deu();
  }
  if (keyNumber == 7 && shortcut == "debis") { // debis kısayolu için
    shortCut7 = "debis";
    debis();
  }
  if (keyNumber == 7 && shortcut == "sakai") { // sakai kısayolu için
    shortCut7 = "sakai";
    sakai();
  }
  if (keyNumber == 7 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut7 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 7 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut7 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 7 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut7 = "vs-open";
    vs_open();
  }
  
// 8.Tuş Atamaları
  if (keyNumber == 8 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut8 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 8 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut8 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 8 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut8 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 8 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut8 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 8 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut8 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 8 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut8 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 8 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut8 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 4 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut8 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 4 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut4 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 8 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut8 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 8 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut8 = "alt+1";
    alt_1();
  }
  if (keyNumber == 8 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut8 = "alt+2";
    alt_2();
  }
  if (keyNumber == 8 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut8 = "alt+3";
    alt_3();
  }
  if (keyNumber == 8 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut8 = "alt+4";
    alt_4();
  }
  if (keyNumber == 8 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut8 = "alt+a";
    alt_a();
  }
  if (keyNumber == 8 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut8 = "alt+c";
    alt_c();
  }
  if (keyNumber == 8 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut8 = "alt+s";
    alt_s();
  }
  if (keyNumber == 8 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut8 = "alt+v";
    alt_v();
  }
  if (keyNumber == 8 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut8 = "alt+x";
    alt_x();
  }
  if (keyNumber == 8 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut8 = "alt+z";
    alt_z();
  }
  if (keyNumber == 8 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut8 = "shift+1";
    shift_1();
  }
  if (keyNumber == 8 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut8 = "shift+2";
    shift_2();
  }
  if (keyNumber == 8 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut8 = "shift+3";
    shift_3();
  }
  if (keyNumber == 8 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut8 = "shift+4";
    shift_4();
  }
  if (keyNumber == 8 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut8 = "shift+a";
    shift_a();
  }
  if (keyNumber == 8 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut8 = "shift+c";
    shift_c();
  }
  if (keyNumber == 8 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut8 = "shift+s";
    shift_s();
  }
  if (keyNumber == 8 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut8 = "shift+v";
    shift_v();
  }
  if (keyNumber == 8 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut8 = "shift+x";
    shift_x();
  }
  if (keyNumber == 8 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut8 = "shift+z";
    shift_z();
  }
  if (keyNumber == 8 && shortcut == "if") { // if bloğu kısayolu için
    shortCut8 = "if";
    ifblogu();
  }
  if (keyNumber == 8 && shortcut == "do") { // do bloğu kısayolu için
    shortCut8 = "do";
    doblogu();
  }
  if (keyNumber == 8 && shortcut == "while") { // while bloğu kısayolu için
    shortCut8 = "while";
    whileblogu();
  }
  if (keyNumber == 8 && shortcut == "deu") { // deu kısayolu için
    shortCut8 = "deu";
    deu();
  }
  if (keyNumber == 8 && shortcut == "debis") { // debis kısayolu için
    shortCut8 = "debis";
    debis();
  }
  if (keyNumber == 8 && shortcut == "sakai") { // sakai kısayolu için
    shortCut8 = "sakai";
    sakai();
  }
  if (keyNumber == 8 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut8 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 8 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut8 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 8 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut8 = "vs-open";
    vs_open();
  }
  
// 9.Tuş Atamaları
  if (keyNumber == 9 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut9 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 9 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut9 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 9 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut9 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 9 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut9 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 9 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut9 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 9 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut9 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 9 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut9 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 9 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut9 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 9 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut9 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 9 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut9 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 9 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut9 = "alt+1";
    alt_1();
  }
  if (keyNumber == 9 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut9 = "alt+2";
    alt_2();
  }
  if (keyNumber == 9 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut9 = "alt+3";
    alt_3();
  }
  if (keyNumber == 9 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut9 = "alt+4";
    alt_4();
  }
  if (keyNumber == 9 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut9 = "alt+a";
    alt_a();
  }
  if (keyNumber == 9 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut9 = "alt+c";
    alt_c();
  }
  if (keyNumber == 9 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut9 = "alt+s";
    alt_s();
  }
  if (keyNumber == 9 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut9 = "alt+v";
    alt_v();
  }
  if (keyNumber == 9 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut9 = "alt+x";
    alt_x();
  }
  if (keyNumber == 9 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut9 = "alt+z";
    alt_z();
  }
  if (keyNumber == 9 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut9 = "shift+1";
    shift_1();
  }
  if (keyNumber == 9 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut9 = "shift+2";
    shift_2();
  }
  if (keyNumber == 9 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut9 = "shift+3";
    shift_3();
  }
  if (keyNumber == 9 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut9 = "shift+4";
    shift_4();
  }
  if (keyNumber == 9 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut9 = "shift+a";
    shift_a();
  }
  if (keyNumber == 9 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut9 = "shift+c";
    shift_c();
  }
  if (keyNumber == 9 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut9 = "shift+s";
    shift_s();
  }
  if (keyNumber == 9 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut9 = "shift+v";
    shift_v();
  }
  if (keyNumber == 9 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut9 = "shift+x";
    shift_x();
  }
  if (keyNumber == 9 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut9 = "shift+z";
    shift_z();
  }
  if (keyNumber == 9 && shortcut == "if") { // if bloğu kısayolu için
    shortCut9 = "if";
    ifblogu();
  }
  if (keyNumber == 9 && shortcut == "do") { // do bloğu kısayolu için
    shortCut9 = "do";
    doblogu();
  }
  if (keyNumber == 9 && shortcut == "while") { // while bloğu kısayolu için
    shortCut9 = "while";
    whileblogu();
  }
  if (keyNumber == 9 && shortcut == "deu") { // deu kısayolu için
    shortCut9 = "deu";
    deu();
  }
  if (keyNumber == 9 && shortcut == "debis") { // debis kısayolu için
    shortCut9 = "debis";
    debis();
  }
  if (keyNumber == 9 && shortcut == "sakai") { // sakai kısayolu için
    shortCut9 = "sakai";
    sakai();
  }
  if (keyNumber == 9 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut9 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 9 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut9 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 9 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut9 = "vs-open";
    vs_open();
  }
  
// 10.Tuş Atamaları
  if (keyNumber == 10 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut10 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 10 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut10 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 10 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut10 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 10 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut10 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 10 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut10 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 10 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut10 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 10 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut10 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 10 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut10 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 10 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut10 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 10 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut10 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 10 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut10 = "alt+1";
    alt_1();
  }
  if (keyNumber == 10 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut10 = "alt+2";
    alt_2();
  }
  if (keyNumber == 10 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut10 = "alt+3";
    alt_3();
  }
  if (keyNumber == 10 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut10 = "alt+4";
    alt_4();
  }
  if (keyNumber == 10 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut10 = "alt+a";
    alt_a();
  }
  if (keyNumber == 10 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut10 = "alt+c";
    alt_c();
  }
  if (keyNumber == 10 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut10 = "alt+s";
    alt_s();
  }
  if (keyNumber == 10 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut10 = "alt+v";
    alt_v();
  }
  if (keyNumber == 10 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut10 = "alt+x";
    alt_x();
  }
  if (keyNumber == 10 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut10 = "alt+z";
    alt_z();
  }
  if (keyNumber == 10 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut10 = "shift+1";
    shift_1();
  }
  if (keyNumber == 10 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut10 = "shift+2";
    shift_2();
  }
  if (keyNumber == 10 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut10 = "shift+3";
    shift_3();
  }
  if (keyNumber == 10 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut10 = "shift+4";
    shift_4();
  }
  if (keyNumber == 10 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut10 = "shift+a";
    shift_a();
  }
  if (keyNumber == 10 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut10 = "shift+c";
    shift_c();
  }
  if (keyNumber == 10 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut10 = "shift+s";
    shift_s();
  }
  if (keyNumber == 10 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut10 = "shift+v";
    shift_v();
  }
  if (keyNumber == 10 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut10 = "shift+x";
    shift_x();
  }
  if (keyNumber == 10 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut10 = "shift+z";
    shift_z();
  }
  if (keyNumber == 10 && shortcut == "if") { // if bloğu kısayolu için
    shortCut10 = "if";
    ifblogu();
  }
  if (keyNumber == 10 && shortcut == "do") { // do bloğu kısayolu için
    shortCut10 = "do";
    doblogu();
  }
  if (keyNumber == 10 && shortcut == "while") { // while bloğu kısayolu için
    shortCut10 = "while";
    whileblogu();
  }
  if (keyNumber == 10 && shortcut == "deu") { // deu kısayolu için
    shortCut10 = "deu";
    deu();
  }
  if (keyNumber == 10 && shortcut == "debis") { // debis kısayolu için
    shortCut10 = "debis";
    debis();
  }
  if (keyNumber == 10 && shortcut == "sakai") { // sakai kısayolu için
    shortCut10 = "sakai";
    sakai();
  }
  if (keyNumber == 10 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut10 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 10 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut10 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 10 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut10 = "vs-open";
    vs_open();
  }
  
// 11.Tuş Atamaları
  if (keyNumber == 11 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut11 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 11 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut11 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 11 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut11 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 11 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut11 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 11 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut11 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 11 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut11 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 11 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut11 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 11 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut11 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 11 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut11 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 11 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut11 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 11 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut11 = "alt+1";
    alt_1();
  }
  if (keyNumber == 11 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut11 = "alt+2";
    alt_2();
  }
  if (keyNumber == 11 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut11 = "alt+3";
    alt_3();
  }
  if (keyNumber == 11 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut11 = "alt+4";
    alt_4();
  }
  if (keyNumber == 11 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut11 = "alt+a";
    alt_a();
  }
  if (keyNumber == 11 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut11 = "alt+c";
    alt_c();
  }
  if (keyNumber == 11 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut11 = "alt+s";
    alt_s();
  }
  if (keyNumber == 11 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut11 = "alt+v";
    alt_v();
  }
  if (keyNumber == 11 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut11 = "alt+x";
    alt_x();
  }
  if (keyNumber == 11 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut11 = "alt+z";
    alt_z();
  }
  if (keyNumber == 11 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut11 = "shift+1";
    shift_1();
  }
  if (keyNumber == 11 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut11 = "shift+2";
    shift_2();
  }
  if (keyNumber == 11 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut11 = "shift+3";
    shift_3();
  }
  if (keyNumber == 11 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut11 = "shift+4";
    shift_4();
  }
  if (keyNumber == 11 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut11 = "shift+a";
    shift_a();
  }
  if (keyNumber == 11 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut11 = "shift+c";
    shift_c();
  }
  if (keyNumber == 11 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut11 = "shift+s";
    shift_s();
  }
  if (keyNumber == 11 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut11 = "shift+v";
    shift_v();
  }
  if (keyNumber == 11 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut11 = "shift+x";
    shift_x();
  }
  if (keyNumber == 11 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut11 = "shift+z";
    shift_z();
  }
  if (keyNumber == 11 && shortcut == "if") { // if bloğu kısayolu için
    shortCut11 = "if";
    ifblogu();
  }
  if (keyNumber == 11 && shortcut == "do") { // do bloğu kısayolu için
    shortCut11 = "do";
    doblogu();
  }
  if (keyNumber == 11 && shortcut == "while") { // while bloğu kısayolu için
    shortCut11 = "while";
    whileblogu();
  }
  if (keyNumber == 11 && shortcut == "deu") { // deu kısayolu için
    shortCut11 = "deu";
    deu();
  }
  if (keyNumber == 11 && shortcut == "debis") { // debis kısayolu için
    shortCut11 = "debis";
    debis();
  }
  if (keyNumber == 11 && shortcut == "sakai") { // sakai kısayolu için
    shortCut11 = "sakai";
    sakai();
  }
  if (keyNumber == 11 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut11 = "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 11 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut11 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 11 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut11 = "vs-open";
    vs_open();
  }
  
// 12.Tuş Atamaları
  if (keyNumber == 12 && shortcut == "ctrl+1") { // Ctrl+1 kısayolu için
    shortCut12 = "ctrl+1";
    ctrl_1();
  }
  if (keyNumber == 12 && shortcut == "ctrl+2") { // Ctrl+2 kısayolu için
    shortCut12 = "ctrl+2";
    ctrl_2();
  }
  if (keyNumber == 12 && shortcut == "ctrl+3") { // Ctrl+3 kısayolu için
    shortCut12 = "ctrl+3";
    ctrl_3();
  }
  if (keyNumber == 12 && shortcut == "ctrl+4") { // Ctrl+4 kısayolu için
    shortCut12 = "ctrl+4";
    ctrl_4();
  }
  if (keyNumber == 12 && shortcut == "ctrl+a") { // Ctrl+a kısayolu için
    shortCut12 = "ctrl+a";
    ctrl_a();
  }
  if (keyNumber == 12 && shortcut == "ctrl+c") { // Ctrl+c kısayolu için
    shortCut12 = "ctrl+c";
    ctrl_c();
  }
  if (keyNumber == 12 && shortcut == "ctrl+s") { // Ctrl+s kısayolu için
    shortCut12 = "ctrl+s";
    ctrl_s();
  }
  if (keyNumber == 12 && shortcut == "ctrl+v") { // Ctrl+v kısayolu için
    shortCut12 = "ctrl+v";
    ctrl_v();
  }
  if (keyNumber == 12 && shortcut == "ctrl+x") { // Ctrl+x kısayolu için
    shortCut12 = "ctrl+x";
    ctrl_x();
  }
  if (keyNumber == 12 && shortcut == "ctrl+z") { // Ctrl+z kısayolu için
    shortCut12 = "ctrl+z";
    ctrl_z();
  }
  if (keyNumber == 12 && shortcut == "alt+1") { // alt+1 kısayolu için
    shortCut12 = "alt+1";
    alt_1();
  }
  if (keyNumber == 12 && shortcut == "alt+2") { // alt+2 kısayolu için
    shortCut12 = "alt+2";
    alt_2();
  }
  if (keyNumber == 12 && shortcut == "alt+3") { // alt+3 kısayolu için
    shortCut12 = "alt+3";
    alt_3();
  }
  if (keyNumber == 12 && shortcut == "alt+4") { // alt+4 kısayolu için
    shortCut12 = "alt+4";
    alt_4();
  }
  if (keyNumber == 12 && shortcut == "alt+a") { // alt+a kısayolu için
    shortCut12 = "alt+a";
    alt_a();
  }
  if (keyNumber == 12 && shortcut == "alt+c") { // alt+c kısayolu için
    shortCut12 = "alt+c";
    alt_c();
  }
  if (keyNumber == 12 && shortcut == "alt+s") { // alt+s kısayolu için
    shortCut12 = "alt+s";
    alt_s();
  }
  if (keyNumber == 12 && shortcut == "alt+v") { // alt+v kısayolu için
    shortCut12 = "alt+v";
    alt_v();
  }
  if (keyNumber == 12 && shortcut == "alt+x") { // alt+x kısayolu için
    shortCut12 = "alt+x";
    alt_x();
  }
  if (keyNumber == 12 && shortcut == "alt+z") { // alt+z kısayolu için
    shortCut12 = "alt+z";
    alt_z();
  }
  if (keyNumber == 12 && shortcut == "shift+1") { // shift+1 kısayolu için
    shortCut12 = "shift+1";
    shift_1();
  }
  if (keyNumber == 12 && shortcut == "shift+2") { // shift+2 kısayolu için
    shortCut12 = "shift+2";
    shift_2();
  }
  if (keyNumber == 12 && shortcut == "shift+3") { // shift+3 kısayolu için
    shortCut12 = "shift+3";
    shift_3();
  }
  if (keyNumber == 12 && shortcut == "shift+4") { // shift+4 kısayolu için
    shortCut12 = "shift+4";
    shift_4();
  }
  if (keyNumber == 12 && shortcut == "shift+a") { // shift+a kısayolu için
    shortCut12 = "shift+a";
    shift_a();
  }
  if (keyNumber == 12 && shortcut == "shift+c") { // shift+c kısayolu için
    shortCut12 = "shift+c";
    shift_c();
  }
  if (keyNumber == 12 && shortcut == "shift+s") { // shift+s kısayolu için
    shortCut12 = "shift+s";
    shift_s();
  }
  if (keyNumber == 12 && shortcut == "shift+v") { // shift+v kısayolu için
    shortCut12 = "shift+v";
    shift_v();
  }
  if (keyNumber == 12 && shortcut == "shift+x") { // shift+x kısayolu için
    shortCut12 = "shift+x";
    shift_x();
  }
  if (keyNumber == 12 && shortcut == "shift+z") { // shift+z kısayolu için
    shortCut12 = "shift+z";
    shift_z();
  }
  if (keyNumber == 12 && shortcut == "if") { // if bloğu kısayolu için
    shortCut12 = "if";
    ifblogu();
  }
  if (keyNumber == 12 && shortcut == "do") { // do bloğu kısayolu için
    shortCut12 = "do";
    doblogu();
  }
  if (keyNumber == 12 && shortcut == "while") { // while bloğu kısayolu için
    shortCut12 = "while";
    whileblogu();
  }
  if (keyNumber == 12 && shortcut == "deu") { // deu kısayolu için
    shortCut12 = "deu";
    deu();
  }
  if (keyNumber == 12 && shortcut == "debis") { // debis kısayolu için
    shortCut12 = "debis";
    debis();
  }
  if (keyNumber == 12 && shortcut == "sakai") { // sakai kısayolu için
    shortCut12 = "sakai";
    sakai();
  }
  if (keyNumber == 12 && shortcut == "ctrl+k+c") { // yorum satırı yapma kısayolu için
    shortCut12= "ctrl+k+c";
    ctrl_k_c();
  }
  if (keyNumber == 12 && shortcut == "shift+alt+f") { // kodu düzenleme kısayolu için
    shortCut12 = "shift+alt+f";
    shift_alt_f();
  }
  if (keyNumber == 12 && shortcut == "vs-open") { // vs açma kısayolu için
    shortCut12 = "vs-open";
    vs_open();
  }

}

void ctrl_1() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('1');
    TRKeyboard.releaseAll();
    delay(100);
  }
void ctrl_2() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('2');
    TRKeyboard.releaseAll();
    delay(100);
  }
void ctrl_3() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('3');
    TRKeyboard.releaseAll();
    delay(100);
  }
void ctrl_4() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('4');
    TRKeyboard.releaseAll();
    delay(100);
  }
void ctrl_a() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('a');
    TRKeyboard.releaseAll();
    delay(100);
  }
void ctrl_c() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('c');
    TRKeyboard.releaseAll();
    delay(100);
  }
void ctrl_s() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('s');
    TRKeyboard.releaseAll();
    delay(100);
  }
void ctrl_v() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('v');
    TRKeyboard.releaseAll();
    delay(100);
  }
void ctrl_x() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('x');
    TRKeyboard.releaseAll();
    delay(100);
  }
void ctrl_z() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('z');
    TRKeyboard.releaseAll();
    delay(100);
  }
void alt_1() {
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('1');
    TRKeyboard.releaseAll();
    delay(100);
  }
void alt_2() {
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('2');
    TRKeyboard.releaseAll();
    delay(100);
  }
void alt_3() {
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('3');
    TRKeyboard.releaseAll();
    delay(100);
  }
void alt_4() {
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('4');
    TRKeyboard.releaseAll();
    delay(100);
  }
void alt_a() {
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('a');
    TRKeyboard.releaseAll();
    delay(100);
  }
void alt_c() {
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('c');
    TRKeyboard.releaseAll();
    delay(100);
  }
void alt_s() {
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('s');
    TRKeyboard.releaseAll();
    delay(100);
  }
void alt_v() {
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('v');
    TRKeyboard.releaseAll();
    delay(100);
  }
void alt_x() {
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('x');
    TRKeyboard.releaseAll();
    delay(100);
  }
void alt_z() {
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('z');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_1() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.write('1');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_2() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.write('2');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_3() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.write('3');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_4() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.write('4');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_a() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.write('a');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_c() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.write('c');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_s() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.write('s');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_v() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.write('v');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_x() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.write('x');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_z() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.write('z');
    TRKeyboard.releaseAll();
    delay(100);
  }
void ifblogu() {
    TRKeyboard.println("if");
    TRKeyboard.press(KEY_TAB);
    TRKeyboard.press(KEY_TAB);
    TRKeyboard.releaseAll();
    delay(100);
  }
void doblogu() {
    TRKeyboard.println("do");
    TRKeyboard.press(KEY_TAB);
    TRKeyboard.press(KEY_TAB);
    TRKeyboard.releaseAll();
    delay(100);
  }
void whileblogu() {
    TRKeyboard.println("while");
    TRKeyboard.press(KEY_TAB);
    TRKeyboard.press(KEY_TAB);
    TRKeyboard.releaseAll();
    delay(100);
  }
void deu() {
    TRKeyboard.press(KEY_LEFT_GUI);
    TRKeyboard.write('r');
    TRKeyboard.releaseAll();
    delay(100);
    TRKeyboard.print("https://www.deu.edu.tr/");
    TRKeyboard.press(KEY_RETURN);
    TRKeyboard.releaseAll();
    delay(100);
  }
void debis() {
    TRKeyboard.press(KEY_LEFT_GUI);
    TRKeyboard.write('r');
    TRKeyboard.releaseAll();
    delay(100);
    TRKeyboard.print("https://debis.deu.edu.tr/");
    TRKeyboard.press(KEY_RETURN);
    TRKeyboard.releaseAll();
    delay(100);
  }
void sakai() {
    TRKeyboard.press(KEY_LEFT_GUI);
    TRKeyboard.write('r');
    TRKeyboard.releaseAll();
    delay(100);
    TRKeyboard.print("https://online.deu.edu.tr/");
    TRKeyboard.press(KEY_RETURN);
    TRKeyboard.releaseAll();
    delay(100);
  }
void ctrl_k_c() {
    TRKeyboard.press(KEY_LEFT_CTRL);
    TRKeyboard.write('k');
    TRKeyboard.write('c');
    TRKeyboard.releaseAll();
    delay(100);
  }
void shift_alt_f() {
    TRKeyboard.press(KEY_LEFT_SHIFT);
    TRKeyboard.press(KEY_LEFT_ALT);
    TRKeyboard.write('f');
    TRKeyboard.releaseAll();
    delay(100);
  }
void vs_open() {
    TRKeyboard.press(KEY_LEFT_GUI);
    TRKeyboard.write('s');
    TRKeyboard.releaseAll();
    delay(100);
    TRKeyboard.println("Visual Studio 2022");
    delay(1000);
    TRKeyboard.press(KEY_RETURN);
    TRKeyboard.releaseAll();
    delay(100);
  }
