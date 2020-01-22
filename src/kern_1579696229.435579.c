#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(270, "zeros");
	double *B = create_one_dim_double(320, "zeros");
	double ***A = create_three_dim_double(740, 430, 930, "zeros");
	double **C = create_two_dim_double(270, 260, "zeros");

	for (int d = 1; d < 925; d++)
	  for (int c = 5; c < 260; c++)
	    for (int b = 2; b < 268; b++)
	      for (int a = 2; a < 268; a++)
	      {
	        
	       A[a][b][c]=A[a][b+3][c+5]*0.172;
	        
	       B[a]=B[a+4]*0.28;
	        
	       B[a]=C[a][b]/A[a][b][c]+B[a];
	       D[a]=C[a-1][b-3]*A[a][b][c];
	        
	       C[a][b]=D[a]/C[a][b]+C[a][b]-B[a];
	       A[a][b][c]=D[a+2]*A[a][b][c]+C[a][b]-B[a];
	        
	       B[a]=D[a]/C[a][b];
	       B[a]=D[a-2]-A[a][b][c];
	        
	       D[a]=A[a][b][c]/D[a];
	       B[a]=A[a-2][b-5][c-1]*D[a]-B[a]/C[a][b];
	      }

    return 0;
}