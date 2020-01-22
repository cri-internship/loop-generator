#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(280, 740, "random");
	float ***B = create_three_dim_float(720, 580, 440, "random");
	float ***A = create_three_dim_float(670, 290, 920, "random");
	float *C = create_one_dim_float(770, "random");

	for (int b = 0; b < 287; b++)
	  for (int a = 0; a < 277; a++)
	  {
	    
	     D[a][b]=D[a+3][b+1]+0.596;
	    
	     B[a][b][a]=0.477;
	     B[a+4][b+1][a+5]=0.369;
	    
	     float var_a=A[a][b][a]-0.111;
	     float var_b=A[a+5][b+3][a+3]*0.488;
	  }

    return 0;
}