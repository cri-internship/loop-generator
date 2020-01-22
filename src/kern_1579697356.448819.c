#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(240, 890, "random");
	float ***B = create_three_dim_float(350, 210, 550, "random");
	float **D = create_two_dim_float(950, 710, "random");
	float **C = create_two_dim_float(990, 720, "random");

	for (int d = 0; d < 547; d++)
	  for (int c = 1; c < 208; c++)
	    for (int b = 4; b < 240; b++)
	      for (int a = 4; a < 240; a++)
	      {
	        
	       A[a][b]=A[a-4][b-1]+0.793-D[a][b];
	        
	       C[a][b]=0.112;
	       C[a-2][b-1]=0.577;
	        
	       D[a][b]=B[a][b][c]+C[a][b];
	       B[a][b][c]=B[a+5][b+2][c+3]-A[a][b]+D[a][b];
	      }

    return 0;
}