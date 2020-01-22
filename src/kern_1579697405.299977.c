#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(360, 550, 160, "random");
	double ***A = create_three_dim_double(180, 290, 930, "random");

	for (int c = 5; c < 160; c++)
	  for (int b = 2; b < 290; b++)
	    for (int a = 3; a < 180; a++)
	    {
	      
	      B[a][b][c]=A[a][b][c]*B[a][b][c];
	      A[a][b][c]=A[a-3][b][c-5]-0.851;
	      
	      A[a][b][c]=B[a][b][c]*A[a][b][c];
	      B[a][b][c]=B[a][b-2][c-5]*A[a][b][c];
	    }

    return 0;
}