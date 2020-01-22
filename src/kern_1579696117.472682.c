#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(520, 530, 330, "ones");
	double *A = create_one_dim_double(730, "ones");
	double ***B = create_three_dim_double(200, 680, 570, "ones");
	double *C = create_one_dim_double(440, "ones");

	for (int d = 1; d < 568; d++)
	  for (int c = 1; c < 677; c++)
	    for (int b = 3; b < 197; b++)
	      for (int a = 3; a < 197; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-1][c-1]/0.217;
	        
	       C[a]=C[a-3]*0.306/A[a];
	        
	       B[a][b][c]=B[a+3][b+3][c+2]*0.246;
	        
	       A[a]=A[a+3]-C[a]/D[a][b][c];
	        
	       C[a]=C[a]-A[a];
	       C[a]=A[a]*B[a][b][c];
	        
	       B[a][b][c]=A[a]-D[a][b][c]+C[a]/B[a][b][c];
	       D[a][b][c]=A[a+5]+D[a][b][c]*0.015;
	      }

    return 0;
}