#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(730, "ones");
	int *D = create_one_dim_int(270, "ones");
	int **C = create_two_dim_int(740, 610, "ones");
	int ***A = create_three_dim_int(1000, 130, 280, "ones");

	for (int b = 0; b < 127; b++)
	  for (int a = 0; a < 995; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+1][a+2]/29;
	    
	     A[a][b][a]=21;
	  }

    return 0;
}