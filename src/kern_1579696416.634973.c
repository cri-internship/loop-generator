#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(490, 440, "random");
	double ***C = create_three_dim_double(660, 620, 280, "random");
	double *A = create_one_dim_double(450, "random");

	for (int d = 0; d < 280; d++)
	  for (int c = 3; c < 435; c++)
	    for (int b = 5; b < 450; b++)
	      for (int a = 5; a < 450; a++)
	      {
	        
	       A[a]=A[a-5]+C[a][b][c];
	        
	       B[a][b]=A[a]/A[a];
	       C[a][b][c]=B[a][b]/C[a][b][c];
	        
	       C[a][b][c]=C[a-4][b-3][c]/0.06;
	        
	       B[a][b]=B[a+3][b+5]/0.725;
	        
	       B[a][b]=B[a+1][b]*0.546;
	        
	       B[a][b]=B[a+3][b+3]/C[a][b][c];
	        
	       B[a][b]=B[a][b]+C[a][b][c]*0.942;
	       A[a]=B[a-3][b-2]/0.725;
	      }

    return 0;
}