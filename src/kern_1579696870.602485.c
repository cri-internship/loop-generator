#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(1000, "zeros");
	float ***A = create_three_dim_float(160, 160, 170, "zeros");
	float *E = create_one_dim_float(40, "zeros");
	float ***B = create_three_dim_float(270, 340, 970, "zeros");
	float **C = create_two_dim_float(430, 290, "zeros");

	for (int c = 0; c < 285; c++)
	  for (int b = 5; b < 40; b++)
	    for (int a = 5; a < 40; a++)
	    {
	      
	      E[a]=E[a-5]/C[a][b]+B[a][b][c]*A[a][b][c]-D[a];
	      
	      C[a][b]=C[a+3][b+3]*E[a]/B[a][b][c]-A[a][b][c]+E[a];
	      
	      C[a][b]=E[a]*A[a][b][c]-B[a][b][c];
	    }

    return 0;
}