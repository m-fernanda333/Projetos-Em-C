/*Função que irá verificar se o valor (double) fornecido é menor ou igual a 0, retornando 1 caso verdadeiro e 0 caso contrário*/
int verificaZero(double valor){
    if(valor <= 0){
        return 1;
    }
    return 0;
}

//verifica se é windows ou linux e limpa o console
void limparTela() {
#ifdef _WIN32 //Verifica se é Windows
    system("cls");
#else
    system("clear");
#endif
}
