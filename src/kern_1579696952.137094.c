#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(410, "ones");
	float *A = create_one_dim_float(850, "ones");
	float **E = create_two_dim_float(20, 330, "ones");
	float **D = create_two_dim_float(760, 780, "ones");
	float ***B = create_three_dim_float(90, 300, 570, "ones");

	for (int c = 5; c < 570; c++)
	  for (int b = 5; b < 300; b++)
	    for (int a = 5; a < 90; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-3][c-2]*E[a][b]+D[a][b]-C[a]/A[a];
	      
	      D[a][b]=D[a-5][b-4]*B[a][b][c];
	      
	      B[a][b][c]=B[a-4][b-2][c-5]-0.586;
	      
	      A[a]=A[a+1]+E[a][b]/B[a][b][c];
	      
	      D[a][b]=A[a];
	      
	      C[a]=D[a][b]-A[a]*E[a][b]/0.26;
	      C[a-3]=0.048+B[a][b][c];
	    }

    return 0;
}