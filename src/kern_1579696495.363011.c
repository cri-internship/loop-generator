#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(610, "zeros");
	int ***B = create_three_dim_int(90, 630, 370, "zeros");

	for (int b = 5; b < 608; b++)
	  for (int a = 5; a < 608; a++)
	  {
	    
	     A[a]=46;
	     A[a]=A[a]*B[a][b][a];
	    
	     A[a]=A[a-5]-B[a][b][a];
	  }

    return 0;
}