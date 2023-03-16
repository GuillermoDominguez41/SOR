#!/bin/bash

folder="Carpeta_Prueba"
file="Archivo_Prueba.txt"
text="Tanto el archivo como este texto fue autogenerado!!"

if [ -d "$folder" ] 
then
   echo "el directorio $folder existe, se elimina el directorio y sub-archivos" 
   rm -r $folder
else
   echo "El directorio $folder no existe, se genera directorio y sub-archivo"
   mkdir $folder
   cd $folder
   echo $text > $file
fi
exit
