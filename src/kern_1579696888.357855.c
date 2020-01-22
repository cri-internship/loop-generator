#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(950, "random");
	float ***E = create_three_dim_float(420, 290, 480, "random");
	float *A = create_one_dim_float(200, "random");
	float **B = create_two_dim_float(690, 260, "random");
	float **D = create_two_dim_float(340, 490, "random");

	for (int d = 0; d < 477; d++)
	  for (int c = 5; c < 260; c++)
	    for (int b = 0; b < 200; b++)
	      for (int a = 0; a < 200; a++)
	      {
	        
	       B[a][b]=B[a][b-5]+0.728;
	        
	       C[a]=C[a+3]-B[a][b]+A[a];
	        
	       E[a][b][c]=E[a+3][b+5][c+3]/D[a][b];
	        
	       C[a]=0.843;
	        
	       float var_a=A[a]-0.287;
	      }

    return 0;
}