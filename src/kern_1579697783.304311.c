#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(760, 290, "ones");
	double ***B = create_three_dim_double(590, 190, 240, "ones");

	for (int d = 0; d < 238; d++)
	  for (int c = 2; c < 188; c++)
	    for (int b = 5; b < 585; b++)
	      for (int a = 5; a < 585; a++)
	      {
	        
	       A[a][b]=A[a-1][b-2]+B[a][b][c];
	        
	       B[a][b][c]=B[a-5][b-1][c]-A[a][b];
	        
	       B[a][b][c]=B[a+5][b+2][c+1]*0.029;
	        
	       A[a][b]=A[a+4][b]+B[a][b][c];
	        
	       B[a][b][c]=B[a+2][b+2][c+2]+0.007;
	        
	       B[a][b][c]=B[a][b][c]+A[a][b];
	       A[a][b]=B[a][b-2][c]+0.2;
	      }

    return 0;
}