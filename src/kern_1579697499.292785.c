#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(400, 980, "random");
	float ***A = create_three_dim_float(580, 280, 170, "random");
	float **B = create_two_dim_float(880, 440, "random");
	float **C = create_two_dim_float(170, 420, "random");

	for (int b = 0; b < 277; b++)
	  for (int a = 5; a < 166; a++)
	  {
	    
	     C[a][b]=C[a][b+3]-0.734;
	    
	     A[a][b][a]=A[a][b+3][a+2]-0.263;
	    
	     D[a][b]=D[a+5][b+2]-C[a][b]+0.293*A[a][b][a];
	    
	     C[a][b]=C[a+4][b+1]/0.736;
	    
	     A[a][b][a]=A[a][b][a]-D[a][b];
	     C[a][b]=A[a-5][b][a]/0.643;
	  }

    return 0;
}