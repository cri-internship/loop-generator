#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(570, 630, "zeros");
	float **E = create_two_dim_float(280, 530, "zeros");
	float ***A = create_three_dim_float(490, 160, 560, "zeros");
	float *B = create_one_dim_float(760, "zeros");
	float ***C = create_three_dim_float(820, 300, 990, "zeros");

	for (int c = 1; c < 990; c++)
	  for (int b = 5; b < 300; b++)
	    for (int a = 0; a < 275; a++)
	    {
	      
	      C[a][b][c]=D[a][b]*E[a][b];
	      C[a][b-5][c-1]=B[a]+A[a][b][c]-B[a];
	      
	      D[a][b]=E[a][b]-0.141;
	      A[a][b][c]=E[a+5][b+2]/A[a][b][c]+C[a][b][c]-D[a][b]*B[a];
	    }

    return 0;
}