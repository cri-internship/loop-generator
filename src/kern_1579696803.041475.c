#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(910, 620, "random");
	float *B = create_one_dim_float(910, "random");
	float **A = create_two_dim_float(60, 490, "random");
	float *C = create_one_dim_float(840, "random");
	float ***D = create_three_dim_float(80, 890, 940, "random");

	for (int c = 0; c < 937; c++)
	  for (int b = 1; b < 489; b++)
	    for (int a = 2; a < 60; a++)
	    {
	      
	      C[a]=A[a][b]-B[a]*E[a][b];
	      B[a]=C[a]*D[a][b][c]-D[a][b][c];
	      
	      B[a]=B[a+2]-C[a]*A[a][b];
	      
	      A[a][b]=A[a][b+1]/0.949+E[a][b]-D[a][b][c]*C[a];
	      
	      A[a][b]=0.274;
	      
	      float var_a=D[a][b][c]+0.344;
	      float var_b=D[a+3][b][c]+0.986;
	      
	      E[a][b]=D[a][b][c]-C[a]/0.146;
	      C[a]=D[a+5][b+2][c+3]*0.618+C[a]-E[a][b]/B[a];
	    }

    return 0;
}