//Usuario escolhe 2 planetas e retorna a distancia entre eles.
#include<stdio.h>

//Constantes
#define au 149597870.700  /* Km */
#define luz 299792.458    /* Km/s */

int main() {
    double distanciaDoSol[9], distanciaAU, distanciaKm, tempo;
    int i, hora, minuto, segundo;
    int element[2];

    //Distancia apartir do Sol/ Unidade = AU
    distanciaDoSol[0] = 0;            //Sol
    distanciaDoSol[1] = 0.387098;     //Mercurio
    distanciaDoSol[2] = 0.723332;     //Venus
    distanciaDoSol[3] = 1.0;          //Terra
    distanciaDoSol[4] = 1.523679;     //Marte
    distanciaDoSol[5] = 5.204267;     //Jupiter
    distanciaDoSol[6] = 9.5820172;    //Saturno
    distanciaDoSol[7] = 19.22941195;  //Urano
    distanciaDoSol[8] = 30.0366151;   //Netuno

    //Escolher itens
    for (i = 0; i <= 1; i++) {
        printf("Escolha %iº item: ", i+1);
        scanf("%i", &element[i]);

        //Mostra nome do elemento escolhido
        switch (element[i]) {
          case 0 : printf("Sol\n");       break;
          case 1 : printf("Mercurio\n");  break;
          case 2 : printf("Venus\n");     break;
          case 3 : printf("Terra\n");     break;
          case 4 : printf("Marte\n");     break;
          case 5 : printf("Jupiter\n");   break;
          case 6 : printf("Saturno\n");   break;
          case 7 : printf("Urano\n");     break;
          case 8 : printf("Netuno\n");    break;
        }
        printf("%.8f AU's\n", distanciaDoSol[element[i]]);
    }

    //Calculo de Distancia entre elementos

        //Verificar qual é maior
    if(distanciaDoSol[element[0]] >= distanciaDoSol[element[1]] ){
        distanciaAU = distanciaDoSol[element[0]] - distanciaDoSol[element[1]];
    }else{
        distanciaAU = distanciaDoSol[element[1]] - distanciaDoSol[element[0]];
    }

        //Calcular distancia em KMs
    distanciaKm = distanciaAU * au;

        //Distancia em Seg/Luz
    tempo = distanciaKm/luz;

        //Converter para o formato HH:MM:SS
    hora = (int)(tempo / 3600);
    minuto = (int)((tempo - (hora * 3600)) / 60);
    segundo = (int)(tempo - ((hora *3600) + (minuto * 60)));

    //Mostra distancia
    if(distanciaAU>1){
      printf("\nDistancia: %.2f AU's\n", distanciaAU);  //Plural
    }else{
      printf("\nDistancia: %.2f AU\n", distanciaAU);    //Singular
    }
    printf("%.2f Kms\n", distanciaKm);
    printf("Segundos: %.2f\n", tempo);
    printf("Tempo %i : %i : %i\n", hora, minuto, segundo);
    printf("Formato HH : MM : SS\n");
    printf("Fim");
}
