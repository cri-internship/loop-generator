#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(190, "zeros");
	double **D = create_two_dim_double(680, 680, "zeros");
	double **A = create_two_dim_double(580, 530, "zeros");
	double ***B = create_three_dim_double(270, 970, 200, "zeros");

	for (int c = 4; c < 527; c++)
	  for (int b = 5; b < 189; b++)
	    for (int a = 5; a < 189; a++)
	    {
	      
	      A[a][b]=A[a-3][b-2]+D[a][b];
	      
	      C[a]=C[a-3]+0.407;
	      
	      A[a][b]=A[a][b+3]/0.02+C[a];
	      
	      double var_a=A[a][b]+0.868;
	      double var_b=A[a-5][b-4]/0.231;
	      
	      double var_c=C[a]*0.699;
	      double var_d=C[a+1]/0.311;
	    }

    return 0;
}