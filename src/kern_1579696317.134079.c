#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(860, 540, 760, "zeros");
	double *B = create_one_dim_double(100, "zeros");
	double **A = create_two_dim_double(970, 140, "zeros");
	double *E = create_one_dim_double(190, "zeros");
	double *C = create_one_dim_double(160, "zeros");

	for (int d = 0; d < 140; d++)
	  for (int c = 5; c < 100; c++)
	    for (int b = 5; b < 100; b++)
	      for (int a = 5; a < 100; a++)
	      {
	        
	       E[a]=E[a-5]/D[a][b][c];
	        
	       D[a][b][c]=A[a][b]*E[a];
	       A[a][b]=C[a]+B[a]-C[a]*E[a];
	        
	       E[a]=A[a][b]+B[a];
	        
	       A[a][b]=C[a]/A[a][b]*B[a];
	       B[a]=C[a-2]*0.233+D[a][b][c];
	      }

    return 0;
}