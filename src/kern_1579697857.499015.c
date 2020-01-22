#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(620, 250, "ones");
	int **B = create_two_dim_int(460, 360, "ones");
	int **A = create_two_dim_int(920, 450, "ones");
	int *D = create_one_dim_int(550, "ones");

	for (int c = 2; c < 360; c++)
	  for (int b = 5; b < 460; b++)
	    for (int a = 5; a < 460; a++)
	    {
	      
	      B[a][b]=16;
	      B[a-5][b-1]=44;
	      
	      D[a]=A[a][b]*B[a][b]-D[a]+21;
	      B[a][b]=A[a-2][b-2]/B[a][b]*C[a][b];
	    }

    return 0;
}