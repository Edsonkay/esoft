/*Carneiros Unidos jamais ser�o vencidos!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
double hiperfatorial(int n)
{
	if(n==0)
	return 0;
	
	double produto=1;
	int i;
	
	for(i=1; i<=n;i++)
	produto*=pow(n,n);
	return produto;
	
	
	
}




int main()
{

int valor;//Variavel que ser� usada para inserir valores a pedido do utilizador	
//    printf("Hello world!\n");
int op=1;//variavel que servir� para armazenar valores das op��es do menu

  while(op!=0)
  {

        printf("===================================================================");
        printf("\n\"                                                                 \"\n");
        printf("\" 1- Numero de Tribonanci                                         \"\n");
        printf("\" 2- Mostrar a sequencia de Padovan                               \"\n");
        printf("\" 3- Calcular Superfatorial                                       \"\n");
        printf("\" 4- Calcular Fatorial Duplo                                      \"\n");
        printf("\" 5- Hiperfatorial                                                \"\n");
        printf("\"                                                                 \"\n");
        printf("\" 0- Sair                                                         \"\n");
        printf("===================================================================\n");
    	printf("\nOpcao: ");
        
        scanf("%d",&op);
        fflush(stdin);
        switch(op)
        {
        	case 1:
        		break;
        		case 2:
        			
        			break;
        			case 3:
        				break;
        				case 4:
        					
        					break;
        					case 5:
        						printf("\nInsira o valor a  para calcular o hiperfatorial: ");
        						scanf("%d",&valor);
        						printf("\nO hiperfatorial de %d e %.f\n",valor,hiperfatorial(valor));
        						
        						break;
        						case 0:
        							
        							printf("\n\n\nObrigado, volte Sempre!");
        							break;
        }

  }




    return 0;
}

