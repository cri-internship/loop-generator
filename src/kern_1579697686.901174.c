#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(170, 580, "zeros");
	float *E = create_one_dim_float(740, "zeros");
	float **A = create_two_dim_float(350, 50, "zeros");
	float *C = create_one_dim_float(110, "zeros");
	float ***B = create_three_dim_float(650, 760, 890, "zeros");

	for (int d = 4; d < 50; d++)
	  for (int c = 5; c < 105; c++)
	    for (int b = 5; b < 105; b++)
	      for (int a = 5; a < 105; a++)
	      {
	        
	       E[a]=E[a]-A[a][b]/B[a][b][c]*C[a];
	       B[a][b][c]=E[a-5]/D[a][b];
	        
	       D[a][b]=A[a][b]-E[a]/B[a][b][c];
	       C[a]=A[a][b-4]-B[a][b][c]/E[a]+C[a];
	        
	       float var_a=D[a][b]-0.308;
	       float var_b=D[a+5][b]+0.518;
	        
	       float var_c=C[a]+0.276;
	       float var_d=C[a+5]/0.932;
	      }

    return 0;
}