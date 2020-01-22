#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(580, 40, 680, "zeros");
	int ***C = create_three_dim_int(420, 520, 950, "zeros");
	int ***A = create_three_dim_int(970, 50, 30, "zeros");
	int *D = create_one_dim_int(870, "zeros");
	int *E = create_one_dim_int(280, "zeros");

	for (int b = 5; b < 40; b++)
	  for (int a = 5; a < 276; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-3][a-2]*D[a]+C[a][b][a];
	    
	     A[a][b][a]=A[a-5][b][a-1]-E[a]*B[a][b][a]/D[a]+C[a][b][a];
	    
	     A[a][b][a]=A[a+4][b+3][a+2]+24;
	    
	     E[a]=E[a+4]+A[a][b][a]/20-A[a][b][a];
	    
	     E[a]=E[a+1]*6;
	    
	     B[a][b][a]=27;
	  }

    return 0;
}