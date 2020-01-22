#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(580, "zeros");
	float *E = create_one_dim_float(450, "zeros");
	float *D = create_one_dim_float(940, "zeros");
	float **C = create_two_dim_float(750, 470, "zeros");
	float ***A = create_three_dim_float(950, 90, 330, "zeros");

	for (int c = 2; c < 330; c++)
	  for (int b = 3; b < 90; b++)
	    for (int a = 5; a < 449; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-3][c-2]/0.653;
	      
	      B[a]=B[a-5]*0.189;
	      
	      C[a][b]=D[a]*A[a][b][c]/E[a]+C[a][b];
	      D[a]=0.6;
	      
	      C[a][b]=C[a+2][b+3]*D[a]+D[a]/A[a][b][c]-0.918;
	      
	      B[a]=E[a]-A[a][b][c];
	      
	      D[a]=E[a]*0.504-B[a]+A[a][b][c];
	      B[a]=E[a+1]-A[a][b][c]/B[a]+C[a][b];
	      
	      E[a]=C[a][b]-B[a]+A[a][b][c]/D[a]*E[a];
	      A[a][b][c]=C[a+1][b+2]+B[a]-D[a];
	    }

    return 0;
}