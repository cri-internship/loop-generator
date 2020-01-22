#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(150, 920, 690, "zeros");
	int ***B = create_three_dim_int(580, 680, 70, "zeros");

	for (int b = 3; b < 677; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b][a-3]-B[a][b][a];
	    
	     B[a][b][a]=B[a-1][b-3][a-4]-A[a][b][a];
	    
	     B[a][b][a]=B[a][b-3][a]-A[a][b][a];
	    
	     A[a][b][a]=A[a][b+2][a]*B[a][b][a];
	  }

    return 0;
}