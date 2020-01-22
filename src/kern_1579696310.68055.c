#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(920, 870, "zeros");
	float ***A = create_three_dim_float(670, 440, 980, "zeros");
	float **C = create_two_dim_float(10, 710, "zeros");
	float *D = create_one_dim_float(380, "zeros");

	for (int d = 5; d < 708; d++)
	  for (int c = 3; c < 5; c++)
	    for (int b = 3; b < 5; b++)
	      for (int a = 3; a < 5; a++)
	      {
	        
	       D[a]=D[a-3]-0.77;
	        
	       C[a][b]=C[a][b-5]-0.126*B[a][b];
	        
	       C[a][b]=C[a+5][b+2]*A[a][b][c]+D[a];
	        
	       A[a][b][c]=C[a][b]/A[a][b][c];
	       D[a]=C[a-1][b-4]+A[a][b][c]-B[a][b]*D[a];
	      }

    return 0;
}