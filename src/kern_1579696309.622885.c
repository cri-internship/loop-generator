#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(870, "zeros");
	float ***A = create_three_dim_float(440, 590, 110, "zeros");

	for (int b = 2; b < 865; b++)
	  for (int a = 2; a < 865; a++)
	  {
	    
	     B[a]=B[a-2]/0.929;
	    
	     B[a]=B[a+3]-A[a][b][a];
	    
	     B[a]=B[a+2]-0.0;
	    
	     float var_a=B[a]+0.248;
	     float var_b=B[a+5]-0.698;
	  }

    return 0;
}