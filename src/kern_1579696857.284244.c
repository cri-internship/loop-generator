#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(730, "ones");
	float *D = create_one_dim_float(130, "ones");
	float ***C = create_three_dim_float(260, 30, 590, "ones");
	float **B = create_two_dim_float(170, 680, "ones");

	for (int c = 0; c < 590; c++)
	  for (int b = 1; b < 30; b++)
	    for (int a = 3; a < 127; a++)
	    {
	      
	      B[a][b]=B[a-3][b-1]-A[a]*C[a][b][c]+D[a];
	      
	      D[a]=D[a+3]*B[a][b]-B[a][b];
	      
	      C[a][b][c]=C[a+1][b][c]+0.414;
	      
	      float var_a=B[a][b]/0.068;
	      float var_b=B[a][b+5]/0.057;
	      
	      B[a][b]=D[a]+B[a][b]*A[a];
	      D[a]=D[a-3]+C[a][b][c]/A[a];
	      
	      float var_c=D[a]-0.047;
	      float var_d=D[a+2]+0.063;
	    }

    return 0;
}