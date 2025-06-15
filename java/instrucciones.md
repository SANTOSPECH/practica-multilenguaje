# Programa para verificar si una palabra es palíndromo en Java

## Descripción

Este programa en Java permite al usuario ingresar una palabra o frase y verifica si es un palíndromo. Un palíndromo es una palabra o frase que se lee igual de izquierda a derecha que de derecha a izquierda, ignorando mayúsculas, espacios y caracteres especiales.

## Funcionamiento del código

- El método `esPalindromo` recibe un texto como entrada.
- Convierte todo el texto a minúsculas y elimina cualquier carácter que no sea una letra o número.
- Compara el texto procesado con su versión invertida utilizando `StringBuilder.reverse()`.
- Si ambas cadenas son iguales, devuelve `true` indicando que es palíndromo; de lo contrario, devuelve `false`.
- En el método `main`, el programa solicita al usuario que ingrese una palabra o frase.
- Luego, muestra en consola si el texto ingresado es o no un palíndromo.

## Cómo ejecutar el programa

### Opción 1: Usando el botón de ejecución en VS Code

1. Abre el archivo `palindromo.java` en Visual Studio Code.
2. En la parte superior derecha del editor verás un botón con un **triángulo verde (▶️)** que dice **"Run"** o **"Ejecutar"**.
3. Haz clic en ese botón para compilar y ejecutar automáticamente el programa.
4. La consola integrada aparecerá y te pedirá que ingreses la palabra o frase.
5. Escribe la entrada y presiona Enter para ver el resultado.



