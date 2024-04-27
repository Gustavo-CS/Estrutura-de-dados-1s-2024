typedef struct No 
{
    char valor;
    struct No* proximo_no;
    
} No;


No* no(char valor, No* proximo_no);

void inserir_no(No* H, No* no);

void imprimir_list(No* H);

int quantidade_nos(No* H);

No* copiar_list(No* H);

void liberar_lista(No* H);

int lista_verificar_existencia(No* H, char valor_busca);

int lista_verificar_ocorrencia(No *H, char valor_busca);

// void lista_inserir_no_i(No* H, No* no, int i);