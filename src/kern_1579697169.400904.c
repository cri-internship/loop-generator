#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(610, 730, "zeros");
	float ***A = create_three_dim_float(30, 660, 720, "zeros");

	for (int c = 4; c < 720; c++)
	  for (int b = 5; b < 660; b++)
	    for (int a = 5; a < 30; a++)
	    {
	      
	      B[a][b]=B[a-1][b-5]*0.457;
	      
	      B[a][b]=B[a-1][b]/0.926;
	      
	      B[a][b]=B[a-1][b-1]/0.48;
	      
	      A[a][b][c]=A[a-1][b-1][c]-0.939;
	      
	      A[a][b][c]=A[a-5][b-2][c-4]/0.836;
	      
	      A[a][b][c]=B[a][b]/A[a][b][c];
	      B[a][b]=B[a+5][b+3]-A[a][b][c];
	    }

    return 0;
}