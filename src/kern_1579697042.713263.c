#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(180, 750, 170, "random");
	float ***A = create_three_dim_float(220, 420, 510, "random");
	float ***B = create_three_dim_float(900, 990, 270, "random");
	float ***D = create_three_dim_float(880, 20, 850, "random");

	for (int c = 4; c < 170; c++)
	  for (int b = 5; b < 20; b++)
	    for (int a = 4; a < 180; a++)
	    {
	      
	      C[a][b][c]=0.51;
	      C[a-1][b-5][c-3]=0.276;
	      
	      D[a][b][c]=C[a][b][c]*A[a][b][c];
	      D[a-4][b-5][c-4]=B[a][b][c];
	      
	      B[a][b][c]=0.213;
	      B[a+1][b][c+4]=0.48;
	      
	      C[a][b][c]=D[a][b][c]*0.418-B[a][b][c]+C[a][b][c];
	      D[a][b][c]=D[a-2][b][c-2]-0.974;
	    }

    return 0;
}