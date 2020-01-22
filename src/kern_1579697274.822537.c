#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(490, 110, 440, "random");
	float **A = create_two_dim_float(270, 60, "random");

	for (int b = 2; b < 57; b++)
	  for (int a = 3; a < 265; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-2][a-2]/0.676;
	    
	     B[a][b][a]=B[a+5][b+4][a+2]*A[a][b];
	    
	     float var_a=A[a][b]/0.88;
	     float var_b=A[a+5][b+3]+0.495;
	    
	     A[a][b]=B[a][b][a]/A[a][b];
	     B[a][b][a]=B[a+1][b+1][a+2]/A[a][b];
	    
	     A[a][b]=A[a][b]-B[a][b][a];
	     A[a][b]=A[a-3][b-1]+B[a][b][a];
	  }

    return 0;
}