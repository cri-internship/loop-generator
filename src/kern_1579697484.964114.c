#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(420, 430, "random");
	float ***C = create_three_dim_float(740, 150, 60, "random");
	float ***E = create_three_dim_float(380, 840, 430, "random");
	float *D = create_one_dim_float(940, "random");
	float *A = create_one_dim_float(440, "random");

	for (int b = 0; b < 426; b++)
	  for (int a = 0; a < 417; a++)
	  {
	    
	     B[a][b]=B[a+3][b+4]/0.165;
	  }

    return 0;
}