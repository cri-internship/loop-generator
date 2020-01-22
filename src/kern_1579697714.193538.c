#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(730, 440, 830, "ones");
	float **B = create_two_dim_float(480, 640, "ones");
	float **C = create_two_dim_float(230, 610, "ones");

	for (int b = 5; b < 436; b++)
	  for (int a = 5; a < 726; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-5][a-5]*B[a][b]-0.75;
	    
	     C[a][b]=A[a][b][a]-C[a][b]+B[a][b];
	     A[a][b][a]=A[a+4][b+4][a+1]+C[a][b]/B[a][b];
	  }

    return 0;
}