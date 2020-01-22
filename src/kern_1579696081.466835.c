#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(430, 860, "zeros");
	double **D = create_two_dim_double(850, 10, "zeros");
	double **C = create_two_dim_double(930, 520, "zeros");
	double *B = create_one_dim_double(210, "zeros");
	double ***A = create_three_dim_double(380, 100, 800, "zeros");

	for (int d = 0; d < 795; d++)
	  for (int c = 0; c < 6; c++)
	    for (int b = 5; b < 209; b++)
	      for (int a = 5; a < 209; a++)
	      {
	        
	       B[a]=B[a-5]-0.873;
	        
	       E[a][b]=E[a][b+1]+0.25;
	        
	       B[a]=B[a+1]+A[a][b][c]*C[a][b]-D[a][b]/D[a][b];
	        
	       A[a][b][c]=A[a+1][b][c+5]/0.288;
	        
	       D[a][b]=D[a+5][b+4]-0.574;
	        
	       E[a][b]=0.84;
	        
	       A[a][b][c]=B[a]+E[a][b]/B[a]*0.879;
	      }

    return 0;
}