#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(280, 680, "zeros");
	double ***C = create_three_dim_double(390, 200, 270, "zeros");
	double *A = create_one_dim_double(260, "zeros");
	double **E = create_two_dim_double(450, 630, "zeros");
	double ***B = create_three_dim_double(180, 660, 500, "zeros");

	for (int d = 4; d < 267; d++)
	  for (int c = 3; c < 200; c++)
	    for (int b = 1; b < 259; b++)
	      for (int a = 1; a < 259; a++)
	      {
	        
	       A[a]=A[a+1]*C[a][b][c];
	        
	       C[a][b][c]=C[a+2][b][c+3]*E[a][b]+D[a][b];
	        
	       D[a][b]=D[a][b]/B[a][b][c]+A[a]*B[a][b][c];
	       E[a][b]=D[a][b+1]/A[a];
	        
	       double var_a=C[a][b][c]+0.75;
	       double var_b=C[a-1][b-3][c-4]+0.729;
	      }

    return 0;
}