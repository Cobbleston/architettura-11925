# Esempi informali di funzionamento della ALU

Avremo piu' avanti gli strumenti per renderli formali

Uso come esempio semplici istruzioni assembler della famiglia IBM compatibile

Alcuni dettagli della sintassi dipendono dall'assemblatore e quindi potrebbero essere leggermente diversi sul vostro sistema

- `ADD AX,BX`
  - Significato in notazione matematica: `AX = AX + BX`
    Rappresentato in IR da una sequenza binaria (sequenza di 0 e 1)
  - La control unit per eseguire questa istruzione:
    - Dice ad alcuni multiplexer: collega l'uscita di `AX` all'ingresso 1 della ALU
    - Dice ad alcuni multiplexer: collega l'uscita di BX all'ingresso 2 della ALU
    - Dice alla ALU: fai il + di quello che t'arriva
    - Dice ad alcuni multiplexer: collega l'uscita della ALU all'ingresso di `AX`
    - Dice ad `AX`: memorizza quello che ti arriva

- `ADD AX,[BX]`
  - `AX = AX + MEM[BX]`    
    `MEM[BX]` indica la locazione di RAM il cui indirizzo e' contenuto in `BX`
  - La control unit:
    - Dice ad alcuni multiplexer: collega l'uscita di AX all'ingresso 1 della ALU
    - Dice ad alcuni multiplexer: collega l'uscita di BX a MAR
    - Dice a MAR: memorizza quello che ti arriva
    - Attiva la linea leggi del BUS
    - Aspetta che la memoria abbia finito
    - Dice a MDR: memorizza quello che ti arriva
    - Dice ad alcuni multiplexer: collega l'uscita di MDR all'ingresso 2 della ALU
    - Dice alla ALU: fai il + di quello che t'arriva
    - Dice ad alcuni multiplexer: collega l'uscita della ALU all'ingresso di AX
    - Dice ad AX: memorizza quello che ti arri  va