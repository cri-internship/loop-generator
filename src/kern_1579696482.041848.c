#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(340, 920, 100, "random");
	float *B = create_one_dim_float(270, "random");
	float *C = create_one_dim_float(180, "random");

	for (int d = 0; d < 95; d++)
	  for (int c = 0; c < 917; c++)
	    for (int b = 0; b < 265; b++)
	      for (int a = 0; a < 265; a++)
	      {
	        
	       A[a][b][c]=A[a+2][b+2][c+2]+B[a]/C[a];
	        
	       A[a][b][c]=A[a+4][b+3][c+5]+0.411;
	        
	       B[a]=0.383;
	       B[a+5]=0.406;
	      }

    return 0;
}