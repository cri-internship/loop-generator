#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(390, 720, 50, "ones");
	double **A = create_two_dim_double(990, 490, "ones");

	for (int d = 0; d < 47; d++)
	  for (int c = 2; c < 485; c++)
	    for (int b = 5; b < 385; b++)
	      for (int a = 5; a < 385; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-1][c]/A[a][b];
	        
	       B[a][b][c]=B[a+3][b+1][c+3]/0.963;
	        
	       B[a][b][c]=B[a+2][b+1][c]/A[a][b];
	        
	       A[a][b]=A[a+5][b+5]/0.971;
	        
	       B[a][b][c]=B[a+5][b+3][c]+A[a][b];
	        
	       A[a][b]=B[a][b][c];
	      }

    return 0;
}