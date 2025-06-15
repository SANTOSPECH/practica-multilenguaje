es_palindromo(Palabra) :-
    string_lower(Palabra, Lower),
    re_replace("[^a-z0-9]"/g, "", Lower, Limpia),
    string_chars(Limpia, Caracteres),
    reverse(Caracteres, Caracteres).

main :-
    write("Ingresa una palabra: "),
    read_line_to_string(user_input, Palabra),
    (es_palindromo(Palabra) -> writeln("Es palíndromo"); writeln("No es palíndromo")).

:- initialization(main).