#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(460, 240, 180, "random");
	int ***D = create_three_dim_int(800, 320, 690, "random");
	int ***B = create_three_dim_int(670, 480, 940, "random");
	int ***A = create_three_dim_int(180, 740, 330, "random");

	for (int b = 0; b < 319; b++)
	  for (int a = 0; a < 176; a++)
	  {
	    
	     A[a][b][a]=B[a][b][a];
	     A[a+4][b+1][a+3]=C[a][b][a]*D[a][b][a];
	    
	     B[a][b][a]=A[a][b][a];
	     B[a+3][b+2][a+1]=D[a][b][a]+C[a][b][a]*A[a][b][a];
	    
	     B[a][b][a]=D[a][b][a]-B[a][b][a]+C[a][b][a];
	     A[a][b][a]=D[a+4][b+1][a+4]-C[a][b][a]*B[a][b][a];
	  }

    return 0;
}