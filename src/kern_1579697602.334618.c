#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(180, 320, 770, "random");
	int *E = create_one_dim_int(310, "random");
	int *D = create_one_dim_int(650, "random");
	int ***A = create_three_dim_int(660, 420, 240, "random");
	int ***C = create_three_dim_int(550, 530, 540, "random");

	for (int c = 0; c < 766; c++)
	  for (int b = 0; b < 319; b++)
	    for (int a = 0; a < 180; a++)
	    {
	      
	      A[a][b][c]=B[a][b][c]-E[a]/C[a][b][c]*D[a]+A[a][b][c];
	      C[a][b][c]=B[a][b+1][c+4]-D[a]*E[a];
	    }

    return 0;
}