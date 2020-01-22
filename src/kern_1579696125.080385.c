#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***E = create_three_dim_float(120, 320, 970, "random");
	float *A = create_one_dim_float(630, "random");
	float ***C = create_three_dim_float(660, 840, 160, "random");
	float *D = create_one_dim_float(340, "random");
	float **B = create_two_dim_float(650, 420, "random");

	for (int c = 0; c < 419; c++)
	  for (int b = 0; b < 645; b++)
	    for (int a = 0; a < 645; a++)
	    {
	      
	      B[a][b]=B[a+5][b+1]/0.658;
	    }

    return 0;
}