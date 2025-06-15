import java.util.Scanner;

public class palindromo {
    public static boolean esPalindromo(String texto) {
        texto = texto.toLowerCase().replaceAll("[^a-z0-9]", "");
        return texto.equals(new StringBuilder(texto).reverse().toString());
    }

    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.print("Ingresa una palabra: ");
            String palabra = scanner.nextLine();
            System.out.println(esPalindromo(palabra) ? "Es palíndromo" : "No es palíndromo");
        }
    }
}