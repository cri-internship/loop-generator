#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(440, "ones");
	float *A = create_one_dim_float(610, "ones");
	float ***B = create_three_dim_float(390, 420, 550, "ones");
	float ***C = create_three_dim_float(510, 10, 690, "ones");

	for (int d = 4; d < 545; d++)
	  for (int c = 2; c < 10; c++)
	    for (int b = 5; b < 385; b++)
	      for (int a = 5; a < 385; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b][c-4]*A[a]+C[a][b][c]/D[a];
	        
	       C[a][b][c]=C[a][b-2][c-3]/B[a][b][c]+D[a]-B[a][b][c];
	        
	       B[a][b][c]=B[a+5][b+2][c+5]+0.65;
	        
	       D[a]=D[a+1]+B[a][b][c];
	        
	       C[a][b][c]=0.36;
	        
	       D[a]=0.627;
	      }

    return 0;
}