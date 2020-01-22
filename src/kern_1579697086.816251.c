#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(200, 50, 720, "zeros");
	double *A = create_one_dim_double(590, "zeros");
	double ***C = create_three_dim_double(10, 690, 150, "zeros");

	for (int b = 0; b < 46; b++)
	  for (int a = 3; a < 8; a++)
	  {
	    
	     A[a]=A[a-3]*0.584;
	    
	     A[a]=A[a+3]*0.326;
	    
	     B[a][b][a]=B[a+1][b+1][a+3]/0.819;
	    
	     A[a]=C[a][b][a];
	    
	     C[a][b][a]=C[a+2][b+3][a+1]-A[a];
	    
	     double var_a=C[a][b][a]/0.305;
	     double var_b=C[a][b+3][a+2]*0.203;
	    
	     double var_c=B[a][b][a]+0.775;
	     double var_d=B[a][b+4][a]/0.172;
	  }

    return 0;
}