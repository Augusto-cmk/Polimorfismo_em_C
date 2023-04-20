# Polimorfismo_em_C

Este projeto tem como objetivo demonstrar e criar estruturas genéricas utilizando a linguagem C. Embora a linguagem não tenha sido projetada para esse fim, é possível criar estruturas genéricas utilizando ponteiros. 

## Ponteiros em C

Em C, um ponteiro é uma variável que armazena o endereço de memória de outra variável. Um ponteiro para `void` é um ponteiro que pode apontar para qualquer tipo de dado.

## Estruturas Genéricas em C

Uma estrutura genérica em C é uma estrutura que pode ser usada para armazenar dados de qualquer tipo. Isso é possível porque os dados são armazenados como um ponteiro para `void`, que pode ser convertido em um ponteiro para qualquer tipo de dado.

### Exemplo de Estrutura Genérica

```c
typedef struct {
    void *data;
    size_t size;
} GenericStruct;


Nessa estrutura genérica, data é um ponteiro para void que pode ser convertido em um ponteiro para qualquer tipo de dado e size é o tamanho em bytes do dado armazenado em data.

### Exemplo de Uso

```c
int main() {
    int i = 42;
    char c = 'a';
    
    GenericStruct gs1 = {&i, sizeof(int)};
    GenericStruct gs2 = {&c, sizeof(char)};
    
    int *ip = (int *)gs1.data;
    char *cp = (char *)gs2.data;
    
    printf("%d\n", *ip);
    printf("%c\n", *cp);
    
    return 0;
}

Nesse exemplo, duas estruturas genéricas são criadas para armazenar um inteiro e um caractere. O ponteiro para void em cada estrutura é convertido em um ponteiro para o tipo de dado apropriado e o valor é impresso na tela.

### Aplicações

As estruturas genéricas em C têm várias aplicações, incluindo:

 - Armazenar dados de diferentes tipos em uma estrutura de dados
 - Implementar algoritmos de ordenação e busca que possam ser usados com diferentes tipos de dados
 - Criar funções de utilidade que possam ser usadas com diferentes tipos de dados

### Conclusão

Este projeto demonstrou como criar estruturas genéricas em C utilizando ponteiros para void. As estruturas genéricas têm várias aplicações úteis e são uma técnica poderosa para lidar com dados de diferentes tipos em um programa em C.
