#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(500, 200, 540, "random");
	int **B = create_two_dim_int(30, 520, "random");

	for (int b = 4; b < 200; b++)
	  for (int a = 5; a < 30; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-4][a-4]-38;
	    
	     A[a][b][a]=A[a-2][b][a-5]+B[a][b];
	    
	     B[a][b]=A[a][b][a];
	     B[a-5][b-4]=A[a][b][a];
	    
	     A[a][b][a]=B[a][b]*29;
	     B[a][b]=B[a-2][b-1]/6;
	  }

    return 0;
}