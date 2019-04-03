#include <stdlib.h> // for random numbers
#include "screen.h"
#include <time.h> // for randomization (using system time)
#include <stdio.h>
#include "sound.h"

int main(){
    FILE *f;
	short sd[RATE];
	for(;;){
		int ret = system(RCMD);
		if(ret =SIGINT) break;
		f = fopen("test.wav","r");
    	if (f == NULL){
        printf("Cannot open the file\n");
        return 1;
    }
//  int dec[COL]; // 80 pieces of sound decibels
//  srand(time(NULL));
//  for (int i=0; i<COL; i++) dec[i]=rand()%70+30;
    clearScreen();
    setColors(RED, bg(YELLOW));
//  barChart(dec);
    struct WAVHDR hdr;
    fread(&hdr, sizeof(hdr), 1, f); // read WAV header
	fread(&sd, sizeof(sd), 1, f);	// read WAV data
	fclose(f);
    displayWAVHDR(hdr);
	displayWAVDATA(sd);
	// display WAVDATA()
}
    resetColors();
//    getchar();

}


