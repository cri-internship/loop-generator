#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(670, 450, "random");
	float *B = create_one_dim_float(630, "random");

	for (int c = 0; c < 445; c++)
	  for (int b = 0; b < 667; b++)
	    for (int a = 0; a < 667; a++)
	    {
	      
	      float var_a=A[a][b]*0.514;
	      float var_b=A[a+3][b+5]+0.546;
	    }

    return 0;
}