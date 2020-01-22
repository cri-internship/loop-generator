#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(690, "ones");
	float ***B = create_three_dim_float(340, 950, 140, "ones");
	float **A = create_two_dim_float(650, 530, "ones");
	float *D = create_one_dim_float(410, "ones");

	for (int c = 0; c < 136; c++)
	  for (int b = 5; b < 527; b++)
	    for (int a = 3; a < 337; a++)
	    {
	      
	      C[a]=C[a+4]*0.957;
	      
	      A[a][b]=A[a+3][b+3]+0.485;
	      
	      B[a][b][c]=A[a][b]/D[a];
	      B[a][b+3][c+1]=C[a]/A[a][b]+D[a];
	      
	      B[a][b][c]=D[a]/0.294;
	      
	      D[a]=A[a][b]*B[a][b][c];
	      C[a]=A[a-3][b]+C[a]-D[a];
	      
	      B[a][b][c]=B[a][b][c]*C[a]+A[a][b]/D[a];
	      A[a][b]=B[a-1][b-5][c]*A[a][b]-C[a]/D[a];
	    }

    return 0;
}