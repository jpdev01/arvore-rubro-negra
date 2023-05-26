#include <stdio.h>
#include "arvore.c"
#include "rotacionar.c"

int main() {
    Arvore* arvore = cria();
    adicionar(arvore, 4);
    adicionar(arvore, 2);
    adicionar(arvore, 8);
    adicionar(arvore, 1);
    adicionar(arvore, 3);
    adicionar(arvore, 6);
    adicionar(arvore, 9);
    adicionar(arvore, 5);
    adicionar(arvore, 7);

    return 0;
}
