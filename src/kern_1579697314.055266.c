#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(110, 450, 710, "zeros");
	double ***A = create_three_dim_double(420, 310, 70, "zeros");
	double **B = create_two_dim_double(900, 110, "zeros");

	for (int d = 3; d < 69; d++)
	  for (int c = 2; c < 106; c++)
	    for (int b = 3; b < 108; b++)
	      for (int a = 3; a < 108; a++)
	      {
	        
	       A[a][b][c]=A[a][b+4][c+1]-0.715;
	        
	       C[a][b][c]=B[a][b]/A[a][b][c];
	       C[a+2][b+5][c+5]=0.542;
	        
	       B[a][b]=0.209;
	       B[a+1][b+4]=0.453;
	        
	       C[a][b][c]=C[a][b][c]/A[a][b][c];
	       B[a][b]=C[a+2][b+3][c+2]-0.409;
	        
	       A[a][b][c]=A[a][b][c]+C[a][b][c];
	       A[a][b][c]=A[a-3][b-2][c-3]+B[a][b];
	      }

    return 0;
}