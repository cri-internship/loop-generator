#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(450, 330, 130, "zeros");
	double *B = create_one_dim_double(260, "zeros");

	for (int c = 3; c < 127; c++)
	  for (int b = 4; b < 328; b++)
	    for (int a = 2; a < 258; a++)
	    {
	      
	      B[a]=B[a-2]/A[a][b][c];
	      
	      B[a]=B[a+2]-0.072;
	      
	      A[a][b][c]=0.639;
	      A[a-1][b-4][c-3]=0.023;
	      
	      double var_a=A[a][b][c]*0.804;
	      double var_b=A[a+1][b+2][c+3]*0.774;
	    }

    return 0;
}