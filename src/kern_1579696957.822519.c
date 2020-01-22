#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(110, 810, "ones");
	int *B = create_one_dim_int(920, "ones");

	for (int c = 4; c < 810; c++)
	  for (int b = 4; b < 110; b++)
	    for (int a = 4; a < 110; a++)
	    {
	      
	      A[a][b]=A[a][b-1]*17;
	      
	      B[a]=B[a+5]+40;
	      
	      A[a][b]=3;
	      
	      int var_a=B[a]-9;
	      int var_b=B[a-4]+32;
	    }

    return 0;
}