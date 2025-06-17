# Programa para verificar si una palabra es palíndromo en C++

## Descripción

Este programa en C++ permite al usuario ingresar una palabra o frase y verifica si es un palíndromo. Un palíndromo es una palabra o frase que se lee igual de izquierda a derecha que de derecha a izquierda, ignorando mayúsculas, espacios y caracteres especiales.

## Funcionamiento del código

- El programa lee una cadena ingresada por el usuario.
- Elimina todos los caracteres que no sean letras o números.
- Convierte todos los caracteres a minúsculas para hacer la comparación sin distinguir mayúsculas.
- Comprueba si la cadena procesada es igual a su reverso.
- Muestra en consola si la entrada es o no un palíndromo.

## 🛠️ Requisitos previos
- Tener instalado [MinGW](https://www.mingw-w64.org/) o cualquier compilador de C++ compatible con `g++`.
- Tener Visual Studio Code instalado.
- Tener el compilador agregado a la variable de entorno `PATH`.

Puedes verificar que `g++` está instalado con:
```bash

g++ --version

-----

## Cómo ejecutar el programa

### Opción 1: Usando el botón de ejecución en VS Code

1. Abre el archivo `.cpp` en Visual Studio Code.
2. En la parte superior derecha del editor verás un botón con un **triángulo verde (▶️)** que dice **"Run"** o **"Ejecutar"**.
3. Haz clic en ese botón para compilar y ejecutar automáticamente el programa.
4. La consola integrada aparecerá y podrás ingresar la palabra o frase.
5. Escribe la entrada y presiona Enter para ver el resultado.
---
### Opción 2: usando comandos 

1. Abre Visual Studio Code y carga la carpeta raíz practica-multilenguaje.
2. Abre una terminal en VSCode (Ctrl + ñ).
3. Navega a la carpeta donde está el archivo:
cd cpp
4. Esto creará un archivo ejecutable llamado palindromo.exe (en Windows).
g++ palindromo.cpp -o palindromo 
5. Después de compilar, ejecuta el programa con:
palindromo