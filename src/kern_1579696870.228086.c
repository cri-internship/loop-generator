#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(720, 220, "zeros");
	float **A = create_two_dim_float(180, 650, "zeros");
	float *B = create_one_dim_float(790, "zeros");
	float ***C = create_three_dim_float(690, 80, 820, "zeros");
	float *E = create_one_dim_float(830, "zeros");

	for (int c = 0; c < 815; c++)
	  for (int b = 3; b < 77; b++)
	    for (int a = 5; a < 685; a++)
	    {
	      
	      D[a][b]=C[a][b][c]+B[a]-A[a][b]*E[a];
	      C[a][b][c]=D[a][b]/C[a][b][c]+E[a]-B[a];
	      
	      A[a][b]=B[a]-D[a][b];
	      B[a]=D[a][b]-A[a][b]*C[a][b][c]/E[a];
	      
	      D[a][b]=D[a][b+3]*A[a][b]+E[a]-C[a][b][c];
	      
	      B[a]=C[a][b][c]-B[a]+E[a]*A[a][b];
	      E[a]=C[a-5][b-3][c]-E[a]/D[a][b];
	      
	      float var_c=C[a][b][c]-0.29;
	      float var_d=C[a+5][b+3][c+5]/0.111;
	    }

    return 0;
}