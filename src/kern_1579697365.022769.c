#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(750, "ones");
	float **C = create_two_dim_float(410, 530, "ones");
	float ***B = create_three_dim_float(780, 790, 790, "ones");
	float **D = create_two_dim_float(810, 370, "ones");
	float ***E = create_three_dim_float(20, 30, 400, "ones");

	for (int d = 4; d < 400; d++)
	  for (int c = 4; c < 30; c++)
	    for (int b = 2; b < 20; b++)
	      for (int a = 2; a < 20; a++)
	      {
	        
	       A[a]=D[a][b]/B[a][b][c]-C[a][b];
	       C[a][b]=A[a]*E[a][b][c]-D[a][b];
	        
	       E[a][b][c]=E[a-2][b-4][c-4]-A[a]/B[a][b][c];
	        
	       C[a][b]=C[a+1][b+5]+D[a][b]*A[a]/E[a][b][c];
	        
	       B[a][b][c]=0.606;
	       B[a+3][b][c+3]=0.195;
	      }

    return 0;
}