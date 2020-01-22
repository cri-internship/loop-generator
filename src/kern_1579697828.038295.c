#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(470, 920, 480, "zeros");
	float **B = create_two_dim_float(840, 40, "zeros");
	float ***C = create_three_dim_float(290, 20, 130, "zeros");

	for (int b = 3; b < 16; b++)
	  for (int a = 4; a < 287; a++)
	  {
	    
	     A[a][b][a]=A[a][b-3][a]-C[a][b][a];
	    
	     C[a][b][a]=A[a][b][a]*B[a][b];
	     C[a+2][b+4][a+3]=A[a][b][a]-B[a][b];
	    
	     float var_a=B[a][b]/0.595;
	     float var_b=B[a+1][b]+0.065;
	    
	     float var_c=B[a][b]/0.719;
	     float var_d=B[a-4][b-1]/0.73;
	  }

    return 0;
}