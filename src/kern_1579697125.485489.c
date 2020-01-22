#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(120, 70, 600, "ones");
	double **A = create_two_dim_double(260, 660, "ones");
	double ***D = create_three_dim_double(870, 400, 500, "ones");
	double **B = create_two_dim_double(610, 480, "ones");
	double *E = create_one_dim_double(580, "ones");

	for (int d = 4; d < 596; d++)
	  for (int c = 5; c < 65; c++)
	    for (int b = 4; b < 117; b++)
	      for (int a = 4; a < 117; a++)
	      {
	        
	       C[a][b][c]=C[a][b][c-4]*D[a][b][c];
	        
	       C[a][b][c]=C[a+3][b][c+3]*0.046;
	        
	       double var_a=E[a]+0.764;
	       E[a]=0.276;
	        
	       C[a][b][c]=C[a+1][b+5][c+4]+0.291;
	        
	       B[a][b]=0.489;
	       B[a+3][b+4]=0.351;
	        
	       B[a][b]=B[a][b]/C[a][b][c]*D[a][b][c]-E[a];
	       C[a][b][c]=B[a-4][b-5]*E[a]+D[a][b][c]/C[a][b][c];
	      }

    return 0;
}