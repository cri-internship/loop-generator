#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(280, 330, 940, "ones");
	float **B = create_two_dim_float(850, 570, "ones");
	float **C = create_two_dim_float(560, 20, "ones");
	float **A = create_two_dim_float(760, 920, "ones");

	for (int d = 0; d < 940; d++)
	  for (int c = 5; c < 330; c++)
	    for (int b = 0; b < 277; b++)
	      for (int a = 0; a < 277; a++)
	      {
	        
	       B[a][b]=B[a][b-5]/0.362;
	        
	       D[a][b][c]=A[a][b]/B[a][b];
	       D[a+3][b][c]=B[a][b];
	      }

    return 0;
}