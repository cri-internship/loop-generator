#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(880, "ones");
	double ***B = create_three_dim_double(170, 570, 770, "ones");

	for (int b = 0; b < 569; b++)
	  for (int a = 5; a < 168; a++)
	  {
	    
	     A[a]=A[a-5]*0.585;
	    
	     A[a]=0.511;
	    
	     double var_a=B[a][b][a]-0.468;
	     double var_b=B[a+2][b+1][a+2]/0.525;
	    
	     A[a]=A[a]+B[a][b][a];
	     B[a][b][a]=A[a+1]/0.468;
	  }

    return 0;
}