#include <stdio.h>
#include <locale.h>

int main (){

		setlocale(LC_ALL, "Portuguese");
		
		int escolha, resp_consumo;
		float cons_med, distancia, preco_combus, comb1, comb2, media_preco, km_perc, litros, ConsumoMedio;
		

		
		printf("----- ESCOLHA UMA OP��O -----\n");
		printf("1 - Viagem de apenas IDA ou VOLTA\n");
		printf("2 - Viagem de IDA e VOLTA\n");
		printf("-----------------------------\n");
		
		escolher:
		
		scanf("%i", &escolha);
		
		switch(escolha){
			case 1:
				printf("\nVoc� sabe o consumo m�dio do seu carro?\n");
				printf("1 - Sim");
				printf("\n2 - N�o");
				scanf("%i", &resp_consumo);
				
				
				if(resp_consumo == 1){
					printf("Insira o pre�o do combust�vel que voc� usa: ");
					scanf("%f", &preco_combus);
					
					printf("Insira o consumo m�dio do carro: ");
		        	scanf("%f", &cons_med);
		        
			        printf("Digite a dist�ncia que voc� ir� percorrer: ");
			        scanf("%f", &distancia);
		        
			        comb1 = distancia / cons_med; 
					printf("\n\nCombust�vel necess�rio para a viagem: %.1f litros\n", comb1);
				
					media_preco = preco_combus * comb1;
					printf("\nO valor necessario em combust�vel � de R$%.2f", media_preco);
				} else if (resp_consumo == 2) {
					printf("Insira o pre�o do combust�vel que voc� usa: ");
					scanf("%f", &preco_combus);
					
					printf("Digite quantos KM seu carro percorreu com um 1 tanque de combust�vel: ");
					scanf("%i", &km_perc);
					
					printf("Digite a quantidade de litros que voc� gastou: ");
					scanf("%i", &litros);
					
					ConsumoMedio = km_perc / litros; 
					
			        printf("Digite a dist�ncia que voc� ir� percorrer: ");
			        scanf("%f", &distancia);
		        
			        comb1 = distancia / ConsumoMedio; 
					printf("\n\nCombust�vel necess�rio para a viagem: %.1f litros\n", comb1);
				
					media_preco = preco_combus * comb1;
					printf("\nO valor necessario em combust�vel � de R$%.2f", media_preco);
					
				}
				
			break;
				
				
			case 2:
				printf("\nVoc� sabe o consumo m�dio do seu carro?\n");
				printf("1 - Sim");
				printf("\n2 - N�o");
				scanf("%i", &resp_consumo);
				
				
				
				if(resp_consumo == 1){
					printf("Insira o pre�o do combust�vel que voc� usa: ");
					scanf("%f", &preco_combus);
					
					printf("Insira o consumo m�dio do carro: ");
		        	scanf("%f", &cons_med);
		        
			        printf("Digite a dist�ncia que voc� ir� percorrer: ");
			        scanf("%f", &distancia);
		        
			        comb1 = (distancia / cons_med) * 2; 
					printf("\n\nCombust�vel necess�rio para a viagem: %.1f litros\n", comb1);
				
					media_preco = (preco_combus * comb1) * 2;
					printf("\nO valor necessario em combust�vel � de R$%.2f", media_preco);
				} else if (resp_consumo == 2) {
					printf("Insira o pre�o do combust�vel que voc� usa: ");
					scanf("%f", &preco_combus);
					
					printf("Digite quantos KM seu carro percorreu com um 1 tanque de combust�vel: ");
					scanf("%i", &km_perc);
					
					printf("Digite a quantidade de litros que voc� gastou: ");
					scanf("%i", &litros);
					
					ConsumoMedio = km_perc / litros; 
					
			        printf("Digite a dist�ncia que voc� ir� percorrer: ");
			        scanf("%f", &distancia);
		        
			        comb1 = (distancia / ConsumoMedio) * 2; 
					printf("\n\nCombust�vel necess�rio para a viagem: %.1f litros\n", comb1);
				
					media_preco = (preco_combus * comb1) * 2; 
					printf("\nO valor necessario em combust�vel � de R$%.2f", media_preco);
					
				}
				
			break;
				
				default:
					printf("\n\n-----Op��o invalida-----\n");
					goto escolher;
		}
		
		return 0;
		
		
}
