#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(80, 880, 680, "ones");
	double **C = create_two_dim_double(460, 20, "ones");
	double **B = create_two_dim_double(950, 80, "ones");

	for (int c = 1; c < 680; c++)
	  for (int b = 0; b < 80; b++)
	    for (int a = 4; a < 80; a++)
	    {
	      
	      A[a][b][c]=B[a][b];
	      A[a-4][b][c-1]=C[a][b];
	      
	      double var_a=B[a][b]-0.468;
	      double var_b=B[a-2][b]+0.439;
	    }

    return 0;
}