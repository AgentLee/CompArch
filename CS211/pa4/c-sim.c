#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void converter(char hex[], char bin[]){
	int hexLen;
	int i;
	char binary[100];

	hexLen = strlen(hex);
	
	for(i = 0; i < hexLen; i++){
		if(hex[i] == 'x'){
			printf("dkljfa\n");
		}
		if(hex[i] == '0'){
			binary[i*4 + 0] = '0';
			binary[i*4 + 1] = '0';
			binary[i*4 + 2] = '0';
			binary[i*4 + 3] = '0';
			printf("%c\n", binary[6]);
		}
		if(hex[i] == '3'){
			binary[i*4 + 0] = '0';
			binary[i*4 + 1] = '0';
			binary[i*4 + 2] = '1';
			binary[i*4 + 3] = '1';
			printf("dkjfsa\n");
		}
	}

	printf("%s\n", binary);
}

int main(int argc, char *argv[]){
	FILE *fp;

	char hex[100];
	char bin[100];
	
	char c;
	int count;

	fp = fopen(argv[1], "r");

	c = fgetc(fp);
	count = 0;

	while(c != ':'){
		hex[count] = c;
		count++;		
		c = fgetc(fp);
	}

	printf("%s\n", hex);
	
	converter(hex, bin);

	printf("%s\n", bin);
	
}
