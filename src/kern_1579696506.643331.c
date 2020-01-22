#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(330, "ones");
	float ***C = create_three_dim_float(280, 130, 230, "ones");
	float ***A = create_three_dim_float(990, 400, 370, "ones");

	for (int b = 1; b < 130; b++)
	  for (int a = 5; a < 280; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-1][a-3]+0.715;
	    
	     B[a]=B[a-5]*0.289;
	    
	     B[a]=B[a+1]-0.745;
	  }

    return 0;
}