#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(690, "random");
	int *B = create_one_dim_int(140, "random");
	int **C = create_two_dim_int(590, 900, "random");
	int *A = create_one_dim_int(320, "random");

	for (int c = 1; c < 900; c++)
	  for (int b = 3; b < 140; b++)
	    for (int a = 3; a < 140; a++)
	    {
	      
	      B[a]=B[a-3]*16;
	      
	      B[a]=B[a-2]-A[a]*D[a]+C[a][b];
	      
	      B[a]=10;
	      
	      D[a]=28;
	      D[a]=16;
	      
	      C[a][b]=B[a]-D[a]+A[a];
	      C[a][b-1]=B[a]+D[a];
	      
	      int var_b=B[a]-35;
	      int var_c=B[a-1]*38;
	    }

    return 0;
}