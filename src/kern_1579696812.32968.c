#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(830, 880, "random");
	float *B = create_one_dim_float(460, "random");
	float ***C = create_three_dim_float(430, 190, 850, "random");

	for (int b = 2; b < 190; b++)
	  for (int a = 2; a < 430; a++)
	  {
	    
	     C[a][b][a]=0.407;
	     C[a-2][b-2][a-1]=0.354;
	  }

    return 0;
}