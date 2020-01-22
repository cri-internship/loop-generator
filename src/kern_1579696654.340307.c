#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(380, 140, "random");
	double ***C = create_three_dim_double(610, 640, 740, "random");
	double **B = create_two_dim_double(320, 190, "random");
	double ***D = create_three_dim_double(790, 300, 780, "random");

	for (int c = 0; c < 735; c++)
	  for (int b = 0; b < 137; b++)
	    for (int a = 5; a < 377; a++)
	    {
	      
	      C[a][b][c]=C[a][b][c+1]-0.267;
	      
	      A[a][b]=A[a+1][b+3]*0.557;
	      
	      C[a][b][c]=C[a+1][b+3][c+5]/0.723;
	      
	      C[a][b][c]=C[a+5][b][c]-0.286*B[a][b];
	      
	      A[a][b]=0.552;
	      
	      double var_a=D[a][b][c]+0.023;
	      double var_b=D[a+4][b+1][c+4]*0.706;
	      
	      C[a][b][c]=A[a][b]*D[a][b][c]+B[a][b];
	      B[a][b]=A[a-5][b]-B[a][b]+D[a][b][c]*C[a][b][c];
	    }

    return 0;
}