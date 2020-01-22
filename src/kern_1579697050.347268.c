#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(210, 50, 20, "random");
	float *A = create_one_dim_float(240, "random");
	float **C = create_two_dim_float(10, 190, "random");
	float **B = create_two_dim_float(850, 220, "random");

	for (int b = 4; b < 50; b++)
	  for (int a = 5; a < 6; a++)
	  {
	    
	     C[a][b]=C[a-5][b-3]/A[a]*D[a][b][a];
	    
	     C[a][b]=C[a-4][b-1]*0.498;
	    
	     A[a]=A[a-4]/0.243;
	    
	     C[a][b]=C[a+4][b+5]-0.095;
	    
	     D[a][b][a]=0.397;
	     D[a-1][b-4][a-2]=0.809;
	  }

    return 0;
}