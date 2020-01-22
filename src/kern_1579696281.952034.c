#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(600, 930, "random");
	float ***C = create_three_dim_float(420, 210, 450, "random");
	float *B = create_one_dim_float(1000, "random");

	for (int b = 0; b < 928; b++)
	  for (int a = 5; a < 598; a++)
	  {
	    
	     B[a]=0.995;
	     B[a-5]=0.156;
	    
	     A[a][b]=A[a][b]/C[a][b][a]+B[a];
	     C[a][b][a]=A[a+2][b+2]-B[a]+C[a][b][a];
	  }

    return 0;
}