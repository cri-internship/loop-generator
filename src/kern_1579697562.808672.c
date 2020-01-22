#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(610, 660, "random");
	float **C = create_two_dim_float(210, 50, "random");
	float **A = create_two_dim_float(420, 600, "random");

	for (int c = 4; c < 46; c++)
	  for (int b = 5; b < 207; b++)
	    for (int a = 5; a < 207; a++)
	    {
	      
	      C[a][b]=C[a][b-1]-A[a][b];
	      
	      B[a][b]=B[a-5][b-4]-0.337;
	      
	      A[a][b]=A[a+1][b+2]-0.846;
	      
	      B[a][b]=B[a+1][b+1]*0.434;
	      
	      A[a][b]=A[a+2][b+3]*0.677;
	      
	      A[a][b]=C[a][b]/0.835;
	      B[a][b]=C[a+3][b+4]+B[a][b];
	    }

    return 0;
}