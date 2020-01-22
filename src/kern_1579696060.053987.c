#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(710, 860, 210, "zeros");
	float **C = create_two_dim_float(920, 780, "zeros");
	float *B = create_one_dim_float(210, "zeros");

	for (int b = 5; b < 779; b++)
	  for (int a = 5; a < 205; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-2][a-5]-C[a][b];
	    
	     A[a][b][a]=A[a-5][b-5][a-1]+0.29;
	    
	     B[a]=B[a+5]/A[a][b][a];
	    
	     A[a][b][a]=A[a][b+2][a+4]-B[a]*B[a];
	    
	     C[a][b]=C[a+2][b+1]+B[a]*A[a][b][a];
	  }

    return 0;
}