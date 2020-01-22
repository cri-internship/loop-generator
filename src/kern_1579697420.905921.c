#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(210, "ones");
	double ***D = create_three_dim_double(940, 150, 290, "ones");
	double **A = create_two_dim_double(820, 720, "ones");
	double ***E = create_three_dim_double(970, 890, 10, "ones");
	double **B = create_two_dim_double(420, 10, "ones");

	for (int d = 4; d < 10; d++)
	  for (int c = 5; c < 145; c++)
	    for (int b = 4; b < 815; b++)
	      for (int a = 4; a < 815; a++)
	      {
	        
	       E[a][b][c]=E[a-3][b-2][c-4]/C[a];
	        
	       A[a][b]=A[a+3][b]-E[a][b][c]*D[a][b][c]+B[a][b];
	        
	       E[a][b][c]=0.985;
	        
	       double var_a=A[a][b]/0.87;
	       double var_b=A[a+5][b+1]+0.15;
	        
	       C[a]=D[a][b][c]*A[a][b]+B[a][b]-A[a][b]/E[a][b][c];
	       A[a][b]=D[a][b+5][c+1]-0.001;
	        
	       double var_c=A[a][b]+0.006;
	       double var_d=A[a-4][b-5]/0.009;
	      }

    return 0;
}