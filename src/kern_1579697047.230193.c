#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(130, "random");
	int ***A = create_three_dim_int(440, 280, 70, "random");
	int **B = create_two_dim_int(220, 960, "random");

	for (int c = 0; c < 957; c++)
	  for (int b = 4; b < 130; b++)
	    for (int a = 4; a < 130; a++)
	    {
	      
	      C[a]=C[a-2]-19;
	      
	      C[a]=C[a-4]*A[a][b][c]+B[a][b];
	      
	      C[a]=B[a][b]*C[a]+C[a];
	      B[a][b]=B[a+1][b+3]-A[a][b][c]*C[a];
	    }

    return 0;
}