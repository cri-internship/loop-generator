#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(140, 330, 980, "random");
	float ***A = create_three_dim_float(470, 710, 840, "random");

	for (int c = 3; c < 837; c++)
	  for (int b = 4; b < 325; b++)
	    for (int a = 5; a < 137; a++)
	    {
	      
	      B[a][b][c]=B[a+3][b+5][c+4]+0.014;
	      
	      A[a][b][c]=A[a+2][b+3][c+3]*B[a][b][c];
	      
	      B[a][b][c]=B[a][b+1][c+5]+A[a][b][c];
	      
	      B[a][b][c]=B[a+3][b+2][c+1]-0.97;
	      
	      A[a][b][c]=0.72;
	    }

    return 0;
}