#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(300, 210, 30, "ones");
	float *B = create_one_dim_float(460, "ones");
	float **C = create_two_dim_float(160, 500, "ones");
	float **D = create_two_dim_float(20, 640, "ones");

	for (int d = 0; d < 26; d++)
	  for (int c = 5; c < 208; c++)
	    for (int b = 5; b < 15; b++)
	      for (int a = 5; a < 15; a++)
	      {
	        
	       D[a][b]=D[a][b-2]*0.692;
	        
	       B[a]=B[a-1]*0.085;
	        
	       D[a][b]=D[a+5][b]/A[a][b][c]*C[a][b]-B[a];
	        
	       float var_a=C[a][b]+0.962;
	       float var_b=C[a][b-5]-0.941;
	        
	       A[a][b][c]=C[a][b]/D[a][b];
	       D[a][b]=C[a-5][b-5]-D[a][b]/B[a]+A[a][b][c];
	        
	       float var_c=D[a][b]/0.793;
	       float var_d=D[a+1][b+2]*0.682;
	        
	       float var_e=A[a][b][c]*0.166;
	       float var_f=A[a][b+2][c+4]*0.824;
	      }

    return 0;
}