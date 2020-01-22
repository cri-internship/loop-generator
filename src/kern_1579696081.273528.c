#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(400, 640, "ones");
	double **B = create_two_dim_double(690, 910, "ones");

	for (int b = 2; b < 640; b++)
	  for (int a = 5; a < 400; a++)
	  {
	    
	     B[a][b]=B[a+1][b]-A[a][b];
	    
	     B[a][b]=A[a][b];
	    
	     double var_a=B[a][b]-0.316;
	     double var_b=B[a-5][b-1]*0.498;
	    
	     double var_c=A[a][b]+0.854;
	     double var_d=A[a-1][b-2]/0.069;
	  }

    return 0;
}