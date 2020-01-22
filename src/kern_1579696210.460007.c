#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(950, 230, 710, "ones");
	float **C = create_two_dim_float(880, 90, "ones");
	float *A = create_one_dim_float(830, "ones");

	for (int b = 5; b < 228; b++)
	  for (int a = 5; a < 828; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-5][a-4]+0.332;
	    
	     B[a][b][a]=B[a+4][b+2][a+5]+A[a];
	    
	     A[a]=A[a+2]+B[a][b][a]*C[a][b];
	  }

    return 0;
}