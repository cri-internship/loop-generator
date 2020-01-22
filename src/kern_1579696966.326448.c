#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(760, "zeros");
	float **A = create_two_dim_float(120, 120, "zeros");
	float ***B = create_three_dim_float(170, 370, 320, "zeros");
	float *C = create_one_dim_float(590, "zeros");
	float ***E = create_three_dim_float(990, 70, 850, "zeros");

	for (int b = 0; b < 117; b++)
	  for (int a = 3; a < 115; a++)
	  {
	    
	     C[a]=B[a][b][a]/E[a][b][a];
	     E[a][b][a]=C[a]+D[a]*A[a][b];
	    
	     D[a]=C[a]-E[a][b][a]+B[a][b][a];
	     D[a+3]=0.407;
	    
	     A[a][b]=0.15;
	     A[a+5][b+3]=0.516;
	    
	     C[a]=D[a]*0.871;
	    
	     float var_a=B[a][b][a]/0.832;
	     float var_b=B[a-3][b][a-1]+0.371;
	  }

    return 0;
}