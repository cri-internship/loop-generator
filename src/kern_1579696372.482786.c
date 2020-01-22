#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(10, 710, "zeros");
	float **C = create_two_dim_float(760, 120, "zeros");
	float ***B = create_three_dim_float(520, 610, 400, "zeros");
	float *D = create_one_dim_float(610, "zeros");

	for (int b = 0; b < 116; b++)
	  for (int a = 1; a < 610; a++)
	  {
	    
	     D[a]=D[a-1]-0.172;
	    
	     C[a][b]=C[a+2][b+4]/B[a][b][a]*A[a][b]+D[a];
	  }

    return 0;
}