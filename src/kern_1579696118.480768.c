#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(720, 260, "ones");
	double **A = create_two_dim_double(590, 930, "ones");
	double **B = create_two_dim_double(830, 470, "ones");

	for (int b = 4; b < 257; b++)
	  for (int a = 4; a < 590; a++)
	  {
	    
	     C[a][b]=C[a-2][b]+B[a][b];
	    
	     B[a][b]=B[a-3][b-4]-0.76;
	    
	     A[a][b]=A[a-4][b-2]/0.148;
	    
	     double var_a=C[a][b]/0.936;
	     double var_b=C[a+1][b+3]+0.483;
	  }

    return 0;
}