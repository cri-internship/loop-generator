#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(550, 820, "random");
	float ***B = create_three_dim_float(680, 980, 280, "random");

	for (int c = 5; c < 280; c++)
	  for (int b = 4; b < 815; b++)
	    for (int a = 3; a < 549; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-4][c]*A[a][b];
	      
	      A[a][b]=A[a][b+5]-0.067;
	      
	      A[a][b]=A[a+1][b+3]+0.168;
	      
	      B[a][b][c]=B[a][b][c]+0.202;
	      A[a][b]=B[a-2][b-2][c-5]*A[a][b];
	      
	      float var_a=B[a][b][c]-0.201;
	      float var_b=B[a-3][b][c-1]*0.547;
	    }

    return 0;
}