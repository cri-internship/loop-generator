#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(360, 720, "zeros");
	double ***C = create_three_dim_double(40, 170, 60, "zeros");
	double *B = create_one_dim_double(420, "zeros");
	double ***A = create_three_dim_double(350, 450, 590, "zeros");

	for (int d = 3; d < 55; d++)
	  for (int c = 2; c < 169; c++)
	    for (int b = 4; b < 38; b++)
	      for (int a = 4; a < 38; a++)
	      {
	        
	       C[a][b][c]=C[a][b][c-3]+B[a]*D[a][b]-A[a][b][c];
	        
	       D[a][b]=D[a-4][b-2]+C[a][b][c]*A[a][b][c];
	        
	       B[a]=B[a-4]/0.529;
	        
	       A[a][b][c]=A[a+5][b+1][c+3]-B[a]/D[a][b];
	        
	       C[a][b][c]=C[a+2][b+1][c+5]*A[a][b][c]-B[a];
	      }

    return 0;
}