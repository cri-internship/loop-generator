#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(680, "zeros");
	float ***D = create_three_dim_float(930, 650, 900, "zeros");
	float **C = create_two_dim_float(40, 100, "zeros");
	float ***B = create_three_dim_float(440, 860, 420, "zeros");

	for (int d = 0; d < 420; d++)
	  for (int c = 0; c < 97; c++)
	    for (int b = 5; b < 37; b++)
	      for (int a = 5; a < 37; a++)
	      {
	        
	       A[a]=B[a][b][c];
	       D[a][b][c]=A[a]-D[a][b][c]/C[a][b];
	        
	       B[a][b][c]=B[a][b+2][c]*A[a]/D[a][b][c];
	        
	       C[a][b]=C[a+3][b+3]+B[a][b][c];
	        
	       D[a][b][c]=B[a][b][c]+C[a][b]*A[a];
	        
	       A[a]=D[a][b][c];
	        
	       C[a][b]=A[a]*0.576+B[a][b][c];
	       A[a]=A[a-5]+B[a][b][c]*D[a][b][c]/C[a][b];
	        
	       float var_a=A[a]+0.144;
	       float var_b=A[a+3]/0.726;
	      }

    return 0;
}