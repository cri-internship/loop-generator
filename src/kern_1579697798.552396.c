#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(100, 640, 270, "zeros");
	float *A = create_one_dim_float(690, "zeros");
	float ***C = create_three_dim_float(470, 150, 570, "zeros");
	float **D = create_two_dim_float(50, 350, "zeros");

	for (int b = 5; b < 145; b++)
	  for (int a = 4; a < 98; a++)
	  {
	    
	     D[a][b]=A[a]-B[a][b][a]*D[a][b];
	     A[a]=C[a][b][a];
	    
	     C[a][b][a]=C[a+1][b+5][a]/0.286;
	    
	     C[a][b][a]=C[a+3][b][a+3]-A[a]*D[a][b]/B[a][b][a];
	    
	     B[a][b][a]=C[a][b][a]-D[a][b]+A[a];
	     B[a+2][b+2][a]=D[a][b]-0.012;
	    
	     float var_a=C[a][b][a]-0.933;
	     float var_b=C[a-4][b-5][a-4]/0.217;
	  }

    return 0;
}