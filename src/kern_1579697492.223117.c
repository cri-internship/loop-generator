#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(10, "random");
	double **A = create_two_dim_double(930, 990, "random");
	double **C = create_two_dim_double(70, 500, "random");
	double *B = create_one_dim_double(750, "random");
	double ***D = create_three_dim_double(700, 370, 890, "random");

	for (int c = 5; c < 990; c++)
	  for (int b = 4; b < 10; b++)
	    for (int a = 4; a < 10; a++)
	    {
	      
	      E[a]=E[a-3]-B[a]*C[a][b]+A[a][b];
	      
	      A[a][b]=A[a-4][b-5]/0.702;
	      
	      double var_a=B[a]/0.16;
	      B[a]=0.661;
	      
	      B[a]=B[a+2]/0.322;
	    }

    return 0;
}