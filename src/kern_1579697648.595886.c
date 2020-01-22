#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(550, 410, 120, "zeros");
	double ***D = create_three_dim_double(260, 740, 900, "zeros");
	double *A = create_one_dim_double(900, "zeros");
	double ***C = create_three_dim_double(610, 160, 170, "zeros");

	for (int b = 5; b < 157; b++)
	  for (int a = 4; a < 260; a++)
	  {
	    
	     D[a][b][a]=D[a-4][b-5][a-4]+C[a][b][a]/B[a][b][a];
	    
	     B[a][b][a]=B[a-1][b-5][a-3]-0.376;
	    
	     B[a][b][a]=B[a][b-4][a-4]/0.841;
	    
	     C[a][b][a]=D[a][b][a]+A[a];
	     A[a]=D[a][b][a-3]-0.988*B[a][b][a]/A[a];
	    
	     double var_a=C[a][b][a]+0.844;
	     double var_b=C[a+2][b+3][a+2]-0.678;
	    
	     double var_c=C[a][b][a]-0.807;
	     double var_d=C[a+2][b][a]/0.231;
	  }

    return 0;
}