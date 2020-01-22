#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(440, "zeros");
	double **B = create_two_dim_double(340, 420, "zeros");
	double ***D = create_three_dim_double(110, 690, 590, "zeros");
	double ***C = create_three_dim_double(700, 860, 840, "zeros");
	double ***A = create_three_dim_double(750, 990, 490, "zeros");

	for (int b = 5; b < 420; b++)
	  for (int a = 3; a < 340; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+4][a]/0.054;
	    
	     E[a]=D[a][b][a]+A[a][b][a];
	     E[a]=C[a][b][a]+B[a][b]*B[a][b];
	    
	     B[a][b]=E[a]*D[a][b][a];
	     B[a-2][b]=D[a][b][a]/E[a]+A[a][b][a];
	    
	     B[a][b]=A[a][b][a]/E[a]+B[a][b];
	     E[a]=A[a+5][b+3][a+3]/D[a][b][a]-B[a][b]*E[a]+C[a][b][a];
	    
	     double var_a=E[a]/0.092;
	     double var_b=E[a-3]/0.624;
	    
	     double var_c=C[a][b][a]+0.585;
	     double var_d=C[a-2][b-5][a-2]*0.782;
	  }

    return 0;
}