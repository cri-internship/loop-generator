#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(700, "random");
	float *C = create_one_dim_float(930, "random");
	float ***B = create_three_dim_float(150, 540, 690, "random");
	float **A = create_two_dim_float(680, 910, "random");

	for (int c = 5; c < 929; c++)
	  for (int b = 5; b < 929; b++)
	    for (int a = 5; a < 929; a++)
	    {
	      
	      C[a]=C[a-5]-0.449;
	      
	      C[a]=C[a+1]/A[a][b];
	    }

    return 0;
}