#include <stdio.h>

// Estrutura para demonstrar o uso de structs
struct Person {
    char name[50]; // Nome da pessoa
    int age;      // Idade da pessoa
};

// Enumeração para representar cores
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

int main() {
    // Tipos Inteiros
    int integerVar = 10;          // Variável inteira
    short shortVar = 5;           // Variável inteira curta
    long longVar = 100000L;       // Variável inteira longa
    long long longLongVar = 10000000000LL; // Variável inteira longa longa

    // Tipos de Ponto Flutuante
    float floatVar = 5.75f;       // Variável de ponto flutuante (precisão simples)
    double doubleVar = 19.99;     // Variável de ponto flutuante (precisão dupla)
    long double longDoubleVar = 3.141592653589793238L; // Variável de ponto flutuante (precisão estendida)

    // Tipo Caractere
    char charVar = 'A';           // Variável de caractere

    // Arrays
    int arr[5] = {1, 2, 3, 4, 5}; // Array de inteiros

    // Ponteiros
    int *ptr = &integerVar;      // Ponteiro para um inteiro

    // Usando a estrutura
    struct Person person;         // Declaração de uma variável do tipo struct
    person.age = 30;              // Atribuindo valor à idade
    snprintf(person.name, sizeof(person.name), "Alice"); // Atribuindo nome

    // Usando a enumeração
    enum Color favoriteColor = GREEN; // Atribuindo uma cor favorita

    // Exibindo os valores
    printf("Integer: %d\n", integerVar);
    printf("Short: %d\n", shortVar);
    printf("Long: %ld\n", longVar);
    printf("Long Long: %lld\n", longLongVar);
    printf("Float: %.2f\n", floatVar);
    printf("Double: %.2f\n", doubleVar);
    printf("Long Double: %.15Lf\n", longDoubleVar);
    printf("Char: %c\n", charVar);
    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Pointer points to: %d\n", *ptr); // Exibindo o valor apontado pelo ponteiro
    printf("Person Name: %s, Age: %d\n", person.name, person.age);
    printf("Favorite Color: %d\n", favoriteColor); // Exibindo o valor da cor favorita

    return 0; // Indica que o programa terminou com sucesso
}
