#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(220, "random");
	double *E = create_one_dim_double(230, "random");
	double ***A = create_three_dim_double(670, 450, 560, "random");
	double *B = create_one_dim_double(390, "random");
	double *D = create_one_dim_double(720, "random");

	for (int c = 5; c < 560; c++)
	  for (int b = 0; b < 450; b++)
	    for (int a = 2; a < 390; a++)
	    {
	      
	      A[a][b][c]=A[a][b][c-5]/0.941;
	      
	      D[a]=D[a-2]+A[a][b][c];
	      
	      D[a]=D[a+3]-C[a]*B[a];
	      
	      double var_a=B[a]/0.655;
	      B[a]=0.88;
	      
	      C[a]=D[a]-E[a]/A[a][b][c]+C[a];
	      D[a]=D[a+4]*A[a][b][c]+B[a];
	    }

    return 0;
}