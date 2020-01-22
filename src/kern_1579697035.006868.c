#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(400, 30, 340, "random");
	float *D = create_one_dim_float(820, "random");
	float **B = create_two_dim_float(80, 320, "random");
	float *C = create_one_dim_float(540, "random");

	for (int b = 0; b < 25; b++)
	  for (int a = 0; a < 76; a++)
	  {
	    
	     C[a]=C[a+2]+0.538;
	    
	     B[a][b]=B[a+4][b+3]*0.636;
	    
	     A[a][b][a]=A[a][b][a]/B[a][b];
	     B[a][b]=A[a+5][b+5][a+3]-C[a];
	  }

    return 0;
}