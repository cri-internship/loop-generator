#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(690, 850, "random");
	float ***D = create_three_dim_float(330, 320, 950, "random");
	float **B = create_two_dim_float(460, 920, "random");
	float ***C = create_three_dim_float(960, 120, 220, "random");

	for (int c = 0; c < 218; c++)
	  for (int b = 3; b < 115; b++)
	    for (int a = 0; a < 460; a++)
	    {
	      
	      B[a][b]=B[a][b-3]+D[a][b][c]*C[a][b][c];
	      
	      C[a][b][c]=C[a+1][b+1][c+1]*0.726;
	      
	      C[a][b][c]=C[a+4][b+5][c+2]+0.851;
	    }

    return 0;
}