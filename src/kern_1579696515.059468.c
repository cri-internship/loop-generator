#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(780, "random");
	int **B = create_two_dim_int(850, 950, "random");
	int **C = create_two_dim_int(400, 620, "random");
	int **A = create_two_dim_int(450, 850, "random");

	for (int c = 0; c < 846; c++)
	  for (int b = 1; b < 447; b++)
	    for (int a = 1; a < 447; a++)
	    {
	      
	      B[a][b]=B[a+1][b+2]/40-D[a]+C[a][b];
	      
	      D[a]=D[a+5]+28;
	      
	      A[a][b]=A[a+3][b+4]*B[a][b]+C[a][b]/D[a];
	      
	      int var_a=D[a]/21;
	      int var_b=D[a-1]*14;
	    }

    return 0;
}