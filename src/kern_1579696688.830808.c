#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(20, "random");
	double *D = create_one_dim_double(60, "random");
	double **B = create_two_dim_double(250, 620, "random");
	double ***E = create_three_dim_double(780, 60, 70, "random");
	double **A = create_two_dim_double(410, 730, "random");

	for (int b = 5; b < 620; b++)
	  for (int a = 1; a < 57; a++)
	  {
	    
	     B[a][b]=B[a-1][b-3]*0.104;
	    
	     D[a]=D[a+3]-0.436;
	    
	     double var_a=D[a]+0.323;
	     double var_b=D[a]+0.348;
	    
	     double var_c=B[a][b]-0.066;
	     double var_d=B[a][b-5]/0.79;
	  }

    return 0;
}