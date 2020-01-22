#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(30, 820, "zeros");
	float *C = create_one_dim_float(290, "zeros");
	float ***B = create_three_dim_float(720, 450, 340, "zeros");
	float *D = create_one_dim_float(560, "zeros");

	for (int c = 4; c < 340; c++)
	  for (int b = 4; b < 448; b++)
	    for (int a = 5; a < 26; a++)
	    {
	      
	      D[a]=D[a-1]+C[a]-B[a][b][c]*A[a][b];
	      
	      B[a][b][c]=B[a-1][b-1][c-4]+0.15;
	      
	      A[a][b]=A[a-2][b-4]+D[a];
	      
	      A[a][b]=A[a+4][b+1]*0.425-C[a];
	      
	      B[a][b][c]=0.872;
	      
	      A[a][b]=B[a][b][c]-C[a]+A[a][b]/0.599;
	      D[a]=B[a-5][b-4][c-2]+A[a][b]-D[a];
	    }

    return 0;
}