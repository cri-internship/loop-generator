#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(800, 70, "ones");
	float ***B = create_three_dim_float(470, 380, 760, "ones");

	for (int d = 0; d < 758; d++)
	  for (int c = 0; c < 70; c++)
	    for (int b = 3; b < 470; b++)
	      for (int a = 3; a < 470; a++)
	      {
	        
	       A[a][b]=A[a-3][b]-B[a][b][c];
	        
	       B[a][b][c]=B[a][b+4][c+2]+A[a][b];
	      }

    return 0;
}