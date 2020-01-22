#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(110, 230, "random");
	float ***A = create_three_dim_float(520, 310, 210, "random");

	for (int c = 5; c < 208; c++)
	  for (int b = 5; b < 229; b++)
	    for (int a = 4; a < 106; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b][c-5]*0.503;
	      
	      A[a][b][c]=A[a+4][b+4][c]+0.482;
	      
	      B[a][b]=B[a+4][b+1]/0.241;
	      
	      A[a][b][c]=B[a][b]-A[a][b][c];
	      B[a][b]=B[a][b-5]*0.592;
	      
	      float var_a=A[a][b][c]-0.327;
	      float var_b=A[a+5][b+5][c+2]+0.345;
	    }

    return 0;
}