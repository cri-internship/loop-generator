#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(110, 410, 740, "zeros");
	double **C = create_two_dim_double(150, 920, "zeros");
	double *A = create_one_dim_double(690, "zeros");
	double *D = create_one_dim_double(580, "zeros");

	for (int c = 0; c < 915; c++)
	  for (int b = 5; b < 145; b++)
	    for (int a = 5; a < 145; a++)
	    {
	      
	      A[a]=A[a-5]/0.353;
	      
	      C[a][b]=C[a+5][b+5]*B[a][b][c]/D[a];
	      
	      C[a][b]=0.64;
	      
	      double var_a=C[a][b]/0.745;
	      double var_b=C[a][b+5]/0.1;
	    }

    return 0;
}