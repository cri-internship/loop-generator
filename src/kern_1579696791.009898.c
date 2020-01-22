#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(320, "ones");
	float ***A = create_three_dim_float(960, 580, 960, "ones");
	float **B = create_two_dim_float(480, 980, "ones");
	float *E = create_one_dim_float(10, "ones");
	float **C = create_two_dim_float(490, 240, "ones");

	for (int b = 2; b < 579; b++)
	  for (int a = 5; a < 957; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+1][a+2]-0.211/E[a];
	    
	     float var_a=A[a][b][a]+0.966;
	     float var_b=A[a][b-2][a-5]+0.821;
	  }

    return 0;
}