#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(760, 410, 490, "random");
	double *B = create_one_dim_double(990, "random");

	for (int c = 0; c < 486; c++)
	  for (int b = 0; b < 405; b++)
	    for (int a = 2; a < 755; a++)
	    {
	      
	      B[a]=B[a-2]*A[a][b][c];
	      
	      B[a]=B[a+2]*0.522;
	      
	      A[a][b][c]=A[a+4][b+1][c+1]*0.641;
	      
	      A[a][b][c]=0.422;
	      
	      double var_a=A[a][b][c]*0.679;
	      double var_b=A[a+5][b+5][c+3]+0.012;
	    }

    return 0;
}