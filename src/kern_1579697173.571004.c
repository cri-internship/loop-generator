#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(920, "random");
	int **B = create_two_dim_int(440, 520, "random");
	int **A = create_two_dim_int(340, 360, "random");
	int **D = create_two_dim_int(160, 940, "random");

	for (int c = 3; c < 357; c++)
	  for (int b = 4; b < 157; b++)
	    for (int a = 4; a < 157; a++)
	    {
	      
	      A[a][b]=A[a-4][b-1]*47;
	      
	      D[a][b]=D[a-4][b-3]*A[a][b];
	      
	      A[a][b]=A[a-4][b-2]+D[a][b]*C[a]/B[a][b];
	      
	      int var_a=D[a][b]+9;
	      int var_b=D[a+3][b]*12;
	    }

    return 0;
}