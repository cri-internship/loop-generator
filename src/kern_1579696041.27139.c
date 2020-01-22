#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(550, 200, "zeros");
	int ***A = create_three_dim_int(290, 880, 40, "zeros");

	for (int b = 2; b < 876; b++)
	  for (int a = 5; a < 287; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+4][a+1]-B[a][b];
	    
	     A[a][b][a]=A[a+2][b][a+3]+2;
	    
	     B[a][b]=A[a][b][a]*B[a][b];
	     A[a][b][a]=A[a-1][b-2][a-5]/B[a][b];
	  }

    return 0;
}