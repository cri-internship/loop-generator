#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(790, 390, "random");
	int *B = create_one_dim_int(820, "random");

	for (int c = 5; c < 390; c++)
	  for (int b = 4; b < 790; b++)
	    for (int a = 4; a < 790; a++)
	    {
	      
	      B[a]=B[a-4]-25;
	      
	      A[a][b]=A[a-1][b-4]/4;
	      
	      B[a]=A[a][b]/B[a];
	      A[a][b]=A[a-2][b-5]*B[a];
	      
	      B[a]=B[a]+A[a][b];
	      A[a][b]=B[a-3]-8;
	      
	      int var_a=B[a]/36;
	      int var_b=B[a-2]/22;
	    }

    return 0;
}