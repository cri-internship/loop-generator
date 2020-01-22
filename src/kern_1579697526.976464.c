#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(470, 940, "random");
	float **D = create_two_dim_float(630, 270, "random");
	float *C = create_one_dim_float(530, "random");
	float ***B = create_three_dim_float(590, 750, 230, "random");
	float ***A = create_three_dim_float(720, 720, 790, "random");

	for (int c = 0; c < 226; c++)
	  for (int b = 0; b < 748; b++)
	    for (int a = 0; a < 588; a++)
	    {
	      
	      B[a][b][c]=B[a+2][b+2][c+4]-0.5;
	    }

    return 0;
}