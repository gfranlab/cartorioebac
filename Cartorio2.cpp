#include <stdio.h> //biblioteca de comunicação com usário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto po região
#include <string.h> //biblioteca responsável por cuidar das string
int registro()
{
    char arquivo[40];
	char cpf[40];
    char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //responsável por copiar os valores da string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file, cpf); //salvo o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	
	system("pause");
	
	
	
}
int consultar()
{
   	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
   	
   	char cpf[40];
   	char conteudo[200];
   	
   	printf("Digite o cpf a ser consultado: ");
   	scanf("%s",cpf);
   	
   	FILE *file;
   	file = fopen(cpf, "r");
   	
   		if(file == NULL);
   	{
   		printf("não foi possivel localizar esse numero de CPF!.\n");
	   }
   		while(fgets(conteudo, 200, file) != NULL)
   	{
   		printf("\n Essas são as informações do usuário: ");
   		printf("%s", conteudo);
   		printf("\n\n");
   		
   }
   
   		system("pause");
	   
}
int deletar()
{
	printf("você escolheu deletar nomes!\n");
	system("pause");
}      

int main()
{
	int opcao=0; //Definindo as variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
{
	   system("cls");
		
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
    	printf("### Cartório da EBAC ###\n\n"); //Início do menu
    	printf("escolha a opção desejada do menu:\n\n"); 
        printf("\t1 - registrar nomes\n");
        printf("\t2 - consultar nomes\n");
        printf("\t3 - deletar nomes\n\n");
        printf("\t4 - sair do sistema\n\n");
	    printf("Opção: "); //Final do menu
    
   scanf("%d", &opcao); //Armazenando a escolha do usuário
   
   system("cls");
   
   switch(opcao)
   {
   	    case 1:
   	    registro();
    	break;
    	
    	case 2:
    	consultar();
   	    break;
		   
		case 3:
		deletar();
		break;
		
		case 4:
        printf("Obrigado por usar o sistema!\n");
        return 0;
        break;
		
		
		default:
		printf("essa opção não esta disponível!\n");
   	    system("pause");
		break; //fim do programa  	
   }
   
   
   
   }
   
}
