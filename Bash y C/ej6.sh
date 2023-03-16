#!/bin/bash

program="ej5.c"
compiled="ej5"

if [ -f $program ]
then
   gcc $program -o $compiled
   echo "Se compilo el programa $program y sera ejecutado"
   ./$compiled
else
   echo "El programa $program no existe"
fi
exit
