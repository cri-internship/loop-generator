#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(150, "random");
	float ***D = create_three_dim_float(820, 370, 880, "random");
	float *C = create_one_dim_float(230, "random");
	float *E = create_one_dim_float(420, "random");
	float ***B = create_three_dim_float(620, 250, 700, "random");

	for (int c = 0; c < 419; c++)
	  for (int b = 0; b < 419; b++)
	    for (int a = 0; a < 419; a++)
	    {
	      
	      E[a]=E[a+1]*0.582;
	    }

    return 0;
}