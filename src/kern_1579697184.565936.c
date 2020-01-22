#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(710, 880, 480, "zeros");
	double *B = create_one_dim_double(840, "zeros");

	for (int c = 0; c < 479; c++)
	  for (int b = 0; b < 876; b++)
	    for (int a = 0; a < 708; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b+4][c+1]+B[a];
	      
	      double var_a=B[a]/0.464;
	      B[a]=0.833;
	      
	      B[a]=0.34;
	    }

    return 0;
}