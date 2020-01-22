#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(100, "random");
	float **D = create_two_dim_float(10, 50, "random");
	float **B = create_two_dim_float(750, 190, "random");
	float **E = create_two_dim_float(670, 170, "random");
	float ***A = create_three_dim_float(940, 700, 220, "random");

	for (int d = 2; d < 165; d++)
	  for (int c = 3; c < 98; c++)
	    for (int b = 3; b < 98; b++)
	      for (int a = 3; a < 98; a++)
	      {
	        
	       E[a][b]=E[a-3][b-2]*0.591;
	        
	       E[a][b]=E[a][b+2]+D[a][b]*C[a];
	        
	       E[a][b]=E[a+2][b+5]-B[a][b];
	        
	       C[a]=C[a+2]+E[a][b];
	        
	       B[a][b]=A[a][b][c]+D[a][b];
	       B[a+1][b+5]=C[a]/D[a][b]-E[a][b];
	        
	       float var_a=B[a][b]-0.369;
	       float var_b=B[a+4][b+3]/0.461;
	      }

    return 0;
}