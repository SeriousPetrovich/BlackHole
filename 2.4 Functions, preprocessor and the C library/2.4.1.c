#include <stdio.h>
#define max(R,G,B,MAX,MIN) if(R>G && R>B) MAX=R;if(G>B && G>R) MAX=G;if (B>R && B>G) MAX=B;if(R<G && R<B) MIN=R;if(G<B && G<R) MIN=G;if (B<R && B<G) MIN=B;
int main () 
{
	float R,G,B,H,S,V,MAX,MIN;
	scanf("%f %f %f",&R,&G,&B);
	R=R/255;
	G=G/255;
	B=B/255;
	max(R,G,B,MAX,MIN);
	if (MAX==MIN) H=0;
	if (MAX==R && G>=B) H=60*((G-B)/(MAX-MIN));
	if (MAX==R && G<B) H=60*((G-B)/(MAX-MIN))+360;
	if (MAX==G) H=60*((B-R)/(MAX-MIN))+120;
	if (MAX==B) H=60*((R-G)/(MAX-MIN))+240;
	if (MAX==0) S=0; else S=(1-(MIN/MAX))*100;
	V=MAX*100;
	printf("H=%.1f S=%.1f%% V=%.1f%%\n",H,S,V);
	if (0<=H && H<=360 && 0<=S && S<=100 && V<=10) printf("Ваш цвет Черный");
	if (0<=H && H<=360 && S<=15 && V>=65) printf("Ваш цвет Белый");
	if (0<=H && H<=360 && S<=15 && 10<=V && V<=65) printf("Ваш цвет Серый");
	if (H<=11 && H>=351 && S>=70 && V>=10) printf("Ваш цвет Красный");
	if (H<=11 && H>=351 && S<=70 && V>=10) printf("Ваш цвет Розовый");
	if (310<=H && H<=351 && S>=15 && V>=10) printf("Ваш цвет Розовый");
	if (11<=H && H<=45 && S>=15 && V>=75) printf("Ваш цвет Оранжевый");
	if (11<=H && H<=45 && S>=15 && 10<=V && V<=75) printf("Ваш цвет Коричневый");
	if (45<=H && H<=64 && S>=15 && V>=10) printf("Ваш цвет Желтый");
	if (64<=H && H<=150 && S>=15 && V>=10) printf("Ваш цвет Зеленый");
	if (150<=H && H<=180 && S>=15 && V>=10) printf("Ваш цвет Сине-Зеленый");
	if (180<=H && H<=255 && S>=15 && V>=10) printf("Ваш цвет Синий");
	if (255<=H && H<=310 && S>=50 && V>=10) printf("Ваш цвет Фиолетый");
	if (255<=H && H<=310 && 15<=S && S<=50 && V>=10) printf("Ваш цвет Темно-Розовый");
	return 0;
}
