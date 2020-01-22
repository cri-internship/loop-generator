#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(40, 240, 200, "random");
	double ***A = create_three_dim_double(530, 160, 940, "random");
	double *B = create_one_dim_double(770, "random");

	for (int b = 5; b < 236; b++)
	  for (int a = 3; a < 35; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-3][a-2]*A[a][b][a];
	    
	     C[a][b][a]=C[a-3][b-5][a-1]/0.944;
	    
	     B[a]=B[a+1]*0.812;
	    
	     double var_a=C[a][b][a]-0.486;
	     double var_b=C[a-1][b-2][a-3]/0.525;
	    
	     double var_c=C[a][b][a]+0.864;
	     double var_d=C[a+2][b+4][a]+0.112;
	  }

    return 0;
}