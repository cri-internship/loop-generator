#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(940, 500, 520, "zeros");
	double *A = create_one_dim_double(380, "zeros");
	double ***D = create_three_dim_double(150, 930, 40, "zeros");
	double **C = create_two_dim_double(80, 300, "zeros");

	for (int b = 5; b < 300; b++)
	  for (int a = 4; a < 80; a++)
	  {
	    
	     C[a][b]=C[a-1][b-4]+B[a][b][a]/D[a][b][a]-A[a];
	    
	     B[a][b][a]=B[a+1][b+5][a]*C[a][b]-C[a][b]/A[a];
	    
	     A[a]=0.069;
	     A[a-4]=0.923;
	    
	     B[a][b][a]=0.529;
	    
	     double var_a=B[a][b][a]-0.192;
	     double var_b=B[a-2][b-5][a-2]*0.735;
	  }

    return 0;
}