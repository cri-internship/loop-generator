#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(540, 430, "random");
	double *A = create_one_dim_double(570, "random");

	for (int b = 0; b < 427; b++)
	  for (int a = 4; a < 537; a++)
	  {
	    
	     A[a]=B[a][b];
	     A[a+5]=B[a][b];
	    
	     double var_a=A[a]+0.44;
	     double var_b=A[a-4]-0.517;
	    
	     B[a][b]=B[a][b]/0.35;
	     A[a]=B[a+3][b+3]+0.817;
	  }

    return 0;
}