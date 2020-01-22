#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(470, "zeros");
	double **B = create_two_dim_double(430, 420, "zeros");

	for (int b = 0; b < 418; b++)
	  for (int a = 4; a < 430; a++)
	  {
	    
	     B[a][b]=A[a];
	     B[a][b+2]=A[a];
	    
	     double var_c=A[a]/0.093;
	     double var_d=A[a-4]-0.641;
	  }

    return 0;
}