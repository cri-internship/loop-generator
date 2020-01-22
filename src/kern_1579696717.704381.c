#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(180, 490, 90, "zeros");
	float **A = create_two_dim_float(420, 570, "zeros");
	float **D = create_two_dim_float(580, 70, "zeros");
	float **B = create_two_dim_float(150, 730, "zeros");

	for (int c = 2; c < 68; c++)
	  for (int b = 4; b < 150; b++)
	    for (int a = 4; a < 150; a++)
	    {
	      
	      D[a][b]=A[a][b];
	      D[a][b]=D[a][b]-B[a][b]/C[a][b][c];
	      
	      B[a][b]=B[a-4][b-2]*D[a][b]/D[a][b]-A[a][b];
	      
	      D[a][b]=D[a][b+2]+B[a][b]/C[a][b][c]-A[a][b];
	      
	      A[a][b]=A[a][b]/B[a][b];
	      C[a][b][c]=A[a+2][b+3]+D[a][b]*B[a][b]-C[a][b][c];
	    }

    return 0;
}