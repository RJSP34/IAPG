/**
 * Projeto realizado por:
 * Diogo Pereira 40207
 *
 */


#ifndef PROJETOIAPG_ESTRUTURA_H
#define PROJETOIAPG_ESTRUTURA_H

int main_Projeto();
void menu_destinos();
void menu_alojamento();
void menu_clientes();


typedef struct destinos {
    int continente, pais, cidade;
} DESTINOS;

typedef struct alojamento {
    int hotel, motel, hoster, pensao;
} ALOJAMENTO;

typedef struct clientes {
    char nome[40]; // nome da euipa
    char sobrenome[40]; // cidade da equipa
} CLIENTES;


void imprimir_destino();
void inserir_destino();
void editar_destino();
void remover_destino();
void imprimir_Alojamento();
void inserir_Alojamento();
void editar_Alojamento();
void remover_Alojamento();
void imprimir_Clientes();
void inserir_Clientes();
void editar_Clientes();
void remover_Clientes();
void menu_infocarregar();
void menu_infogravar();

#endif //PROJETOIAPG_ESTRUTURA_H
