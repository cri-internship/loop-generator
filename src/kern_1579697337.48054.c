#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(760, "zeros");
	float ***D = create_three_dim_float(970, 180, 170, "zeros");
	float **B = create_two_dim_float(910, 420, "zeros");
	float ***C = create_three_dim_float(630, 340, 240, "zeros");

	for (int b = 5; b < 340; b++)
	  for (int a = 5; a < 630; a++)
	  {
	    
	     A[a]=A[a-5]-0.071;
	    
	     C[a][b][a]=C[a][b][a]*0.571;
	     D[a][b][a]=C[a-5][b-5][a-5]-D[a][b][a]*A[a];
	  }

    return 0;
}