#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(650, 950, "zeros");
	float **B = create_two_dim_float(610, 890, "zeros");
	float *A = create_one_dim_float(210, "zeros");
	float **C = create_two_dim_float(370, 760, "zeros");

	for (int d = 5; d < 760; d++)
	  for (int c = 5; c < 210; c++)
	    for (int b = 5; b < 210; b++)
	      for (int a = 5; a < 210; a++)
	      {
	        
	       B[a][b]=B[a-4][b-3]-0.193;
	        
	       C[a][b]=C[a-2][b-4]/B[a][b]-D[a][b]*A[a];
	        
	       float var_a=D[a][b]/0.502;
	       float var_b=D[a][b-5]/0.555;
	        
	       float var_c=A[a]/0.522;
	       float var_d=A[a-5]-0.876;
	        
	       D[a][b]=C[a][b]*A[a]/D[a][b]-B[a][b];
	       C[a][b]=C[a-4][b-2]-D[a][b];
	      }

    return 0;
}