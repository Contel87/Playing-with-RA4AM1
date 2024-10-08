/* Menu a stati con Arduino UNO
 Esempio base di come creare diversi menu e poter scorrere da un menu all'altro con
 la funzione go() ... molto utile con i display LCD.


    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

*/

#include "stati.h"

variables state; // Struct che contiene tutte le variabili in uso

void setup() {
Serial.begin(9600);
delay(2000);

}

void loop() {
  switch(state.current){
    case st_Menu0:
      Menu0(&state);
    break;

    case st_Menu1:
      Menu1(&state);
    break;
  }

}
