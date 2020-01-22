#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(800, 890, "ones");
	float ***E = create_three_dim_float(900, 490, 700, "ones");
	float **A = create_two_dim_float(380, 10, "ones");
	float ***C = create_three_dim_float(160, 980, 910, "ones");
	float *D = create_one_dim_float(220, "ones");

	for (int d = 0; d < 697; d++)
	  for (int c = 0; c < 485; c++)
	    for (int b = 5; b < 800; b++)
	      for (int a = 5; a < 800; a++)
	      {
	        
	       B[a][b]=B[a-5][b]*0.77;
	        
	       E[a][b][c]=E[a+1][b+5][c+3]-A[a][b]*C[a][b][c]+D[a]/B[a][b];
	      }

    return 0;
}