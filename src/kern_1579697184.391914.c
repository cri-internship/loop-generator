#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(200, "random");
	int **B = create_two_dim_int(970, 370, "random");

	for (int b = 1; b < 365; b++)
	  for (int a = 4; a < 195; a++)
	  {
	    
	     B[a][b]=B[a-4][b-1]+40;
	    
	     A[a]=A[a-1]+12;
	    
	     B[a][b]=B[a+5][b+5]*3;
	    
	     A[a]=A[a+5]-B[a][b];
	    
	     B[a][b]=A[a]+B[a][b];
	     A[a]=A[a]*B[a][b];
	  }

    return 0;
}