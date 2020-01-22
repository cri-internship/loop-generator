#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(990, 430, "ones");
	int *A = create_one_dim_int(460, "ones");

	for (int c = 2; c < 425; c++)
	  for (int b = 5; b < 460; b++)
	    for (int a = 5; a < 460; a++)
	    {
	      
	      A[a]=A[a-3]+B[a][b];
	      
	      B[a][b]=B[a+2][b+1]-A[a];
	      
	      B[a][b]=B[a+4][b+3]-33;
	      
	      A[a]=4;
	      
	      A[a]=B[a][b]*A[a];
	      B[a][b]=B[a+3][b+5]-32;
	    }

    return 0;
}