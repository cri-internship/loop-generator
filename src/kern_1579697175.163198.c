#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(550, "random");
	int ***E = create_three_dim_int(380, 850, 130, "random");
	int *A = create_one_dim_int(250, "random");
	int *D = create_one_dim_int(140, "random");
	int **B = create_two_dim_int(40, 350, "random");

	for (int c = 5; c < 130; c++)
	  for (int b = 1; b < 345; b++)
	    for (int a = 2; a < 36; a++)
	    {
	      
	      C[a]=C[a+3]/45;
	      
	      B[a][b]=C[a];
	      B[a+4][b+5]=E[a][b][c]-D[a];
	      
	      E[a][b][c]=A[a];
	      E[a-2][b-1][c-5]=41;
	      
	      int var_a=D[a]-40;
	      int var_b=D[a+2]-0;
	    }

    return 0;
}