#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(280, 360, "random");
	double ***B = create_three_dim_double(510, 660, 840, "random");

	for (int d = 4; d < 840; d++)
	  for (int c = 4; c < 358; c++)
	    for (int b = 4; b < 276; b++)
	      for (int a = 4; a < 276; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-3][c-4]+A[a][b];
	        
	       A[a][b]=A[a-2][b-4]-B[a][b][c];
	        
	       A[a][b]=A[a+4][b+2]/0.23;
	        
	       A[a][b]=A[a+1][b]*0.448;
	        
	       B[a][b][c]=A[a][b];
	      }

    return 0;
}