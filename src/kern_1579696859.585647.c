#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(550, 90, 1000, "random");
	float ***A = create_three_dim_float(430, 690, 340, "random");
	float *C = create_one_dim_float(340, "random");
	float *D = create_one_dim_float(60, "random");

	for (int d = 0; d < 336; d++)
	  for (int c = 5; c < 85; c++)
	    for (int b = 3; b < 58; b++)
	      for (int a = 3; a < 58; a++)
	      {
	        
	       B[a][b][c]=B[a+3][b+5][c+4]+0.825;
	        
	       B[a][b][c]=B[a+4][b+4][c]*0.827;
	        
	       D[a]=B[a][b][c]/0.015-C[a];
	       D[a+2]=C[a]/A[a][b][c]+0.855;
	        
	       float var_a=A[a][b][c]-0.492;
	       float var_b=A[a-3][b-5][c]-0.945;
	        
	       float var_c=A[a][b][c]+0.193;
	       float var_d=A[a][b+3][c+4]+0.711;
	      }

    return 0;
}