def es_palindromo(texto):
    texto = ''.join(c for c in texto.lower() if c.isalnum())
    return texto == texto[::-1]

palabra = input("Ingresa una palabra: ")
print("Es palíndromo" if es_palindromo(palabra) else "No es palíndromo")