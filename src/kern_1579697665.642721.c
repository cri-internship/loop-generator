#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(140, 180, 830, "ones");
	double **B = create_two_dim_double(210, 270, "ones");
	double ***A = create_three_dim_double(430, 340, 510, "ones");

	for (int c = 5; c < 506; c++)
	  for (int b = 3; b < 180; b++)
	    for (int a = 5; a < 140; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-1][c-4]*0.697;
	      
	      C[a][b][c]=C[a][b-3][c-1]*0.635;
	      
	      A[a][b][c]=A[a][b+3][c+4]+B[a][b]*C[a][b][c];
	      
	      double var_a=C[a][b][c]/0.068;
	      double var_b=C[a-5][b-3][c-3]*0.349;
	      
	      double var_c=B[a][b]-0.389;
	      double var_d=B[a][b-1]-0.791;
	      
	      B[a][b]=C[a][b][c]-A[a][b][c]+A[a][b][c];
	      A[a][b][c]=C[a-1][b-1][c-5]/A[a][b][c];
	      
	      C[a][b][c]=B[a][b]*C[a][b][c]/A[a][b][c];
	      A[a][b][c]=B[a-4][b-1]/C[a][b][c];
	    }

    return 0;
}