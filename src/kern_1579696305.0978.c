#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(290, 70, 320, "random");
	float *A = create_one_dim_float(250, "random");
	float *C = create_one_dim_float(720, "random");
	float ***D = create_three_dim_float(880, 600, 820, "random");
	float ***B = create_three_dim_float(920, 600, 650, "random");

	for (int c = 0; c < 720; c++)
	  for (int b = 0; b < 720; b++)
	    for (int a = 0; a < 720; a++)
	    {
	      
	      C[a]=0.191;
	      C[a]=0.46;
	    }

    return 0;
}