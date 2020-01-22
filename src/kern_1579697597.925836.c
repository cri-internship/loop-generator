#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(300, 130, "random");
	int **D = create_two_dim_int(860, 820, "random");
	int **A = create_two_dim_int(300, 520, "random");
	int **B = create_two_dim_int(100, 780, "random");

	for (int c = 5; c < 130; c++)
	  for (int b = 5; b < 100; b++)
	    for (int a = 5; a < 100; a++)
	    {
	      
	      C[a][b]=C[a-3][b-1]-20;
	      
	      A[a][b]=A[a-1][b-3]*19;
	      
	      A[a][b]=25;
	      
	      B[a][b]=C[a][b]+A[a][b];
	      B[a][b-5]=D[a][b]+C[a][b];
	      
	      B[a][b]=D[a][b];
	      
	      int var_b=C[a][b]*14;
	      int var_c=C[a-5][b-3]*11;
	    }

    return 0;
}