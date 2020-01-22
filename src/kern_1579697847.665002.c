#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(280, 140, 840, "ones");
	int **A = create_two_dim_int(510, 510, "ones");

	for (int b = 4; b < 137; b++)
	  for (int a = 5; a < 279; a++)
	  {
	    
	     A[a][b]=A[a-1][b-4]/B[a][b][a];
	    
	     B[a][b][a]=B[a][b+3][a+1]+A[a][b];
	    
	     B[a][b][a]=37;
	    
	     A[a][b]=17;
	    
	     B[a][b][a]=B[a][b][a]/A[a][b];
	     A[a][b]=B[a-2][b-3][a-1]-A[a][b];
	  }

    return 0;
}