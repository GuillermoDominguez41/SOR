#!/bin/bash

textFile="infSys.txt"
cpu=$(lscpu | grep 'Nombre del modelo')
kernel=$(uname -r)
arq=$(lscpu | grep 'Arquitectura')
interruptions=$(head -11 /proc/interrupts)
ram=$(free -h | grep 'Memoria' | awk '{print $1 $2}' | cut -d ':' -f 2 )
swap=$(free -h | grep 'Swap' | awk '{print $1 $2}' | cut -d ':' -f 2 )
grafica=$(lspci | grep 'VGA')

if [ -f $textFile ]
then
   rm $textFile
fi

echo "Kernel:        "${kernel}     >> $textFile
echo "CPU:           "${cpu:37}     >> $textFile
echo "Arquitectura:  "${arq:37}     >> $textFile
echo "Memoria Ram:   "${ram}        >> $textFile
echo "MI Swap:       "${swap}       >> $textFile
echo "Grafica:       "${grafica:35} >> $textFile
echo -e "Primeras 10 Interrupciones: \n $interruptions" >> $textFile

exit
