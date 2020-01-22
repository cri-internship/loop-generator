#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(300, "zeros");
	int ***A = create_three_dim_int(940, 750, 630, "zeros");

	for (int b = 5; b < 746; b++)
	  for (int a = 5; a < 295; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-5][a-3]+B[a];
	    
	     B[a]=B[a-2]*14;
	    
	     A[a][b][a]=A[a+3][b+4][a+3]-B[a];
	    
	     B[a]=A[a][b][a];
	    
	     B[a]=A[a][b][a]-3;
	     A[a][b][a]=A[a+2][b+2][a+5]+B[a];
	  }

    return 0;
}