#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(870, 20, "random");
	double *D = create_one_dim_double(140, "random");
	double ***E = create_three_dim_double(60, 10, 20, "random");
	double **B = create_two_dim_double(10, 980, "random");
	double **C = create_two_dim_double(430, 320, "random");

	for (int c = 2; c < 20; c++)
	  for (int b = 5; b < 10; b++)
	    for (int a = 3; a < 10; a++)
	    {
	      
	      E[a][b][c]=E[a-2][b-4][c-2]/0.793;
	      
	      B[a][b]=B[a-3][b-5]/E[a][b][c]-C[a][b]*D[a]+A[a][b];
	      
	      double var_a=D[a]-0.17;
	      double var_b=D[a]-0.628;
	    }

    return 0;
}