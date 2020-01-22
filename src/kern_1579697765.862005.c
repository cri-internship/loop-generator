#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(230, 120, 280, "zeros");
	float *C = create_one_dim_float(250, "zeros");
	float **A = create_two_dim_float(150, 310, "zeros");

	for (int b = 3; b < 115; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     C[a]=C[a-1]*A[a][b]/B[a][b][a];
	    
	     B[a][b][a]=B[a-5][b-2][a-1]*C[a];
	    
	     B[a][b][a]=B[a-1][b][a-4]/A[a][b];
	    
	     B[a][b][a]=B[a+2][b+2][a+5]+0.823;
	    
	     A[a][b]=A[a][b]/B[a][b][a]-C[a];
	     B[a][b][a]=A[a-3][b-3]-0.185;
	  }

    return 0;
}