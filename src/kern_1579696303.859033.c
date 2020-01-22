#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(200, 700, 810, "zeros");
	float ***E = create_three_dim_float(710, 120, 300, "zeros");
	float ***C = create_three_dim_float(180, 870, 70, "zeros");
	float **B = create_two_dim_float(420, 170, "zeros");
	float **D = create_two_dim_float(660, 130, "zeros");

	for (int d = 5; d < 67; d++)
	  for (int c = 4; c < 120; c++)
	    for (int b = 3; b < 180; b++)
	      for (int a = 3; a < 180; a++)
	      {
	        
	       C[a][b][c]=C[a][b-2][c-5]*E[a][b][c]/B[a][b]+A[a][b][c]-D[a][b];
	        
	       E[a][b][c]=E[a][b-1][c-5]-0.822;
	        
	       D[a][b]=D[a+3][b+3]/0.497;
	        
	       A[a][b][c]=A[a+5][b+1][c+1]/0.552;
	        
	       C[a][b][c]=C[a][b+2][c+3]-0.149;
	        
	       D[a][b]=D[a][b]/C[a][b][c]+C[a][b][c]-A[a][b][c];
	       B[a][b]=D[a-2][b-4]+A[a][b][c];
	      }

    return 0;
}