#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(960, 670, "ones");
	float **A = create_two_dim_float(290, 640, "ones");

	for (int c = 5; c < 640; c++)
	  for (int b = 5; b < 290; b++)
	    for (int a = 5; a < 290; a++)
	    {
	      
	      B[a][b]=B[a-5][b-2]*0.89;
	      
	      A[a][b]=A[a-2][b]-B[a][b];
	      
	      B[a][b]=B[a+4][b]/0.992;
	      
	      B[a][b]=B[a+3][b+2]-A[a][b];
	      
	      A[a][b]=0.829;
	      
	      B[a][b]=B[a][b]*A[a][b];
	    }

    return 0;
}