#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(630, "random");
	float *A = create_one_dim_float(720, "random");
	float ***C = create_three_dim_float(530, 740, 700, "random");
	float ***B = create_three_dim_float(300, 400, 160, "random");
	float ***E = create_three_dim_float(530, 110, 740, "random");

	for (int d = 0; d < 157; d++)
	  for (int c = 0; c < 109; c++)
	    for (int b = 4; b < 297; b++)
	      for (int a = 4; a < 297; a++)
	      {
	        
	       D[a]=D[a-4]+C[a][b][c]-E[a][b][c];
	        
	       E[a][b][c]=D[a]-B[a][b][c];
	       C[a][b][c]=E[a][b][c]*A[a];
	        
	       B[a][b][c]=B[a+2][b+5][c+2]/D[a]*A[a]-E[a][b][c];
	        
	       C[a][b][c]=C[a+5][b+5][c+4]+0.563;
	        
	       B[a][b][c]=0.554;
	        
	       float var_a=A[a]+0.804;
	       float var_b=A[a+5]/0.66;
	        
	       float var_c=E[a][b][c]-0.317;
	       float var_d=E[a][b+1][c+5]-0.443;
	      }

    return 0;
}