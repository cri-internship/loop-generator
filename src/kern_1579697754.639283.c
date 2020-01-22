#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(590, "random");
	double ***B = create_three_dim_double(400, 570, 930, "random");

	for (int b = 3; b < 566; b++)
	  for (int a = 3; a < 395; a++)
	  {
	    
	     A[a]=B[a][b][a];
	     B[a][b][a]=A[a]+B[a][b][a];
	    
	     B[a][b][a]=B[a+1][b+4][a+3]*0.096;
	    
	     B[a][b][a]=B[a+5][b][a+4]*0.792;
	    
	     B[a][b][a]=B[a][b+2][a+5]*0.97;
	    
	     B[a][b][a]=B[a][b][a]+A[a];
	     A[a]=B[a-3][b-3][a-3]/A[a];
	    
	     double var_a=A[a]/0.469;
	     double var_b=A[a+2]/0.347;
	  }

    return 0;
}