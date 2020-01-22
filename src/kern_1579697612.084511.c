#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(690, 570, "ones");
	double ***B = create_three_dim_double(300, 280, 900, "ones");

	for (int d = 4; d < 897; d++)
	  for (int c = 4; c < 276; c++)
	    for (int b = 5; b < 295; b++)
	      for (int a = 5; a < 295; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-3][c-4]+0.398;
	        
	       A[a][b]=A[a-5][b-4]-0.659;
	        
	       B[a][b][c]=B[a+2][b+1][c+2]+0.637;
	        
	       B[a][b][c]=B[a+5][b][c+2]-A[a][b];
	        
	       A[a][b]=0.588;
	        
	       B[a][b][c]=B[a][b][c]+A[a][b];
	       A[a][b]=B[a+3][b+4][c+3]/A[a][b];
	      }

    return 0;
}