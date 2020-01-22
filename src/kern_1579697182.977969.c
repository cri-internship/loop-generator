#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(940, 940, 370, "random");
	float ***B = create_three_dim_float(530, 890, 290, "random");
	float *C = create_one_dim_float(150, "random");

	for (int b = 0; b < 888; b++)
	  for (int a = 4; a < 527; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b][a-4]*0.903;
	    
	     A[a][b][a]=A[a+1][b+4][a+2]-0.221;
	    
	     float var_a=B[a][b][a]/0.693;
	     float var_b=B[a+3][b+2][a+3]/0.877;
	  }

    return 0;
}