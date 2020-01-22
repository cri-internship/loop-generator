#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(370, "random");
	float *E = create_one_dim_float(990, "random");
	float ***C = create_three_dim_float(670, 330, 980, "random");
	float *D = create_one_dim_float(540, "random");
	float ***B = create_three_dim_float(530, 530, 930, "random");

	for (int b = 5; b < 365; b++)
	  for (int a = 5; a < 365; a++)
	  {
	    
	     E[a]=E[a-1]-0.755;
	    
	     E[a]=E[a+2]+0.679;
	    
	     A[a]=A[a+5]-0.591;
	    
	     float var_a=E[a]+0.963;
	    
	     float var_c=A[a]+0.487;
	     float var_d=A[a-5]*0.525;
	  }

    return 0;
}