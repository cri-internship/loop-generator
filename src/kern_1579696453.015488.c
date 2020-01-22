#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(100, 690, 940, "zeros");
	float *C = create_one_dim_float(130, "zeros");
	float **D = create_two_dim_float(210, 30, "zeros");
	float ***E = create_three_dim_float(280, 770, 250, "zeros");
	float ***A = create_three_dim_float(190, 110, 850, "zeros");

	for (int d = 4; d < 248; d++)
	  for (int c = 0; c < 30; c++)
	    for (int b = 4; b < 126; b++)
	      for (int a = 4; a < 126; a++)
	      {
	        
	       C[a]=C[a-2]-B[a][b][c];
	        
	       C[a]=C[a+2]+0.747;
	        
	       C[a]=A[a][b][c]-0.075;
	       B[a][b][c]=A[a-1][b][c-4]/C[a]*D[a][b]+B[a][b][c];
	        
	       float var_a=D[a][b]+0.266;
	       float var_b=D[a-4][b]+0.174;
	        
	       A[a][b][c]=E[a][b][c]*B[a][b][c]/D[a][b];
	       E[a][b][c]=E[a+2][b+3][c+2]*A[a][b][c]-B[a][b][c];
	      }

    return 0;
}