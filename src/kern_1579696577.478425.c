#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(770, "random");
	double *A = create_one_dim_double(980, "random");
	double ***B = create_three_dim_double(650, 50, 560, "random");

	for (int b = 0; b < 47; b++)
	  for (int a = 0; a < 646; a++)
	  {
	    
	     B[a][b][a]=B[a+2][b+1][a+4]-0.442;
	    
	     B[a][b][a]=B[a+1][b+3][a+3]/0.243;
	    
	     A[a]=0.352;
	     A[a]=0.041;
	    
	     double var_a=B[a][b][a]*0.664;
	     double var_b=B[a+2][b+3][a+4]-0.519;
	    
	     C[a]=B[a][b][a]-A[a]/0.913;
	     B[a][b][a]=B[a+1][b+1][a+4]/A[a]+0.129;
	  }

    return 0;
}