#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(930, 800, 130, "ones");
	int **B = create_two_dim_int(950, 700, "ones");
	int *C = create_one_dim_int(410, "ones");
	int ***D = create_three_dim_int(560, 20, 940, "ones");

	for (int c = 5; c < 126; c++)
	  for (int b = 4; b < 20; b++)
	    for (int a = 4; a < 410; a++)
	    {
	      
	      B[a][b]=B[a-2][b-2]*44+C[a];
	      
	      A[a][b][c]=A[a][b-3][c-4]*28;
	      
	      D[a][b][c]=D[a-2][b][c-3]*18;
	      
	      A[a][b][c]=B[a][b]+C[a]/D[a][b][c];
	      
	      int var_a=C[a]/10;
	    }

    return 0;
}