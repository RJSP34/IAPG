/**
 * Projeto realizado por:
 * Diogo Pereira 40207
 *
 *
 */

/**
 * Função principal do projeto
 * Apresenta o menú principal.
 * @return 0 se n houver erros
 */
#include "Projeto.h"
#include <stdio.h>

int main_Projeto() {
    printf("main_Projeto()\n");
    int op = 0;
    do {
        printf("\t\tGestor de Viagens\n\n");
        printf("Escolha a opçao:\n");
        printf("\t1-Destino\n");
        printf("\t2-Alojamento\n");
        printf("\t3-Clientes\n");
        printf("\t4-Carregar info de ficheiro\n");
        printf("\t5-Gravar info para ficheiro\n");
        printf("\t0-Sair\n");

        scanf("%d", &op);
        switch (op) {
            case 1:
                menu_destinos();
                break;
            case 2:
                menu_alojamento();
                break;
            case 3:
                menu_clientes();
                break;
            case 4:
                menu_infocarregar();
                break;
            case 5:
                menu_infogravar();
                break;
            case 0 :
                break;
            default: printf("Opção inválida!\n\n");
        }
    } while (op != 0);

    return 0;
}

/**função que apresenta o menu de destinos
 */
void menu_destinos() {
    int op = 0;
    do {
        printf("\t\tMenu Destinos\n\n");
        printf("Escolha a opçao:\n");
        printf("\t1-Listar Destinos\n");
        printf("\t2-Inserir destinos\n");
        printf("\t3-Editar destinos\n");
        printf("\t4-Remover destinos\n");
        printf("\t0-Voltar\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                imprimir_destino();
                break;
            case 2:
                inserir_destino();
                break;
            case 3:
                editar_destino();
                break;
            case 4:
                remover_destino();
                break;
            case 0 :
                break;
            default :
                printf("Opção inválida!\n\n");
        }
    } while (op != 0);
}
    void imprimir_destino() {
    printf("Imprimir Destinos!\n");
}
void inserir_destino() {
    printf("Inserir Destinos!\n");
}
void editar_destino() {
    printf("Editar Destinos!\n");
}
void remover_destino() {
    printf("Remover Destinos!\n");
}

    void menu_alojamento() {

        int op = 0;
        do {
            printf("\t\tMenu Alojamento\n\n");
            printf("Escolha a opçao:\n");
            printf("\t1-Listar Alojamento\n");
            printf("\t2-Inserir Alojamento\n");
            printf("\t3-Editar Alojamento\n");
            printf("\t4-Remover Alojamento\n");
            printf("\t0-Voltar\n");
            scanf("%d", &op);

            switch (op) {
                case 1:
                    imprimir_Alojamento();
                    break;
                case 2:
                    inserir_Alojamento();
                    break;
                case 3:
                    editar_Alojamento();
                    break;
                case 4:
                    remover_Alojamento();
                    break;
                case 0 :
                    break;
                default :
                    printf("Opção inválida!\n\n");
            }
        } while (op != 0);
    }
        void imprimir_Alojamento() {
            printf("Imprimir Alojamento!\n");
        }
void inserir_Alojamento() {
    printf("Inserir Alojamento!\n");
}
void editar_Alojamento() {
    printf("Editar Alojamento!\n");
}
void remover_Alojamento() {
    printf("Remover Alojamento!\n");
}

void menu_clientes() {

    int op = 0;
    do {
        printf("\t\tMenu Clientes\n\n");
        printf("Escolha a opçao:\n");
        printf("\t1-Listar Clientes\n");
        printf("\t2-Inserir Cliente\n");
        printf("\t3-Editar Cliente\n");
        printf("\t4-Remover Cliente\n");
        printf("\t0-Voltar\n");
        scanf("%d", &op);

        switch (op) {
            case 1:
                imprimir_Clientes();
                break;
            case 2:
                inserir_Clientes();
                break;
            case 3:
                editar_Clientes();
                break;
            case 4:
                remover_Clientes();
                break;
            case 0 :
                break;
            default :
                printf("Opção inválida!\n\n");
        }
    } while (op != 0);
}
void imprimir_Clientes() {
    printf("Imprimir Clientes!\n");
}
void inserir_Clientes() {
    printf("Inserir Clientes!\n");
}
void editar_Clientes() {
    printf("Editar Clientes!\n");
}
void remover_Clientes() {
    printf("Remover Clientes!\n");
}





void menu_infocarregar() {
    printf("INFO\n");
}
void menu_infogravar() {
    printf("INFO\n");
}

/** Depois no menu de destinos
 * 1-Listar destinos
 * 2-inserir destino
 * 3-Editar destinos
 * 4-Remover Destino
 * 5-Voltar
 */

/** Depois no menu de alojamentos
 *
 *
 *
 *
 */

