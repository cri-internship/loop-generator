#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(610, 1000, "ones");
	float **B = create_two_dim_float(600, 890, "ones");
	float **D = create_two_dim_float(910, 790, "ones");
	float ***C = create_three_dim_float(300, 730, 100, "ones");

	for (int c = 1; c < 100; c++)
	  for (int b = 5; b < 730; b++)
	    for (int a = 5; a < 300; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-3][c-1]-D[a][b]+B[a][b]/A[a][b];
	      
	      D[a][b]=D[a-5][b-3]*0.85;
	      
	      D[a][b]=D[a-2][b-1]-0.351;
	      
	      A[a][b]=A[a-4][b-5]/C[a][b][c];
	      
	      A[a][b]=A[a+4][b+1]-B[a][b]*D[a][b]/C[a][b][c];
	      
	      B[a][b]=A[a][b]*0.845;
	      B[a-5][b-1]=C[a][b][c]-A[a][b];
	      
	      A[a][b]=A[a][b]+C[a][b][c];
	      D[a][b]=A[a-1][b-5]+C[a][b][c];
	    }

    return 0;
}