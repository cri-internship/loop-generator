#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(630, "ones");
	int *A = create_one_dim_int(990, "ones");
	int **C = create_two_dim_int(350, 270, "ones");

	for (int b = 1; b < 270; b++)
	  for (int a = 5; a < 350; a++)
	  {
	    
	     C[a][b]=C[a-3][b-1]-17;
	    
	     A[a]=A[a]-46;
	     C[a][b]=A[a-5]+B[a]/C[a][b];
	  }

    return 0;
}