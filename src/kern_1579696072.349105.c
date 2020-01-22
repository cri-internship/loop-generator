#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(200, 810, 110, "zeros");
	float *A = create_one_dim_float(100, "zeros");
	float ***C = create_three_dim_float(60, 580, 990, "zeros");
	float *E = create_one_dim_float(90, "zeros");
	float ***D = create_three_dim_float(290, 640, 70, "zeros");

	for (int d = 5; d < 70; d++)
	  for (int c = 3; c < 579; c++)
	    for (int b = 5; b < 56; b++)
	      for (int a = 5; a < 56; a++)
	      {
	        
	       B[a][b][c]=B[a][b-1][c-1]*0.372;
	        
	       C[a][b][c]=C[a+4][b+1][c+2]/B[a][b][c]+D[a][b][c]*A[a]-E[a];
	        
	       E[a]=0.889;
	       E[a-3]=0.907;
	        
	       A[a]=C[a][b][c];
	       A[a-1]=C[a][b][c]+E[a]/B[a][b][c];
	        
	       E[a]=D[a][b][c]*E[a]+B[a][b][c];
	       D[a][b][c]=D[a-5][b-3][c-5]-B[a][b][c]+0.517/E[a]*C[a][b][c];
	        
	       float var_a=C[a][b][c]+0.418;
	       float var_b=C[a-2][b-2][c-5]+0.233;
	      }

    return 0;
}