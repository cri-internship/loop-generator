#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	 int B[16384][8192] = {0};
	 int A[268435456] = {0};
    clock_t start = clock();

	for (int a = 3; a < 16380; a++)
	{
	  
	    B[a][a]=B[a+2][a+4]*14;
	  
	    B[a][a]=34;
	  
	    int var_a=A[a]+17;
	    int var_b=A[a+5]+39;
	}

    clock_t stop = clock();
    double elapsed = ((double)(stop - start)) / CLOCKS_PER_SEC;
    printf("%f", elapsed); 
    return 0; 
    }