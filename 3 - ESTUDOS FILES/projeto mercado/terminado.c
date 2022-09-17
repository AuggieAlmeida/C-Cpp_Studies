#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define QTREG 30

typedef struct {
    int codigo;
    char nome[30];
    int quantidade;
    float preco;
} REGPRODUTO;

//CRIA VARIAVEL DO TIPO regproduto
REGPRODUTO produto[QTREG];

//VARIAVEIS GLOBAIS
float caixaAtual = 0.00;

//CABE�ALHO DAS FUN��ES QUE SER�O USADAS

//CABE�ALHO DA FUN��O INSERIR UM PRODUTO NO ESTOQUE
int cadastrar();

//CABE�ALHO DA FUN��O AUMENTAR O ESTOQUE DE UM PRODUTO
void alterarEstoque(int pCodgio, int pQuantidade);

//CABE�ALHO DA FUN��O MODIFICAR O PRE�O DE UM PRODUTO
void modificarPreco(int pCodigo, float pPreco);

//CABE�ALHO DA FUN��O REALIZAR VENDA
float venda();

//CABE�ALHO DA FUN��O CONSULTAR O ESTOQUE DOS PRODUTOS
void listaProduto(int pQtProduto);

//CABE�ALHO DA FUN��O CONSULTAR O SALDO DO CAIXA
void consultarSaldo();

int cadastrar() {
    char opSub;
    int cont = 0, qtProdutoCad = 0;
    //float compra;
    do {
        produto[cont].codigo = cont;
        fflush(stdin);
        printf("Digite o nome do produto:");
        fflush(stdout);
        gets(produto[cont].nome);
        fflush(stdin);
        printf("Digite a quantidade:");
        fflush(stdout);
        scanf("%d", &produto[cont].quantidade);
        fflush(stdin);
        printf("Digite o preco:");
        fflush(stdout);
        scanf("%f", &produto[cont].preco);
        fflush(stdin);
        caixaAtual = caixaAtual - produto[cont].preco;
        qtProdutoCad = qtProdutoCad + cont;
        cont++;


        printf("Deseja cadastrar um novo produto sim(s) ou n�o(n)?");
        fflush(stdout);
        scanf("%c", &opSub);
        fflush(stdin);
    } while (opSub == 's' || opSub == 'S');
    return qtProdutoCad;
}

//FUN��O AUMENTAR O ESTOQUE DE UM PRODUTO

void alterarEstoque(int pCodigo, int pQuantidade) {
    produto[pCodigo].quantidade = pQuantidade;
}

//FUN��O MODIFICAR O PRE�O DE UM PRODUTO

void modificarPreco(int pCodigo, float pPreco) {
    produto[pCodigo].preco = pPreco;
}

//FUN��O REALIZA VENDA

float venda() {
    int pCodigo, qtd;
    float lucro = 0;
    char a;
    do{
        printf("Informe o c�digo do produto: ");
        fflush(stdout);
        scanf("%d", &pCodigo);
        fflush(stdin);
        if (produto[pCodigo].quantidade < 0) {

            printf("Produto indisponivel\n");
            fflush(stdout);
        } else {
            printf("Informe a quantidade: ");
            fflush(stdout);
            scanf("%d", &qtd);
            fflush(stdin);
            printf("\tProduto: %s - \tQtdade: %d - \tPre�o: %1.2f - \tSubTotal: %1.2f\n",
                    produto[pCodigo].nome, qtd, produto[pCodigo].preco, produto[pCodigo].preco * qtd);
            fflush(stdout);
            lucro += produto[pCodigo].preco * qtd;
            produto[pCodigo].quantidade -= qtd;
        }
        printf("Informar novo item para a venda? (s/n) ");
        fflush(stdout);
        scanf("%c", &a);
    } while (a != 'n');


    printf("\t\t\t Total: %1.2f", lucro);
    fflush(stdout);
    return lucro;
}

//FUN��O CONSULTAR SALDO

void consultarSaldo() {
    printf("Saldo atual em caixa: %1.2f", caixaAtual);
    fflush(stdout);
}

//FUN��O CONSULTAR O ESTOQUE DOS PRODUTOS

void listaProduto(int pQtProduto) {
    int i, qtProduto;
    qtProduto = pQtProduto;
    for (i = 0; i < qtProduto; i++) {
        printf("\tC�digo - %d \tNome - %s \tQuantidade - %d \n", produto[i].codigo, produto[i].nome, produto[i].quantidade);
    }
    fflush(stdout);
}

struct cadastro{
   char user[20];
   char pass[20];
   int codigo;
}usuario[1000];



void cadastro_cliente(int a)
{
   system("cls");
   usuario[a].codigo = a+1;
   printf("\n\tCadastro %d",usuario[a].codigo);
   puts("\n\n\tDigite o login: ");
   printf("\t");
   scanf(" %s",usuario[a].user);
   puts("\tDigite a senha: ");
   printf("\t");
   scanf(" %s",usuario[a].pass);
   system("cls");
}

void logar_sist()
{
   int c;
   int logado;
   char login[1][20], senha[1][20];

   erro_login:

   printf("\n\tLogon\n");
   printf("\n\tLogin: ");
   scanf(" %s",login[0]);
   printf("\n\tSenha: ");
   scanf(" %s",senha[0]);


   for (c=0;c<1000;c++)
   {
       if ((strcmp(login[0],usuario[c].user)!=0) || (strcmp(senha[0],usuario[c].pass)!=0))
       {
           logado = 1; //login e/ou senha incorretos
       }
       else if(strcmp(login[0],usuario[c].user)==0)
       {
           if (strcmp(senha[0],usuario[c].pass)==0)
           {
               logado = 2; //logado com sucesso


               break;
           }

       }
   }

   if (logado==1)
   {
       system("cls");
       printf("\nLogin e/ou senha incorreto(s)\n");
       printf("\nTente Novamente!\n");
       goto erro_login;
   }
   else if (logado==2)
   {
       system("cls");
       printf("\nLogado com sucesso!\n\nBem-vindo(a) %s\n",login[0]);
       printf("Codigo do usuario: %d\n\n",usuario[c].codigo);
   }


}

int main(void)
{
   int a = 0,b,c,nc;
   int logado;
   int op;
   int codigo[1000];

   tela_inicial:
   printf("1 - Cadastro\n");
   printf("2 - Logar\n");
   printf("3 - Estoque\n");
   printf("4 - Fechar\n");
   scanf("%d", &op);
   system("cls");
   if (op == 1)
   {
       printf("\nQuantos cadastros deseja fazer? \n");
       scanf("%d",&nc);
       if (a==0)
       {
           for (a=0;a<nc;a++)
           {
               cadastro_cliente(a);
           }
           goto tela_inicial;
       }
       else if (a!=0)
       {
           b = a;
           c = a+nc-1;
           printf("\n%d\n",a);
           for (a=b;a<=c;a++)
           {
               cadastro_cliente(a);
           }
           goto tela_inicial;
       }

   }
   else if (op == 2) logar_sist();
   else if (op == 3){
    int op = 0;

    setlocale(LC_ALL, "Portuguese");

    while (op != 7) {
        printf("MENU\n\n1 - Cadastrar Produto\n2 - Atualizar Estoque\n3 - Alterar preco produto");
        printf("\n4 - Realizar venda\n5 - Consultar estoque\n6 - Consultar saldo do caixa\n7 - Sair\n");
        fflush(stdout);
        scanf("%d", &op);
        fflush(stdin);
        system("cls");

        switch (op) {
            int qtProduto;
            float lucro;
            case 1://OP��O CADASTRAR PRODUTO
                qtProduto = cadastrar();
                break;
            case 2:
            {//OP��O ATUALIZAR ESTOQUE
                int pCodigo, pQuantidade;
                printf("Digite o c�digo do produto que deseja atualizar o estoque:");
                fflush(stdout);
                scanf("%d", &pCodigo);
                fflush(stdin);
                printf("Deseja alterar quantidade do produto: %s - quantidade: %d \n", produto[pCodigo].nome, produto[pCodigo].quantidade);
                printf("Nova quantidade:");
                fflush(stdout);
                scanf("%d", &pQuantidade);
                fflush(stdin);
                system("pause");
                alterarEstoque(pCodigo, pQuantidade);
            }
                break;
            case 3:
            {//OP��O ALTERAR PRE�O DO PRODUTO
                int pCodigo;
                float pPreco;
                printf("Digite o c�digo do produto que deseja modificar o preco:");
                fflush(stdout);
                scanf("%d", &pCodigo);
                fflush(stdin);
                printf("Deseja modificar o preco do produto: %s - preco: %0.2f \n", produto[pCodigo].nome, produto[pCodigo].preco);
                printf("Novo preco:");
                fflush(stdout);
                scanf("%f", &pPreco);
                fflush(stdin);
                system("pause");
                modificarPreco(pCodigo, pPreco);
            }
                break;
            case 4://OP��O DE REALIZAR VENDA
                lucro = venda();
                caixaAtual = caixaAtual + lucro;
                break;
            case 5://OP��O DE LISTAR PRODUTOS
                listaProduto(qtProduto);
                break;
            case 6://CONSULTAR SALDO NO CAIXA
                consultarSaldo();
                break;
            case 7://OP��O SAIR DO PROGRAMA
                break;
            default:// EXIBI MENSAGEM DE OP��O INVALIDA CASO DIGITE UM NUMERO QUE N�O TENHA NO MENU
                printf("Opc�o inv�lida");
                fflush(stdout);
                break;

        }
    }


    system("pause");
    return 0;

}
    else if(op == 4) exit(0);

   return 0;
}
