#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(1000, 50, 120, "random");
	double *C = create_one_dim_double(780, "random");
	double *B = create_one_dim_double(80, "random");

	for (int b = 5; b < 50; b++)
	  for (int a = 4; a < 77; a++)
	  {
	    
	     B[a]=0.793;
	     float  var_a=B[a]+0.037;
	    
	     C[a]=C[a-3]/B[a]+A[a][b][a];
	    
	     B[a]=B[a+2]-0.93;
	    
	     C[a]=C[a+5]-A[a][b][a];
	    
	     A[a][b][a]=B[a]/C[a]-C[a];
	     B[a]=B[a+3]+A[a][b][a]-C[a];
	    
	     C[a]=C[a]-A[a][b][a]/B[a];
	    
	     double var_b=A[a][b][a]/0.991;
	     double var_c=A[a-1][b-5][a-4]-0.762;
	  }

    return 0;
}