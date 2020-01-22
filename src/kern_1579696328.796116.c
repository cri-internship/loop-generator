#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(990, 130, 940, "ones");
	int *B = create_one_dim_int(800, "ones");

	for (int b = 0; b < 130; b++)
	  for (int a = 5; a < 795; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b][a-4]*B[a];
	    
	     B[a]=B[a-5]*A[a][b][a];
	    
	     B[a]=B[a+4]/24;
	    
	     B[a]=B[a+5]+A[a][b][a];
	    
	     A[a][b][a]=B[a]*A[a][b][a];
	     B[a]=B[a+3]/A[a][b][a];
	    
	     B[a]=B[a]+A[a][b][a];
	  }

    return 0;
}