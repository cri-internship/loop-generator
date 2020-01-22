#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(920, 330, "random");
	int *C = create_one_dim_int(660, "random");
	int ***A = create_three_dim_int(1000, 800, 10, "random");

	for (int c = 1; c < 330; c++)
	  for (int b = 2; b < 657; b++)
	    for (int a = 2; a < 657; a++)
	    {
	      
	      B[a][b]=48;
	      B[a-2][b-1]=45;
	      
	      B[a][b]=C[a]/B[a][b]-24;
	      A[a][b][c]=C[a+3]*B[a][b]+A[a][b][c];
	    }

    return 0;
}