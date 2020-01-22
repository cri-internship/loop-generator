#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(900, "zeros");
	int *B = create_one_dim_int(880, "zeros");
	int ***A = create_three_dim_int(650, 690, 920, "zeros");
	int ***C = create_three_dim_int(850, 50, 50, "zeros");

	for (int c = 2; c < 880; c++)
	  for (int b = 2; b < 880; b++)
	    for (int a = 2; a < 880; a++)
	    {
	      
	      int var_a=B[a]-2;
	      B[a]=46;
	      
	      B[a]=A[a][b][c]+C[a][b][c];
	    }

    return 0;
}