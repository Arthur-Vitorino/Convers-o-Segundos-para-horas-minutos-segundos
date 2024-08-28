#include <stdio.h>

int main(){
	
	int tempoSeg, tempoHoras, tempoMin;
	
	printf("Coloque a duracao em segundos: ");
	scanf("%d", &tempoSeg);
	
	if(tempoSeg > 0){
	
	tempoMin = tempoSeg / 60;
	tempoSeg -= (tempoMin * 60);
	tempoHoras = tempoMin / 60;
	tempoMin -= (tempoHoras * 60);
	
	printf("A duracao foi de: %d:%d:%d\n", tempoHoras, tempoMin, tempoSeg);
	
}else{
	printf("Invalido");
}

}
