#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(940, "ones");
	float ***C = create_three_dim_float(340, 310, 510, "ones");
	float ***A = create_three_dim_float(800, 340, 240, "ones");
	float *B = create_one_dim_float(180, "ones");

	for (int b = 0; b < 308; b++)
	  for (int a = 3; a < 335; a++)
	  {
	    
	     D[a]=D[a-3]*0.39;
	    
	     C[a][b][a]=C[a][b][a]-A[a][b][a]/B[a];
	     A[a][b][a]=C[a+2][b+2][a+5]*D[a]-A[a][b][a]+B[a];
	  }

    return 0;
}