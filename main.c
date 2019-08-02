#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main (int argc ,char  *argv[] ) {

	char buffer[50];
	sprintf(buffer, "which  %s" , argv[1]);
	system(buffer);
	system(argv[1]);

}
