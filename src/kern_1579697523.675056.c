#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(680, "zeros");
	double ***E = create_three_dim_double(660, 890, 150, "zeros");
	double **B = create_two_dim_double(660, 620, "zeros");
	double ***D = create_three_dim_double(420, 880, 620, "zeros");
	double *C = create_one_dim_double(60, "zeros");

	for (int b = 2; b < 880; b++)
	  for (int a = 5; a < 59; a++)
	  {
	    
	     D[a][b][a]=D[a-5][b-2][a-4]/E[a][b][a]-B[a][b]+C[a];
	    
	     A[a]=C[a]+A[a]-D[a][b][a]/B[a][b];
	     C[a]=E[a][b][a]-B[a][b];
	    
	     A[a]=0.174;
	    
	     double var_a=C[a]*0.928;
	     double var_b=C[a+1]/0.752;
	  }

    return 0;
}