#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(950, "zeros");
	float ***A = create_three_dim_float(540, 270, 310, "zeros");
	float **D = create_two_dim_float(350, 480, "zeros");
	float **C = create_two_dim_float(470, 630, "zeros");

	for (int b = 3; b < 270; b++)
	  for (int a = 5; a < 350; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-2][a-1]-0.531;
	    
	     C[a][b]=C[a-5][b-3]-0.131;
	    
	     B[a]=D[a][b]*A[a][b][a];
	     B[a+4]=C[a][b];
	    
	     B[a]=A[a][b][a]/B[a];
	     D[a][b]=A[a][b-3][a-2]/0.899;
	    
	     float var_a=D[a][b]*0.91;
	     float var_b=D[a][b+5]/0.39;
	  }

    return 0;
}