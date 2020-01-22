#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(930, 110, "ones");
	double **C = create_two_dim_double(60, 170, "ones");
	double ***B = create_three_dim_double(360, 880, 180, "ones");
	double *A = create_one_dim_double(930, "ones");

	for (int d = 1; d < 106; d++)
	  for (int c = 3; c < 59; c++)
	    for (int b = 3; b < 59; b++)
	      for (int a = 3; a < 59; a++)
	      {
	        
	       D[a][b]=D[a-3][b-1]+0.956;
	        
	       D[a][b]=D[a][b+4]/C[a][b]*B[a][b][c]+A[a];
	        
	       A[a]=0.118;
	       A[a+2]=0.819;
	        
	       C[a][b]=0.509;
	       C[a+1][b+1]=0.769;
	      }

    return 0;
}