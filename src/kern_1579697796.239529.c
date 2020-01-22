#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(370, 770, 360, "random");
	float ***B = create_three_dim_float(450, 800, 60, "random");

	for (int c = 3; c < 57; c++)
	  for (int b = 5; b < 769; b++)
	    for (int a = 4; a < 368; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-5][c-3]/0.142;
	      
	      A[a][b][c]=A[a-1][b-5][c-1]-B[a][b][c];
	      
	      A[a][b][c]=A[a+2][b+1][c+5]/0.604;
	      
	      B[a][b][c]=0.553;
	      B[a-3][b-2][c-1]=0.337;
	      
	      float var_a=B[a][b][c]+0.164;
	      float var_b=B[a+5][b+1][c+3]+0.483;
	    }

    return 0;
}