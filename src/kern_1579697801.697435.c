#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(400, 630, "random");
	float **B = create_two_dim_float(620, 410, "random");

	for (int c = 5; c < 410; c++)
	  for (int b = 3; b < 398; b++)
	    for (int a = 3; a < 398; a++)
	    {
	      
	      B[a][b]=A[a][b];
	      B[a][b]=B[a][b]-0.702;
	      
	      A[a][b]=A[a+2][b+2]-B[a][b];
	      
	      A[a][b]=A[a+1][b+3]/B[a][b];
	      
	      A[a][b]=A[a+1][b]+B[a][b];
	    }

    return 0;
}