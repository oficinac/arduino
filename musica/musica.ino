
/************************************************
 * Programa: Interpretador de Partitura
 * Autor: Bruno Raniere
************************************************/


#define BPM                   150
#define DENOMINADOR_COMPASSO  4
#define QTD_NOTAS             468

float duracaoUnidadeTempo, cte;
int duracaoNota, i;

void setup() {
  duracaoUnidadeTempo = 60/(float)BPM;
  cte = duracaoUnidadeTempo*DENOMINADOR_COMPASSO;
}

void loop() {
  notaFreq();
  partitura();
  for (i=0; i<QTD_NOTAS; i++){
    duracaoNota =cte/tempos[i]*1000;
    tone(8, notas[i], duracaoNota*0.99);
    delay(duracaoNota);  
  }
  delay(5000);
}

void notaFreq(){
  /******************************************
 * frequencias de notas musicais
 *****************************************/

#define B0  31
#define C1  33
#define DB1 35
#define D1  37
#define EB1 39
#define E1  41
#define F1  44
#define GB1 46
#define G1  49
#define AB1 52
#define A1  55
#define BB1 58
#define B1  62
#define C2  65
#define DB2 69
#define D2  73
#define EB2 78
#define E2  82
#define F2  87
#define GB2 93
#define G2  98
#define AB2 104
#define A2  110
#define BB2 117
#define B2  123
#define C3  131
#define DB3 139
#define D3  147
#define EB3 156
#define E3  165
#define F3  175
#define GB3 185
#define G3  196
#define AB3 208
#define A3  220
#define BB3 233
#define B3  247
#define C4  262
#define DB4 277
#define D4  294
#define EB4 311
#define E4  330
#define F4  349
#define GB4 370
#define G4  392
#define AB4 415
#define A4  440
#define BB4 466
#define B4  494
#define C5  523
#define DB5 554
#define D5  587
#define EB5 622
#define E5  659
#define F5  698
#define GB5 740
#define G5  784
#define AB5 831
#define A5  880
#define BB5 932
#define B5  988
#define C6  1047
#define DB6 1109
#define D6  1175
#define EB6 1245
#define E6  1319
#define F6  1397
#define GB6 1480
#define G6  1568
#define AB6 1661
#define A6  1760
#define BB6 1865
#define B6  1976
#define C7  2093
#define DB7 2217
#define D7  2349
#define EB7 2489
#define E7  2637
#define F7  2794
#define GB7 2960
#define G7  3136
#define AB7 3322
#define A7  3520
#define BB7 3729
#define B7  3951
#define C8  4186
#define DB8 4435
#define D8  4699
#define EB8 4978
}

void partitura(){
  /******************************************
 * Top Gear Theme
 *****************************************/

 int notas[] ={ C4, EB4, G4, C5, EB5, G5, C6, EB6, G7, EB6, C6, G5, EB5, C5, G4, EB4,   // 1
                EB4, G4, BB4, EB5, G5, BB5, EB6, G6, BB7, G6, EB6, BB5, G5, EB5, BB4, G4, // 2
                BB3, D4, F4, BB4, D5, F5, BB5, D6, F7, D6, BB5, F5, D5, BB4, F4, D4,      // 3
                C4, EB4, G4, C5, EB5, G5, C6, EB6, G7, EB6, C6, G5, EB5, C5, G4, EB4,     // 4
                C4, EB4, G4, C5, EB5, G5, C6, EB6, G7, EB6, C6, G5, EB5, C5, G4, EB4,   // 1
                EB4, G4, BB4, EB5, G5, BB5, EB6, G6, BB7, G6, EB6, BB5, G5, EB5, BB4, G4, // 2
                BB3, D4, F4, BB4, D5, F5, BB5, D6, F7, D6, BB5, F5, D5, BB4, F4, D4,      // 3
                G5, EB5, D5, EB5,                                                          // 32
                C5, G4, C5, D5, EB5, EB5, D5, C5, BB4,                                    // 13
                EB5, BB4, EB5, G4, BB4, BB4,                                               // 14
                F5, C5, F5, G5, AB5, AB5, G5, F5, EB5,                                         // 15
                G5, EB5, D5, EB5, C5, C5,                                                    // 16      
                C5, G4, C5, D5, EB5, EB5, D5, C5, BB4,                                    // 17
                EB5, BB4, EB5, G4, BB4, BB4,                                               // 18
                F5, C5, F5, G5, AB5, AB5, G5, F5, EB5,                                         // 19
                G5, EB5, D5, EB5, C5, C5,                                                    // 20     
                AB4, AB4, EB5, D5, C5, D5,                                                        // 21
                BB4, BB4, F5, EB5, D5, EB5, F5,                                               // 22
                C5, C5, AB5, G5, F5, EB5,                                                // 23
                D5, D5, D5, EB5, F5, EB5, D5, BB4,                                             // 24
                C5, G4, C5, D5, EB5, EB5, D5, C5, BB4,                                    // 13
                EB5, BB4, EB5, G4, BB4, BB4,                                               // 14
                F5, C5, F5, G5, AB5, AB5, G5, F5, EB5,                                         // 15
                G5, EB5, D5, EB5, C5, C5,                                                    // 16      
                C5, G4, C5, D5, EB5, EB5, D5, C5, BB4,                                    // 17
                EB5, BB4, EB5, G4, BB4, BB4,                                               // 18
                F5, C5, F5, G5, AB5, AB5, G5, F5, EB5,                                         // 19
                G5, EB5, D5, EB5, C5, C5,                                                    // 20  
                AB4, AB4, EB5,                                                              // 25
                BB4, BB4, EB5,                                                                // 26
                AB4, AB4, EB5,                                                              // 27
                F5, D5, BB4, F5, D5, BB4, F5, D5, BB4, F5, D5, BB4, G5, F5,                  // 28
                G5, EB5, C5, G5, EB5, C5, G5, EB5, C5, G5, EB5, C5, AB5, G5,                  // 29
                G5, EB5, BB4, G5, EB5, BB4, G5, EB5, BB4, G5, EB5, BB4, AB5, G5,              // 30
                F5, D5, BB4, F5, D5, BB4, F5, D5, BB4, F5, D5, BB4, G5, F5,                   // 31
                G5, EB5, D5, EB5,                                                          // 32 
                G5, EB5, C5, G5, EB5, C5, G5, EB5, C5, G5, EB5, C5, AB5, G5,                  // 29
                G5, EB5, BB4, G5, EB5, BB4, G5, EB5, BB4, G5, EB5, BB4, AB5, G5,              // 30
                F5, D5, BB4, F5, D5, BB4, F5, D5, BB4, F5, D5, BB4, G5, F5,                   // 31
                G5, EB5, D5, EB5,                                                          // 32
                C4, EB4, G4, C5, EB5, G5, C6, EB6, G7, EB6, C6, G5, EB5, C5, G4, EB4,   // 1
                EB4, G4, BB4, EB5, G5, BB5, EB6, G6, BB7, G6, EB6, BB5, G5, EB5, BB4, G4, // 2
                BB3, D4, F4, BB4, D5, F5, BB5, D6, F7, D6, BB5, F5, D5, BB4, F4, D4,      // 3
                C4, EB4, G4, C5, EB5, G5, C6, EB6, G7, EB6, C6, G5, EB5, C5, G4, EB4,     // 4
                C5, C5, BB4, BB4, G4,    // 33
                BB4, C5,        // 34
                D5, D5, C5, C5, BB4,    // 35
                C5,             // 36
                C5, C5, BB4, BB4, G4,    // 37
                BB4, G4,        // 38
                BB4, BB4, F4, F4, EB4,   // 39
                C4              // 40
                
             };

 char tempos[]={16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                4, 4, 4, 4,
                8, 8, 8, 16, 8, 16, 8, 8, 8,
                8, 8, 8, 16, 2, 16,
                8, 8, 8, 16, 8, 16, 8, 8, 8,
                8, 8, 16, 8, 2, 16,
                8, 8, 8, 16, 8, 16, 8, 8, 8,
                8, 8, 8, 16, 2, 16,
                8, 8, 8, 16, 8, 16, 8, 8, 8,
                8, 8, 16, 8, 2, 16,
                4, 8, 4, 8, 8, 8, 
                4, 8, 4, 8, 16, 16, 8,
                4, 8, 4, 8, 8, 8,
                8, 8, 8, 8, 8, 8, 8, 8,
                8, 8, 8, 16, 8, 16, 8, 8, 8,
                8, 8, 8, 16, 2, 16,
                8, 8, 8, 16, 8, 16, 8, 8, 8,
                8, 8, 16, 8, 2, 16,
                8, 8, 8, 16, 8, 16, 8, 8, 8,
                8, 8, 8, 16, 2, 16,
                8, 8, 8, 16, 8, 16, 8, 8, 8,
                8, 8, 16, 8, 2, 16,
                2, 4, 4,
                2, 4, 4,
                2, 4, 4,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8, 8,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8, 8,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8, 8,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8, 8,
                4, 4, 4, 4,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8, 8,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8, 8,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8, 8,
                4, 4, 4, 4,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
                4, 8, 4, 8, 4,
                2, 2,
                4, 8, 4, 8, 4,
                1,
                4, 8, 4, 8, 4,
                2, 2,
                4, 8, 4, 8, 4,
                1
                
              };
 

}
