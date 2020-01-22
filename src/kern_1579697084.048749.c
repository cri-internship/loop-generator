#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(990, 50, 560, "random");
	double ***A = create_three_dim_double(670, 490, 530, "random");
	double **C = create_two_dim_double(800, 710, "random");

	for (int d = 5; d < 525; d++)
	  for (int c = 3; c < 50; c++)
	    for (int b = 2; b < 668; b++)
	      for (int a = 2; a < 668; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-3][c-5]-A[a][b][c];
	        
	       C[a][b]=C[a-2][b-1]/0.434;
	        
	       B[a][b][c]=B[a+1][b][c+1]/0.983;
	        
	       A[a][b][c]=A[a+2][b][c+5]/B[a][b][c]+C[a][b];
	        
	       C[a][b]=A[a][b][c]/B[a][b][c];
	        
	       C[a][b]=C[a][b]+B[a][b][c]/A[a][b][c];
	       A[a][b][c]=C[a+4][b+5]-B[a][b][c];
	      }

    return 0;
}