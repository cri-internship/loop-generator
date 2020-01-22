#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(180, "random");
	float ***A = create_three_dim_float(710, 410, 230, "random");
	float ***B = create_three_dim_float(170, 730, 510, "random");

	for (int b = 2; b < 726; b++)
	  for (int a = 2; a < 165; a++)
	  {
	    
	     B[a][b][a]=B[a+5][b+4][a]/C[a]+A[a][b][a];
	    
	     B[a][b][a]=A[a][b][a]/C[a];
	    
	     C[a]=B[a][b][a]-A[a][b][a];
	     A[a][b][a]=B[a+4][b+1][a]/0.011-C[a];
	  }

    return 0;
}