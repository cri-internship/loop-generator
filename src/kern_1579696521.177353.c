#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(870, "ones");
	double *B = create_one_dim_double(260, "ones");
	double ***C = create_three_dim_double(180, 460, 10, "ones");
	double **A = create_two_dim_double(490, 840, "ones");
	double **E = create_two_dim_double(470, 20, "ones");

	for (int d = 3; d < 10; d++)
	  for (int c = 1; c < 18; c++)
	    for (int b = 5; b < 180; b++)
	      for (int a = 5; a < 180; a++)
	      {
	        
	       A[a][b]=A[a][b-1]/0.841;
	        
	       C[a][b][c]=C[a-5][b-1][c-3]-0.013;
	        
	       D[a]=D[a-1]*0.474;
	        
	       D[a]=C[a][b][c]*A[a][b]+A[a][b];
	        
	       B[a]=B[a+4]/D[a];
	        
	       E[a][b]=0.299;
	       E[a+1][b+2]=0.721;
	      }

    return 0;
}