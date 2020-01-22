#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(370, "zeros");
	int *A = create_one_dim_int(740, "zeros");
	int ***D = create_three_dim_int(350, 300, 690, "zeros");
	int **E = create_two_dim_int(250, 310, "zeros");
	int ***B = create_three_dim_int(980, 710, 230, "zeros");

	for (int b = 0; b < 295; b++)
	  for (int a = 0; a < 350; a++)
	  {
	    
	     D[a][b][a]=D[a][b+5][a]+32;
	    
	     A[a]=A[a+3]+27;
	  }

    return 0;
}