#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(570, 520, "random");
	double ***B = create_three_dim_double(580, 640, 390, "random");

	for (int c = 0; c < 385; c++)
	  for (int b = 3; b < 515; b++)
	    for (int a = 3; a < 565; a++)
	    {
	      
	      A[a][b]=A[a+5][b+5]-0.594;
	      
	      B[a][b][c]=B[a+3][b][c+5]+0.161;
	      
	      A[a][b]=0.101;
	    }

    return 0;
}