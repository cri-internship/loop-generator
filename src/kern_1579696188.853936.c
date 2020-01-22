#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(620, 590, "ones");
	float ***C = create_three_dim_float(770, 30, 560, "ones");
	float *B = create_one_dim_float(260, "ones");

	for (int d = 4; d < 556; d++)
	  for (int c = 3; c < 26; c++)
	    for (int b = 3; b < 620; b++)
	      for (int a = 3; a < 620; a++)
	      {
	        
	       C[a][b][c]=0.437;
	       C[a-3][b-3][c-4]=A[a][b]/A[a][b];
	        
	       C[a][b][c]=0.585;
	        
	       A[a][b]=C[a][b][c]+B[a]-A[a][b];
	       C[a][b][c]=C[a+5][b+4][c+4]-B[a]*A[a][b];
	        
	       float var_a=A[a][b]/0.656;
	       float var_b=A[a-1][b-3]-0.086;
	        
	       B[a]=A[a][b]+C[a][b][c]*C[a][b][c];
	       B[a]=A[a][b+1]-B[a];
	        
	       float var_c=C[a][b][c]+0.318;
	       float var_d=C[a][b-1][c]*0.044;
	      }

    return 0;
}