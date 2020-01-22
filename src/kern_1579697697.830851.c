#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(760, 110, "zeros");
	double *D = create_one_dim_double(390, "zeros");
	double ***B = create_three_dim_double(200, 320, 340, "zeros");
	double *A = create_one_dim_double(820, "zeros");

	for (int b = 5; b < 110; b++)
	  for (int a = 5; a < 196; a++)
	  {
	    
	     C[a][b]=C[a-5][b-2]/D[a];
	    
	     B[a][b][a]=B[a-2][b-2][a]/0.623;
	    
	     B[a][b][a]=B[a+1][b+5][a+1]+0.504;
	    
	     C[a][b]=C[a][b]+A[a];
	     B[a][b][a]=C[a-3][b-5]*B[a][b][a];
	    
	     A[a]=D[a]*C[a][b]/A[a];
	     D[a]=D[a-1]*0.371;
	    
	     double var_a=B[a][b][a]+0.282;
	     double var_b=B[a+3][b+4][a+4]*0.262;
	  }

    return 0;
}