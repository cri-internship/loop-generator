#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(900, 140, 290, "ones");
	int ***D = create_three_dim_int(90, 460, 100, "ones");
	int ***A = create_three_dim_int(940, 860, 530, "ones");
	int ***C = create_three_dim_int(750, 840, 660, "ones");

	for (int c = 5; c < 290; c++)
	  for (int b = 5; b < 140; b++)
	    for (int a = 5; a < 750; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-3][c-1]/D[a][b][c];
	      
	      C[a][b][c]=C[a-3][b-5][c]-23;
	      
	      B[a][b][c]=A[a][b][c]+C[a][b][c];
	    }

    return 0;
}