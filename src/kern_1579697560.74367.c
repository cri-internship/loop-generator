#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(890, 330, "random");
	double *A = create_one_dim_double(710, "random");

	for (int b = 0; b < 327; b++)
	  for (int a = 3; a < 710; a++)
	  {
	    
	     B[a][b]=A[a];
	     B[a+4][b+2]=A[a];
	    
	     double var_a=A[a]/0.427;
	     double var_b=A[a-3]/0.911;
	    
	     double var_c=B[a][b]*0.982;
	     double var_d=B[a][b+3]-0.585;
	  }

    return 0;
}