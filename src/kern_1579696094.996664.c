#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(60, "random");
	int *A = create_one_dim_int(780, "random");
	int **C = create_two_dim_int(590, 920, "random");
	int ***B = create_three_dim_int(960, 600, 960, "random");

	for (int c = 0; c < 956; c++)
	  for (int b = 1; b < 600; b++)
	    for (int a = 5; a < 586; a++)
	    {
	      
	      A[a]=A[a-1]-43;
	      
	      A[a]=A[a+3]*D[a]+C[a][b]/50;
	      
	      C[a][b]=C[a+4][b+1]-A[a]*42;
	      
	      A[a]=A[a+5]/3;
	      
	      B[a][b][c]=B[a+4][b][c+4]/8;
	      
	      C[a][b]=42;
	      
	      int var_a=A[a]/2;
	      int var_b=A[a+1]/21;
	    }

    return 0;
}