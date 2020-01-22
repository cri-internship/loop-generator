#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(410, "zeros");
	float **E = create_two_dim_float(240, 710, "zeros");
	float *C = create_one_dim_float(200, "zeros");
	float ***A = create_three_dim_float(60, 670, 230, "zeros");
	float ***D = create_three_dim_float(590, 30, 60, "zeros");

	for (int d = 2; d < 710; d++)
	  for (int c = 3; c < 240; c++)
	    for (int b = 3; b < 240; b++)
	      for (int a = 3; a < 240; a++)
	      {
	        
	       E[a][b]=E[a-3][b-2]+B[a]*0.843;
	        
	       B[a]=B[a+4]*A[a][b][c]+E[a][b];
	      }

    return 0;
}