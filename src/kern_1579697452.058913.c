#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(860, "random");
	float **E = create_two_dim_float(990, 830, "random");
	float **C = create_two_dim_float(260, 690, "random");
	float *A = create_one_dim_float(760, "random");
	float ***B = create_three_dim_float(720, 790, 430, "random");

	for (int c = 5; c < 690; c++)
	  for (int b = 5; b < 260; b++)
	    for (int a = 5; a < 260; a++)
	    {
	      
	      C[a][b]=C[a-5][b-1]/E[a][b]*B[a][b][c]+A[a]-D[a];
	      
	      C[a][b]=C[a-5][b-5]/0.538;
	      
	      D[a]=D[a]-C[a][b]*B[a][b][c]+E[a][b];
	      A[a]=D[a+4]*A[a]+B[a][b][c];
	      
	      B[a][b][c]=D[a]+C[a][b]*0.031;
	      C[a][b]=D[a+2]*0.319;
	    }

    return 0;
}