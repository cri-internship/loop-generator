#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(560, "zeros");
	int *B = create_one_dim_int(600, "zeros");
	int ***C = create_three_dim_int(200, 450, 270, "zeros");
	int *A = create_one_dim_int(800, "zeros");

	for (int d = 1; d < 270; d++)
	  for (int c = 1; c < 450; c++)
	    for (int b = 5; b < 200; b++)
	      for (int a = 5; a < 200; a++)
	      {
	        
	       B[a]=B[a-4]+A[a]/C[a][b][c];
	        
	       C[a][b][c]=D[a]-B[a]/B[a];
	       D[a]=A[a]-C[a][b][c];
	        
	       D[a]=A[a]-C[a][b][c];
	        
	       B[a]=19;
	        
	       D[a]=C[a][b][c]+D[a];
	       B[a]=C[a-1][b-1][c]-D[a]*B[a];
	        
	       A[a]=C[a][b][c]*5;
	       C[a][b][c]=C[a-1][b-1][c-1]-D[a];
	        
	       int var_a=B[a]+11;
	       int var_b=B[a+2]*13;
	      }

    return 0;
}