#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(120, 670, 700, "random");
	int *A = create_one_dim_int(780, "random");

	for (int c = 3; c < 697; c++)
	  for (int b = 5; b < 667; b++)
	    for (int a = 4; a < 115; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-5][c-3]/47;
	      
	      B[a][b][c]=B[a+5][b][c+3]+41;
	      
	      B[a][b][c]=B[a+3][b+3][c]+45;
	      
	      int var_a=A[a]*9;
	      A[a]=22;
	      
	      A[a]=A[a]/B[a][b][c];
	      B[a][b][c]=A[a-3]*B[a][b][c];
	    }

    return 0;
}