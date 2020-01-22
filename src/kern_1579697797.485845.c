#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(700, 100, "ones");
	double **C = create_two_dim_double(50, 660, "ones");
	double ***D = create_three_dim_double(610, 630, 20, "ones");
	double ***A = create_three_dim_double(910, 880, 530, "ones");

	for (int c = 0; c < 15; c++)
	  for (int b = 3; b < 626; b++)
	    for (int a = 2; a < 45; a++)
	    {
	      
	      C[a][b]=C[a-2][b-3]+A[a][b][c]-D[a][b][c];
	      
	      D[a][b][c]=D[a+5][b+4][c+3]*B[a][b]/C[a][b];
	      
	      A[a][b][c]=A[a+2][b+5][c]*0.169;
	      
	      C[a][b]=C[a+5][b+3]+B[a][b]-A[a][b][c];
	      
	      C[a][b]=C[a+1][b+4]/0.743;
	      
	      D[a][b][c]=A[a][b][c]*B[a][b]/C[a][b];
	    }

    return 0;
}