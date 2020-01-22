#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(630, 790, 940, "ones");
	float ***A = create_three_dim_float(480, 810, 30, "ones");

	for (int c = 1; c < 29; c++)
	  for (int b = 4; b < 788; b++)
	    for (int a = 5; a < 480; a++)
	    {
	      
	      B[a][b][c]=B[a+1][b][c+1]*0.238;
	      
	      B[a][b][c]=0.018;
	      
	      A[a][b][c]=B[a][b][c];
	      A[a-1][b-1][c-1]=B[a][b][c];
	      
	      A[a][b][c]=B[a][b][c]*A[a][b][c];
	      B[a][b][c]=B[a-5][b-4][c]+A[a][b][c];
	      
	      float var_a=A[a][b][c]-0.247;
	      float var_b=A[a][b][c+1]*0.489;
	      
	      float var_c=B[a][b][c]+0.226;
	      float var_d=B[a+4][b+2][c+2]/0.432;
	    }

    return 0;
}