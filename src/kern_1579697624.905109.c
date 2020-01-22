#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(320, 180, 890, "zeros");
	float **C = create_two_dim_float(550, 610, "zeros");
	float *D = create_one_dim_float(680, "zeros");
	float *A = create_one_dim_float(270, "zeros");
	float **E = create_two_dim_float(180, 200, "zeros");

	for (int b = 0; b < 176; b++)
	  for (int a = 4; a < 179; a++)
	  {
	    
	     A[a]=A[a-2]/E[a][b]-B[a][b][a]+D[a]*C[a][b];
	    
	     E[a][b]=E[a+1][b+5]+A[a]/B[a][b][a];
	    
	     C[a][b]=C[a+4][b]-0.216;
	    
	     D[a]=0.512;
	     D[a+4]=0.268;
	    
	     A[a]=0.708;
	    
	     C[a][b]=0.044;
	    
	     float var_a=B[a][b][a]-0.263;
	     float var_b=B[a+2][b+4][a+4]-0.367;
	  }

    return 0;
}