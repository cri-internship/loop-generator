#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(630, "zeros");
	float ***C = create_three_dim_float(260, 610, 90, "zeros");
	float ***A = create_three_dim_float(550, 280, 990, "zeros");
	float *E = create_one_dim_float(650, "zeros");
	float *D = create_one_dim_float(480, "zeros");

	for (int c = 5; c < 89; c++)
	  for (int b = 2; b < 280; b++)
	    for (int a = 5; a < 255; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b][c-5]+0.235;
	      
	      B[a]=B[a-4]-0.937;
	      
	      A[a][b][c]=A[a][b-2][c-5]/0.609;
	      
	      C[a][b][c]=E[a];
	      C[a+5][b+5][c]=0.187;
	      
	      C[a][b][c]=B[a]*C[a][b][c]-D[a]+D[a]/A[a][b][c];
	      B[a]=B[a-5]+E[a]/D[a];
	      
	      A[a][b][c]=E[a]*B[a]-D[a];
	      D[a]=E[a-5]*A[a][b][c];
	      
	      E[a]=C[a][b][c]/E[a];
	      E[a]=C[a+2][b][c+1]/E[a]+A[a][b][c]*B[a]-0.655;
	    }

    return 0;
}