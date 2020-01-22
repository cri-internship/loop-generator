#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(140, 960, "random");
	int *B = create_one_dim_int(360, "random");

	for (int c = 2; c < 959; c++)
	  for (int b = 2; b < 137; b++)
	    for (int a = 2; a < 137; a++)
	    {
	      
	      A[a][b]=A[a][b-2]-3;
	      
	      B[a]=B[a]+A[a][b];
	      B[a]=A[a][b];
	      
	      A[a][b]=A[a+3][b+1]*B[a];
	      
	      int var_a=B[a]-17;
	      int var_b=B[a+4]-10;
	    }

    return 0;
}