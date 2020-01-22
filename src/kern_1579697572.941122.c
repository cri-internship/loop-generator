#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(370, 710, "ones");
	int *B = create_one_dim_int(660, "ones");
	int *C = create_one_dim_int(570, "ones");

	for (int b = 3; b < 706; b++)
	  for (int a = 4; a < 365; a++)
	  {
	    
	     B[a]=B[a-4]/23;
	    
	     A[a][b]=A[a-2][b-3]/C[a]-26;
	    
	     A[a][b]=A[a][b+4]-21;
	    
	     A[a][b]=A[a+5][b+3]+B[a];
	    
	     B[a]=B[a+1]*29;
	  }

    return 0;
}