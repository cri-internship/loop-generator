#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(970, 640, 70, "ones");
	float ***A = create_three_dim_float(540, 160, 810, "ones");

	for (int c = 5; c < 66; c++)
	  for (int b = 5; b < 156; b++)
	    for (int a = 5; a < 540; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-5][c]-0.418;
	      
	      A[a][b][c]=0.373;
	      
	      B[a][b][c]=0.698;
	      B[a+1][b+4][c+4]=0.132;
	      
	      B[a][b][c]=B[a][b][c]/A[a][b][c];
	      A[a][b][c]=B[a+2][b+4][c+3]+0.82;
	      
	      float var_a=B[a][b][c]/0.674;
	      float var_b=B[a+4][b+3][c+4]/0.954;
	    }

    return 0;
}