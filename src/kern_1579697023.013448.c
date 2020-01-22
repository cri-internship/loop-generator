#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(630, 170, 70, "zeros");
	float *B = create_one_dim_float(940, "zeros");

	for (int b = 3; b < 169; b++)
	  for (int a = 3; a < 627; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b-3][a-3]-B[a];
	    
	     B[a]=B[a+5]+A[a][b][a];
	    
	     A[a][b][a]=B[a];
	  }

    return 0;
}