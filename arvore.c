#include <stdlib.h>
#include <string.h>

enum coloracao { Vermelho, Preto };

typedef enum coloracao Cor;

typedef struct no {
    struct no* pai;
    struct no* esquerda;
    struct no* direita;
    Cor cor; //cor do nó (Vermelho ou Preto)
    int valor;
} No;

typedef struct arvore {
    struct no* raiz;
    struct no* nulo;
} Arvore;

No* criarNo(Arvore* arvore, No* pai, int valor) {
    No* no = malloc(sizeof(No));

    no->pai = pai;
    no->valor = valor;
    no->direita = arvore->nulo;
    no->esquerda = arvore->nulo;
    no->cor = Vermelho;
}

No* adicionarNo(No* no, int valor) {
    if (valor > no->valor) {
        if (no->direita == NULL) {
            No* novo = criarNo(valor);
            novo->pai = no;
            no->direita = novo;

            return novo;
        } else {
            return adicionarNo(no->direita, valor);
        }
    } else {
        if (no->esquerda == NULL) {
            No* novo = criarNo(valor);
            novo->pai = no;
            no->esquerda = novo;

            return novo;
        } else {
            return adicionarNo(no->esquerda, valor);
        }
    }
}

Arvore* cria() {
    Arvore *arvore = malloc(sizeof(Arvore));
    arvore->raiz = NULL;

    return arvore;
}
