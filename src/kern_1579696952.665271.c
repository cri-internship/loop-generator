#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(810, 630, 420, "ones");
	float **B = create_two_dim_float(440, 200, "ones");

	for (int c = 5; c < 415; c++)
	  for (int b = 5; b < 195; b++)
	    for (int a = 2; a < 439; a++)
	    {
	      
	      B[a][b]=B[a-2][b-1]-A[a][b][c];
	      
	      A[a][b][c]=A[a-2][b-5][c-5]/0.761;
	      
	      B[a][b]=B[a+1][b+5]+0.84;
	      
	      A[a][b][c]=A[a][b+2][c+2]+0.513;
	      
	      float var_a=A[a][b][c]-0.293;
	      float var_b=A[a+2][b+4][c+2]*0.502;
	      
	      float var_c=A[a][b][c]-0.886;
	      float var_d=A[a+2][b+5][c+5]+0.901;
	      
	      B[a][b]=B[a][b]-A[a][b][c];
	      A[a][b][c]=B[a+1][b+1]-A[a][b][c];
	    }

    return 0;
}