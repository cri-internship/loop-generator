#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(200, "zeros");
	double **A = create_two_dim_double(10, 230, "zeros");

	for (int b = 0; b < 229; b++)
	  for (int a = 4; a < 10; a++)
	  {
	    
	     A[a][b]=A[a][b+1]+B[a];
	    
	     B[a]=A[a][b];
	     B[a-4]=A[a][b];
	    
	     double var_a=B[a]+0.643;
	     double var_b=B[a+2]+0.005;
	    
	     double var_c=B[a]/0.932;
	     double var_d=B[a+1]*0.608;
	  }

    return 0;
}