#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(200, 550, 530, "ones");
	float ***D = create_three_dim_float(570, 210, 890, "ones");
	float ***B = create_three_dim_float(780, 690, 360, "ones");
	float ***C = create_three_dim_float(480, 830, 680, "ones");

	for (int c = 0; c < 675; c++)
	  for (int b = 0; b < 829; b++)
	    for (int a = 0; a < 475; a++)
	    {
	      
	      C[a][b][c]=B[a][b][c]/D[a][b][c];
	      C[a+5][b+1][c+5]=0.376;
	    }

    return 0;
}