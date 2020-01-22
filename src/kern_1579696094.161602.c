#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(960, 830, 790, "ones");
	double ***D = create_three_dim_double(200, 420, 40, "ones");
	double ***B = create_three_dim_double(20, 90, 390, "ones");
	double **A = create_two_dim_double(40, 390, "ones");
	double **C = create_two_dim_double(200, 930, "ones");

	for (int b = 3; b < 830; b++)
	  for (int a = 5; a < 960; a++)
	  {
	    
	     E[a][b][a]=B[a][b][a]*C[a][b]+A[a][b];
	     E[a-2][b-3][a-4]=D[a][b][a];
	    
	     double var_a=E[a][b][a]*0.381;
	     double var_b=E[a-5][b][a-3]*0.31;
	  }

    return 0;
}