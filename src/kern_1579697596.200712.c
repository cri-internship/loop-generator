#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(650, 220, 420, "ones");
	double *C = create_one_dim_double(530, "ones");
	double ***E = create_three_dim_double(830, 200, 20, "ones");
	double **A = create_two_dim_double(910, 980, "ones");
	double ***B = create_three_dim_double(670, 560, 150, "ones");

	for (int d = 4; d < 150; d++)
	  for (int c = 2; c < 560; c++)
	    for (int b = 5; b < 530; b++)
	      for (int a = 5; a < 530; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-2][c-4]/E[a][b][c]-A[a][b];
	        
	       C[a]=C[a-4]-0.246;
	        
	       C[a]=E[a][b][c];
	        
	       A[a][b]=0.819;
	       A[a-1][b]=0.913;
	        
	       A[a][b]=0.548;
	      }

    return 0;
}