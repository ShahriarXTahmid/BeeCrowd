#include <stdio.h>
int main()
{
    int ih, im, fh, fm, hour, minute;
    double time;
    scanf("%d %d %d %d", &ih, &im, &fh, &fm);

    if(ih<fh || ih==fh){
    hour = (((fh * 60) + fm) - ((ih * 60) + im)) / 60;
    minute = (((fh * 60) + fm) - ((ih * 60) + im)) % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hour, minute);
    }

    else {
      
        
        
          
    }
    return 0;
}