#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(80, 370, 650, "ones");
	float ***B = create_three_dim_float(850, 900, 490, "ones");
	float **A = create_two_dim_float(180, 960, "ones");

	for (int c = 0; c < 958; c++)
	  for (int b = 0; b < 177; b++)
	    for (int a = 0; a < 177; a++)
	    {
	      
	      float var_a=A[a][b]+0.955;
	      float var_b=A[a+3][b+2]-0.625;
	    }

    return 0;
}