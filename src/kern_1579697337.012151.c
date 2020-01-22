#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(710, 650, "zeros");
	float **A = create_two_dim_float(570, 880, "zeros");
	float ***D = create_three_dim_float(650, 970, 200, "zeros");
	float **B = create_two_dim_float(70, 900, "zeros");

	for (int c = 1; c < 200; c++)
	  for (int b = 3; b < 647; b++)
	    for (int a = 5; a < 66; a++)
	    {
	      
	      B[a][b]=B[a][b-3]-C[a][b];
	      
	      B[a][b]=B[a+4][b]-D[a][b][c]/A[a][b];
	      
	      A[a][b]=A[a+5][b]+0.544;
	      
	      D[a][b][c]=0.095;
	      D[a-5][b-2][c-1]=C[a][b]/A[a][b]+B[a][b];
	      
	      D[a][b][c]=C[a][b]+B[a][b]*A[a][b];
	      B[a][b]=C[a-1][b-3]*D[a][b][c];
	      
	      C[a][b]=C[a][b]*0.288;
	      A[a][b]=C[a+5][b+3]+B[a][b]-A[a][b]*D[a][b][c];
	      
	      D[a][b][c]=B[a][b]+A[a][b]-0.939/D[a][b][c];
	      B[a][b]=B[a+2][b+5]+0.612;
	    }

    return 0;
}