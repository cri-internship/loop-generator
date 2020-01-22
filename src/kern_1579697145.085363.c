#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(820, 650, "random");
	float **C = create_two_dim_float(260, 710, "random");
	float *E = create_one_dim_float(280, "random");
	float ***D = create_three_dim_float(670, 290, 180, "random");
	float ***B = create_three_dim_float(320, 560, 810, "random");

	for (int c = 5; c < 180; c++)
	  for (int b = 5; b < 290; b++)
	    for (int a = 5; a < 260; a++)
	    {
	      
	      C[a][b]=C[a-3][b-4]-D[a][b][c]+B[a][b][c]/0.29*E[a];
	      
	      E[a]=E[a-5]/C[a][b]+0.581*B[a][b][c]-D[a][b][c];
	      
	      D[a][b][c]=D[a][b-5][c-5]/0.98;
	      
	      C[a][b]=C[a-2][b-5]*0.663;
	    }

    return 0;
}