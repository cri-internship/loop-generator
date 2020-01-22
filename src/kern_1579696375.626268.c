#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(520, 850, "zeros");
	double *C = create_one_dim_double(940, "zeros");
	double **A = create_two_dim_double(350, 10, "zeros");
	double ***D = create_three_dim_double(350, 180, 410, "zeros");
	double *E = create_one_dim_double(570, "zeros");

	for (int c = 0; c < 850; c++)
	  for (int b = 5; b < 516; b++)
	    for (int a = 5; a < 516; a++)
	    {
	      
	      E[a]=E[a]+A[a][b]*C[a];
	      E[a]=D[a][b][c]/B[a][b];
	      
	      E[a]=E[a+5]/0.062;
	      
	      B[a][b]=0.83;
	      B[a+4][b]=0.064;
	      
	      double var_a=C[a]+0.416;
	      double var_b=C[a-3]*0.252;
	      
	      double var_c=E[a]*0.169;
	      double var_d=E[a-5]-0.761;
	    }

    return 0;
}