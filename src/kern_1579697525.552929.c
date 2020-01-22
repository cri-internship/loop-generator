#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(270, "ones");
	int *B = create_one_dim_int(760, "ones");
	int **C = create_two_dim_int(140, 120, "ones");
	int *A = create_one_dim_int(790, "ones");
	int *E = create_one_dim_int(510, "ones");

	for (int c = 0; c < 115; c++)
	  for (int b = 2; b < 135; b++)
	    for (int a = 2; a < 135; a++)
	    {
	      
	      C[a][b]=C[a+1][b+5]+0;
	      
	      C[a][b]=C[a+5][b+1]-B[a]/33+A[a]*E[a];
	      
	      E[a]=44;
	      E[a-2]=10;
	      
	      A[a]=C[a][b]/B[a]*E[a];
	      A[a+3]=C[a][b];
	    }

    return 0;
}