#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(970, 240, 660, "ones");
	float ***D = create_three_dim_float(430, 460, 100, "ones");
	float **E = create_two_dim_float(840, 920, "ones");
	float ***B = create_three_dim_float(890, 90, 780, "ones");
	float **C = create_two_dim_float(960, 400, "ones");

	for (int d = 0; d < 99; d++)
	  for (int c = 4; c < 87; c++)
	    for (int b = 0; b < 427; b++)
	      for (int a = 0; a < 427; a++)
	      {
	        
	       C[a][b]=C[a][b-4]/B[a][b][c]-E[a][b]*A[a][b][c]+0.835;
	        
	       C[a][b]=C[a+3][b+5]/0.521;
	        
	       A[a][b][c]=A[a][b+5][c+2]*C[a][b]/E[a][b];
	        
	       D[a][b][c]=D[a+2][b+1][c+1]*B[a][b][c]+E[a][b]-C[a][b]/A[a][b][c];
	        
	       B[a][b][c]=D[a][b][c]/A[a][b][c]*E[a][b];
	       B[a][b+3][c+3]=A[a][b][c]+E[a][b];
	        
	       D[a][b][c]=E[a][b]/C[a][b]-A[a][b][c];
	      }

    return 0;
}