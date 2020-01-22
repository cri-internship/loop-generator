#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(650, "ones");
	float ***B = create_three_dim_float(730, 470, 10, "ones");
	float *D = create_one_dim_float(180, "ones");
	float ***A = create_three_dim_float(50, 770, 640, "ones");

	for (int b = 1; b < 467; b++)
	  for (int a = 5; a < 50; a++)
	  {
	    
	     C[a]=C[a-1]+0.296;
	    
	     B[a][b][a]=B[a][b][a-3]*0.184;
	    
	     A[a][b][a]=A[a-4][b][a-5]-0.199;
	    
	     C[a]=C[a-5]+D[a];
	    
	     B[a][b][a]=0.309;
	    
	     float var_a=A[a][b][a]+0.506;
	     float var_b=A[a-3][b-1][a-3]*0.481;
	  }

    return 0;
}