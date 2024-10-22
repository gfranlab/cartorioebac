#include <stdio.h> //biblioteca de comunica��o com us�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��o de texto po regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string
int registro()
{
    char arquivo[40];
	char cpf[40];
    char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //respons�vel por copiar os valores da string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file, cpf); //salvo o valor da vari�vel
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
   		printf("n�o foi possivel localizar esse numero de CPF!.\n");
	   }
   		while(fgets(conteudo, 200, file) != NULL)
   	{
   		printf("\n Essas s�o as informa��es do usu�rio: ");
   		printf("%s", conteudo);
   		printf("\n\n");
   		
   }
   
   		system("pause");
	   
}
int deletar()
{
	printf("voc� escolheu deletar nomes!\n");
	system("pause");
}      

int main()
{
	int opcao=0; //Definindo as vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
{
	   system("cls");
		
	    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
    	printf("### Cart�rio da EBAC ###\n\n"); //In�cio do menu
    	printf("escolha a op��o desejada do menu:\n\n"); 
        printf("\t1 - registrar nomes\n");
        printf("\t2 - consultar nomes\n");
        printf("\t3 - deletar nomes\n\n");
        printf("\t4 - sair do sistema\n\n");
	    printf("Op��o: "); //Final do menu
    
   scanf("%d", &opcao); //Armazenando a escolha do usu�rio
   
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
		printf("essa op��o n�o esta dispon�vel!\n");
   	    system("pause");
		break; //fim do programa  	
   }
   
   
   
   }
   
}
