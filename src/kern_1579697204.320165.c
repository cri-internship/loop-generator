#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(1000, 280, 730, "random");
	double ***C = create_three_dim_double(620, 150, 600, "random");
	double **B = create_two_dim_double(650, 550, "random");
	double **A = create_two_dim_double(610, 210, "random");

	for (int d = 4; d < 600; d++)
	  for (int c = 5; c < 150; c++)
	    for (int b = 5; b < 610; b++)
	      for (int a = 5; a < 610; a++)
	      {
	        
	       D[a][b][c]=D[a-4][b-2][c-4]+C[a][b][c]/B[a][b];
	        
	       C[a][b][c]=C[a-4][b-1][c]/D[a][b][c]-A[a][b];
	        
	       D[a][b][c]=D[a+3][b+1][c+3]+0.394;
	        
	       A[a][b]=B[a][b]+D[a][b][c]*C[a][b][c];
	       A[a-5][b-1]=B[a][b];
	        
	       double var_a=C[a][b][c]*0.566;
	       double var_b=C[a-3][b-5][c-1]/0.317;
	        
	       B[a][b]=D[a][b][c]+0.791/C[a][b][c];
	       A[a][b]=D[a-3][b-1][c]*A[a][b]-0.696+B[a][b];
	      }

    return 0;
}