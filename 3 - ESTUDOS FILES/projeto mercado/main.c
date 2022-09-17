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

//CABEÇALHO DAS FUNÇÕES QUE SERÃO USADAS

//CABEÇALHO DA FUNÇÃO INSERIR UM PRODUTO NO ESTOQUE
int cadastrar();

//CABEÇALHO DA FUNÇÃO AUMENTAR O ESTOQUE DE UM PRODUTO
void alterarEstoque(int pCodgio, int pQuantidade);

//CABEÇALHO DA FUNÇÃO MODIFICAR O PREÇO DE UM PRODUTO
void modificarPreco(int pCodigo, float pPreco);

//CABEÇALHO DA FUNÇÃO REALIZAR VENDA
float venda();

//CABEÇALHO DA FUNÇÃO CONSULTAR O ESTOQUE DOS PRODUTOS
void listaProduto(int pQtProduto);

//CABEÇALHO DA FUNÇÃO CONSULTAR O SALDO DO CAIXA
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


        printf("Deseja cadastrar um novo produto sim(s) ou não(n)?");
        fflush(stdout);
        scanf("%c", &opSub);
        fflush(stdin);
    } while (opSub == 's' || opSub == 'S');
    return qtProdutoCad;
}

//FUNÇÃO AUMENTAR O ESTOQUE DE UM PRODUTO

void alterarEstoque(int pCodigo, int pQuantidade) {
    produto[pCodigo].quantidade = pQuantidade;
}

//FUNÇÃO MODIFICAR O PREÇO DE UM PRODUTO

void modificarPreco(int pCodigo, float pPreco) {
    produto[pCodigo].preco = pPreco;
}

//FUNÇÃO REALIZA VENDA

float venda() {
    int pCodigo, qtd;
    float lucro = 0;
    char a;
    do{
        printf("Informe o código do produto: ");
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
            printf("\tProduto: %s - \tQtdade: %d - \tPreço: %1.2f - \tSubTotal: %1.2f\n",
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

//FUNÇÃO CONSULTAR SALDO

void consultarSaldo() {
    printf("Saldo atual em caixa: %1.2f", caixaAtual);
    fflush(stdout);
}

//FUNÇÃO CONSULTAR O ESTOQUE DOS PRODUTOS

void listaProduto(int pQtProduto) {
    int i, qtProduto;
    qtProduto = pQtProduto;
    for (i = 0; i < qtProduto; i++) {
        printf("\tCódigo - %d \tNome - %s \tQuantidade - %d \n", produto[i].codigo, produto[i].nome, produto[i].quantidade);
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
   float matriz[11][4];
    char linha[150];
    int k;
    int j;
    float soma_x;
    float soma_y;
    float soma_xx;
    float soma_xy;
    int n;
    float coef_a;
    float coef_b;

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
       setlocale(LC_ALL, "Portuguese");
       system("cls");
       printf("\nLogado com sucesso!\n\nBem-vindo(a) %s\n",login[0]);
       printf("Codigo do usuario: %d\n\n",usuario[c].codigo);

       int op2 = 0;

       while (op2 != 8) {
        printf("MENU\n\n1 - Cadastrar Produto\n2 - Atualizar Estoque\n3 - Alterar preco produto");
        printf("\n4 - Realizar venda\n5 - Consultar estoque\n6 - Consultar saldo do caixa\n7 - Linha de tendência\n8 - Sair\n");
        fflush(stdout);
        scanf("%d", &op2);
        fflush(stdin);
        system("cls");

        switch (op2) {
            int qtProduto;
            float lucro;
            case 1://OPÇÃO CADASTRAR PRODUTO
                qtProduto = cadastrar();
                break;
            case 2:
            {//OPÇÃO ATUALIZAR ESTOQUE
                int pCodigo, pQuantidade;
                printf("Digite o código do produto que deseja atualizar o estoque:");
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
            {//OPÇÃO ALTERAR PREÇO DO PRODUTO
                int pCodigo;
                float pPreco;
                printf("Digite o código do produto que deseja modificar o preco:");
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
            case 4://OPÇÃO DE REALIZAR VENDA
                lucro = venda();
                caixaAtual = caixaAtual + lucro;
                break;
            case 5://OPÇÃO DE LISTAR PRODUTOS
                listaProduto(qtProduto);
                break;
            case 6://CONSULTAR SALDO NO CAIXA
                consultarSaldo();
                break;
            case 7:
                printf("\n\n Ola, tecle enter para ler arquivo e calcular equacao da reta...\n");
                getch();

                FILE *dados;
                dados = fopen("dados.txt", "r");

                if (dados == NULL) {
                    printf("\nArquivo nao encontrado!\n");
                    return 0;
                }

                strcpy(linha, "");
                k = -1;
                while (!feof(dados)) {
                    k = k+1;
                    fgets(linha, 150, dados);
                    matriz[k][0] = atof(strtok(linha, ";"));
                    matriz[k][1] = atof(strtok(NULL, ""));
                    matriz[k][2] = matriz[k][0] * matriz[k][0];
                    matriz[k][3] = matriz[k][0] * matriz[k][1];
                }

                n = k+1;

                soma_x = 0;
                soma_y = 0;
                soma_xx = 0;
                soma_xy = 0;
                printf("\n  Dados: (n = %d)\n\n  %5s%15s%15s%15s\n", n, "X","Y","X^2","X*Y");
                for (j=0; j<=k; j++) {
                     printf("  %5.2f%15.2f%15.2f%15.2f\n", matriz[j][0], matriz[j][1], matriz[j][2], matriz[j][3]);
                     soma_x = soma_x + matriz[j][0];
                     soma_y = soma_y + matriz[j][1];
                     soma_xx = soma_xx + matriz[j][2];
                     soma_xy = soma_xy + matriz[j][3];
                }
                printf("  ----------------------------------------------------------------\n");
                printf("  %5.2f%15.2f%15.2f%15.2f\n", soma_x, soma_y, soma_xx, soma_xy);
                printf("\n\n");

                coef_a = (soma_xy - n * (soma_x / n) * (soma_y / n)) / (soma_xx - n * (soma_x / n) * (soma_x / n));
                coef_b = (soma_y / n) - coef_a * (soma_x / n);

                printf("  Equacao da reta:\n\n");
                printf("  Y = %0.4f X + ( %0.4f )\n", coef_a, coef_b);
                printf("\n\n\n");
                getch();

                fclose(dados);
                    aiodjwaoijbreak;
                case 8://OPÇÃO SAIR DO PROGRAMA
                    break;
                default:// EXIBI MENSAGEM DE OPÇÃO INVALIDA CASO DIGITE UM NUMERO QUE NÃO TENHA NO MENU
                    printf("Opcão inválida");
                    fflush(stdout);
                    break;

            }
        }


    system("pause");
    return 0;
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
   printf("3 - Fechar\n");
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
   else if(op == 3) exit(0);

   return 0;
}
