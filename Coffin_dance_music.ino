#define NOTE_C3  131
#define NOTE_CS3 138
#define NOTE_D3  147
#define NOTE_DS3 155
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  496
#define NOTE_C5  526
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define REST      0


// change this to make the song slower or faster
int tempo = 95;

// change this to whichever pin you want to use
int buzzer = 5;

// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
int melody[] = {

  NOTE_AS3,8, NOTE_AS3,8, NOTE_AS3,8, NOTE_AS3,8,
  NOTE_D4,8, NOTE_D4,8, NOTE_D4,8, NOTE_D4,8,
  NOTE_C4,8, NOTE_C4,8, NOTE_C4,8, NOTE_C4,8,
  NOTE_F4,8, NOTE_F4,8, NOTE_F4,8, NOTE_F4,8,
  NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8,
 
  NOTE_C4,8, NOTE_AS3,8, NOTE_A3,8, NOTE_F3,8, NOTE_G3,6,
  NOTE_G3,8, NOTE_D4,8, NOTE_C4,6,
  NOTE_AS3,6, NOTE_A3,6, NOTE_A3,8, NOTE_A3,8, NOTE_C4,6,
  NOTE_AS3,8, NOTE_A3,8, NOTE_G3,6,
  NOTE_G3,6, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_G3,6,
  
  NOTE_G3,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_G3,6,
  NOTE_G3,8, NOTE_D4,8, NOTE_C4,6,
  NOTE_AS3,6, NOTE_A3,6, NOTE_A3,8, NOTE_A3,8, NOTE_C4,6,
  NOTE_AS3,8, NOTE_A3,8, NOTE_G3,6,
  NOTE_G3,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_G3,6,
 
  NOTE_G3,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_G3,6,
  NOTE_G3,8, NOTE_D4,8, NOTE_C4,6,
  NOTE_AS3,6, NOTE_A3,6, NOTE_A3,8, NOTE_A3,8, NOTE_C4,6,
  NOTE_AS3,8, NOTE_A3,8, NOTE_G3,6,
  NOTE_G3,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_G3,6,
  
  NOTE_G3,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, 
  NOTE_AS3,8, NOTE_AS3,8, NOTE_AS3,8, NOTE_AS3,8,
  NOTE_D4,8, NOTE_D4,8, NOTE_D4,8, NOTE_D4,8,
  NOTE_C4,8, NOTE_C4,8, NOTE_C4,8, NOTE_C4,8,
  NOTE_F4,8, NOTE_F4,8, NOTE_F4,8, NOTE_F4,8,
  NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8,

  NOTE_C4,8, NOTE_AS3,8, NOTE_A3,8, NOTE_F3,8, NOTE_G3,6,
  NOTE_G3,8, NOTE_D4,8, NOTE_C4,6,
  NOTE_AS3,6, NOTE_A3,6, NOTE_A3,8, NOTE_A3,8, NOTE_C4,6,
  NOTE_AS3,8, NOTE_A3,8, NOTE_G3,6,
  NOTE_G3,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_G3,6,
  
  NOTE_G3,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_G3,6,
  NOTE_G3,8, NOTE_D4,8, NOTE_C4,6,
  NOTE_AS3,6, NOTE_A3,6, NOTE_A3,8, NOTE_A3,8, NOTE_C4,6,
  NOTE_AS3,8, NOTE_A3,8, NOTE_G3,6,
  NOTE_G3,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_G3,6,

  NOTE_G3,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8, NOTE_A4,8, NOTE_AS4,8,
  NOTE_AS3,8, NOTE_AS3,8, NOTE_AS3,8, NOTE_AS3,8,
  NOTE_D4,8, NOTE_D4,8, NOTE_D4,8, NOTE_D4,8,
  NOTE_C4,8, NOTE_C4,8, NOTE_C4,8, NOTE_C4,8,
  NOTE_F4,8, NOTE_F4,8, NOTE_F4,8, NOTE_F4,8,
  NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8, NOTE_G4,8,
};

int notes = sizeof(melody) / sizeof(melody[0]) / 2;
int wholenote = (60000 * 4) / tempo;
int divider = 0, noteDuration = 0;

void setup() {
  Serial.println(9600);
  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {
    divider = melody[thisNote + 1];
    if (divider > 0) 
    {noteDuration = (wholenote) / divider;} 
      else if (divider < 0) 
      {noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5;}
    tone(buzzer, melody[thisNote], noteDuration * 0.9);
    delay(noteDuration);
    noTone(buzzer);
  }
}

void loop() {
 
  // no need to repeat the melody.
}
