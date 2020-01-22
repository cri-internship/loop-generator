#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(550, "ones");
	int **A = create_two_dim_int(360, 20, "ones");

	for (int c = 2; c < 16; c++)
	  for (int b = 3; b < 359; b++)
	    for (int a = 3; a < 359; a++)
	    {
	      
	      A[a][b]=A[a-3][b-1]+B[a];
	      
	      B[a]=B[a+4]+38;
	      
	      B[a]=B[a+2]*A[a][b];
	      
	      A[a][b]=A[a+1][b+4]/29;
	      
	      A[a][b]=A[a][b]+B[a];
	      B[a]=A[a+1][b+3]/B[a];
	    }

    return 0;
}