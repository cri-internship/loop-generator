#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(70, 750, "zeros");
	float **C = create_two_dim_float(880, 320, "zeros");
	float ***E = create_three_dim_float(530, 510, 570, "zeros");
	float *A = create_one_dim_float(720, "zeros");
	float ***B = create_three_dim_float(320, 290, 170, "zeros");

	for (int c = 0; c < 169; c++)
	  for (int b = 5; b < 289; b++)
	    for (int a = 5; a < 68; a++)
	    {
	      
	      C[a][b]=C[a-1][b-1]-0.462;
	      
	      C[a][b]=C[a-1][b-4]+B[a][b][c]-A[a];
	      
	      B[a][b][c]=B[a-1][b-5][c]+D[a][b]/E[a][b][c]*C[a][b]-C[a][b];
	      
	      D[a][b]=D[a][b+2]+0.703;
	      
	      D[a][b]=D[a+2][b+4]+0.185;
	      
	      B[a][b][c]=B[a+2][b+1][c+1]*0.171;
	      
	      A[a]=C[a][b]-B[a][b][c]/D[a][b]*E[a][b][c]+A[a];
	      E[a][b][c]=C[a-5][b-4]+B[a][b][c]-D[a][b]*E[a][b][c];
	    }

    return 0;
}