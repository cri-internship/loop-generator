#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(110, 850, 400, "ones");
	float ***B = create_three_dim_float(930, 970, 550, "ones");
	float **A = create_two_dim_float(50, 460, "ones");

	for (int d = 3; d < 395; d++)
	  for (int c = 1; c < 847; c++)
	    for (int b = 5; b < 105; b++)
	      for (int a = 5; a < 105; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+3][c]/0.385;
	        
	       C[a][b][c]=C[a+5][b+3][c+5]*B[a][b][c]/B[a][b][c];
	        
	       B[a][b][c]=B[a+4][b+1][c+4]-0.846;
	        
	       C[a][b][c]=0.032;
	      }

    return 0;
}