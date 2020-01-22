#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(510, 300, "ones");
	double ***A = create_three_dim_double(310, 890, 660, "ones");
	double **C = create_two_dim_double(940, 900, "ones");

	for (int d = 3; d < 660; d++)
	  for (int c = 4; c < 300; c++)
	    for (int b = 5; b < 310; b++)
	      for (int a = 5; a < 310; a++)
	      {
	        
	       C[a][b]=C[a-4][b-4]+0.456;
	        
	       C[a][b]=C[a-5][b-4]/0.513;
	        
	       C[a][b]=C[a+1][b+3]/0.459;
	        
	       A[a][b][c]=A[a][b][c]/C[a][b]-0.459;
	       B[a][b]=A[a-2][b][c-3]+B[a][b]-C[a][b];
	        
	       C[a][b]=B[a][b]*A[a][b][c]-C[a][b];
	       C[a][b]=B[a-4][b]-A[a][b][c]*C[a][b];
	      }

    return 0;
}