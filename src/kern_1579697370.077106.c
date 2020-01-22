#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(400, 290, 800, "random");
	float **B = create_two_dim_float(350, 710, "random");

	for (int d = 0; d < 799; d++)
	  for (int c = 5; c < 286; c++)
	    for (int b = 2; b < 350; b++)
	      for (int a = 2; a < 350; a++)
	      {
	        
	       B[a][b]=B[a-2][b-5]+A[a][b][c];
	        
	       A[a][b][c]=A[a+2][b+3][c+1]+B[a][b];
	        
	       A[a][b][c]=A[a+4][b+4][c]+0.945;
	        
	       B[a][b]=0.736;
	      }

    return 0;
}