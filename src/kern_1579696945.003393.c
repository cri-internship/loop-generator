#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(970, 650, 170, "ones");
	float **E = create_two_dim_float(300, 280, "ones");
	float *A = create_one_dim_float(700, "ones");
	float *B = create_one_dim_float(550, "ones");
	float ***C = create_three_dim_float(720, 600, 30, "ones");

	for (int b = 5; b < 280; b++)
	  for (int a = 5; a < 300; a++)
	  {
	    
	     C[a][b][a]=C[a][b][a+2]-0.672;
	    
	     D[a][b][a]=A[a]+B[a]-E[a][b]/C[a][b][a];
	     D[a-1][b-4][a-4]=A[a]*C[a][b][a]-0.907;
	    
	     B[a]=D[a][b][a]*E[a][b];
	     B[a-3]=E[a][b]*A[a]/C[a][b][a];
	    
	     E[a][b]=E[a][b]+B[a]/D[a][b][a]-A[a]*C[a][b][a];
	     A[a]=E[a-5][b-5]/A[a]-D[a][b][a];
	  }

    return 0;
}