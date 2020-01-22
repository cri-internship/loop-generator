#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(570, 790, 270, "zeros");
	double **B = create_two_dim_double(1000, 380, "zeros");
	double ***D = create_three_dim_double(960, 20, 360, "zeros");
	double **A = create_two_dim_double(200, 200, "zeros");

	for (int b = 5; b < 200; b++)
	  for (int a = 5; a < 200; a++)
	  {
	    
	     A[a][b]=A[a-1][b-1]-0.82;
	    
	     B[a][b]=B[a-2][b-3]-C[a][b][a]/D[a][b][a];
	    
	     A[a][b]=A[a-2][b-4]*0.1;
	    
	     B[a][b]=B[a-5][b-5]*A[a][b]-D[a][b][a];
	    
	     double var_a=C[a][b][a]/0.727;
	     double var_b=C[a+1][b][a+1]/0.206;
	  }

    return 0;
}