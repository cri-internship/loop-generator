#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(470, 310, "random");
	double *B = create_one_dim_double(910, "random");
	double *C = create_one_dim_double(590, "random");
	double *A = create_one_dim_double(710, "random");
	double **E = create_two_dim_double(20, 130, "random");

	for (int b = 0; b < 310; b++)
	  for (int a = 2; a < 470; a++)
	  {
	    
	     C[a]=C[a-2]-0.496;
	    
	     D[a][b]=0.757;
	     D[a][b]=0.237;
	    
	     double var_a=C[a]+0.715;
	     double var_b=C[a+3]-0.204;
	    
	     double var_c=B[a]+0.692;
	     double var_d=B[a+3]-0.354;
	  }

    return 0;
}