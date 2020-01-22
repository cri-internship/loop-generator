#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(840, 700, 280, "ones");
	float *A = create_one_dim_float(530, "ones");
	float ***D = create_three_dim_float(730, 730, 70, "ones");
	float *C = create_one_dim_float(940, "ones");
	float **E = create_two_dim_float(510, 150, "ones");

	for (int c = 5; c < 150; c++)
	  for (int b = 5; b < 510; b++)
	    for (int a = 5; a < 510; a++)
	    {
	      
	      A[a]=E[a][b]/D[a][b][c];
	      B[a][b][c]=A[a]+C[a];
	      
	      E[a][b]=E[a-5][b-5]-A[a]+B[a][b][c];
	      
	      C[a]=0.668;
	      C[a-4]=0.5;
	      
	      E[a][b]=E[a][b]*C[a]/B[a][b][c]-D[a][b][c]+A[a];
	      C[a]=E[a-5][b]-B[a][b][c]/C[a]+A[a];
	      
	      D[a][b][c]=C[a]*B[a][b][c]+A[a]/E[a][b]-0.215;
	      A[a]=C[a+3]*B[a][b][c]+E[a][b]/D[a][b][c];
	    }

    return 0;
}