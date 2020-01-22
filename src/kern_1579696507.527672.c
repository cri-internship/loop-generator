#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(30, 880, 580, "zeros");
	float *E = create_one_dim_float(870, "zeros");
	float ***B = create_three_dim_float(770, 580, 700, "zeros");
	float *D = create_one_dim_float(590, "zeros");
	float **A = create_two_dim_float(890, 830, "zeros");

	for (int c = 0; c < 580; c++)
	  for (int b = 2; b < 580; b++)
	    for (int a = 5; a < 30; a++)
	    {
	      
	      A[a][b]=A[a-2][b-1]*0.918;
	      
	      C[a][b][c]=C[a][b-2][c]-B[a][b][c]+A[a][b]*0.846/E[a];
	      
	      A[a][b]=A[a-5][b]+C[a][b][c]-0.89/B[a][b][c]*C[a][b][c];
	      
	      E[a]=E[a-1]/0.777;
	      
	      A[a][b]=A[a+1][b+3]*0.844/D[a];
	      
	      B[a][b][c]=0.986;
	      B[a+2][b][c+5]=0.036;
	    }

    return 0;
}