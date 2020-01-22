#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(850, 620, "zeros");
	float ***C = create_three_dim_float(940, 290, 750, "zeros");
	float **A = create_two_dim_float(980, 680, "zeros");
	float **D = create_two_dim_float(200, 640, "zeros");

	for (int c = 1; c < 620; c++)
	  for (int b = 5; b < 200; b++)
	    for (int a = 5; a < 200; a++)
	    {
	      
	      A[a][b]=A[a+5][b]/B[a][b]-D[a][b];
	      
	      B[a][b]=0.014;
	      B[a-5][b-1]=0.615;
	      
	      C[a][b][c]=D[a][b]-C[a][b][c]/A[a][b]+B[a][b];
	      D[a][b]=D[a-2][b]-C[a][b][c];
	    }

    return 0;
}