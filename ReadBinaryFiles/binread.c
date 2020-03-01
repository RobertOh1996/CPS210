#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	FILE* ddf;
	ddf = fopen("binfile(1).ddf", "rb");
	
	char a, b, c, d;
	int e, f, g, h, j, k, l, m, n, o, p;
	float i;
	char array[50];
	fread(&a, sizeof(char), 1, ddf);
	printf("1: %c\n", a); //None
	fread(&b, sizeof(char), 1, ddf);
	printf("2: %c\n", b); //None
	fread(&c, sizeof(char), 1, ddf);
	printf("3: %c\n", c); //None
	fread(&d, 1, 1, ddf);
	printf("Version is: %d\n", d); //version
	fread(&e, sizeof(int), 1, ddf);
	printf("Number of frames is: %d\n", e); //Number of frames
	fread(&f, sizeof(int), 1, ddf);
	printf("Frame rate is: %d\n", f); // Frame rate
	fread(&g, sizeof(int), 1, ddf);
	printf("Resolution is %d\n", g); //Resolution
	fread(&h, sizeof(int), 1, ddf);
	printf("Number of beams is: %d\n", h); //Number of beams
	fread(&i, sizeof(float), 1, ddf);
	printf("Sample rate is %f\n", i); //Sample rate
	fread(&j, sizeof(int), 1, ddf);
	printf("Sample per Channel is : %d\n", j); //Sample per Channel
	fread(&k, sizeof(int), 1, ddf);
	printf("Receiver Gain is : %d\n", k); //Receiver Gain
	fread(&l, sizeof(int), 1, ddf);
	printf("Window start is: %d\n", l); //Window start
	fread(&m, sizeof(int), 1, ddf);
	printf("Window length is : %d\n", m); //window length
	fread(&n, sizeof(int), 1, ddf);
	printf("Reverse is : %d\n", n); //reverse
	fread(&o, sizeof(int), 1, ddf);
	printf("Serial number is: %d\n", o); //serial number
	fgets(&array, sizeof(array), ddf);
	printf("Date is : %s\n", array); //Date
    fclose(ddf);
    return 0;
}
