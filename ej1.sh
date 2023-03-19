#!/bin/bash

function Error(){
   echo "Error, se debe ingresar un parametro"
}

#Verifico que el usuario haya ingresado un solo parametro
if [ $# -eq 1 ]
then
  #Defino las variables a utilizar
   now=$(date +%d/%m/%Y)
   nameDir=$1
   txtFiles=$(find ~ -type f -iname "*.txt")
  #Me 'muevo' al directorio home del usuario
   cd $HOME
  #Verifico que si existe el directorio, en el caso que si accedo, caso contrario lo genero
  if [ -d "$nameDir" ]
  then
     cd ${nameDir}
  else
     mkdir ${nameDir}
     cd ${nameDir}
  fi
   echo -e "ARCHIVOS CON EXTENSION .TXT \n${txtFiles}\n" > report.txt
   echo "Reporte generado: ${now}" >> report.txt
else
   Error
fi
exit

