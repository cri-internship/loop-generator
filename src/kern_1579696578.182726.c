#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(910, 80, 280, "zeros");
	float ***B = create_three_dim_float(70, 760, 380, "zeros");
	float ***D = create_three_dim_float(730, 530, 430, "zeros");
	float **A = create_two_dim_float(390, 510, "zeros");

	for (int d = 0; d < 427; d++)
	  for (int c = 5; c < 505; c++)
	    for (int b = 2; b < 386; b++)
	      for (int a = 2; a < 386; a++)
	      {
	        
	       A[a][b]=A[a][b-5]-0.667;
	        
	       D[a][b][c]=D[a+2][b+1][c+3]+0.643;
	        
	       D[a][b][c]=D[a+2][b][c]/0.788;
	        
	       D[a][b][c]=D[a+3][b+3][c+3]*C[a][b][c]+B[a][b][c];
	        
	       A[a][b]=0.26;
	        
	       float var_a=A[a][b]*0.171;
	       float var_b=A[a][b+5]/0.374;
	      }

    return 0;
}