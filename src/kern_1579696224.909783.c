#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(240, 950, 980, "random");
	float *B = create_one_dim_float(610, "random");

	for (int b = 5; b < 608; b++)
	  for (int a = 5; a < 608; a++)
	  {
	    
	     B[a]=B[a+2]/A[a][b][a];
	    
	     A[a][b][a]=B[a]/0.262;
	     B[a]=B[a-5]-A[a][b][a];
	  }

    return 0;
}