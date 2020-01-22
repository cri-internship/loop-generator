#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(850, "ones");
	int ***D = create_three_dim_int(100, 690, 410, "ones");
	int ***A = create_three_dim_int(330, 710, 410, "ones");
	int *C = create_one_dim_int(620, "ones");

	for (int b = 2; b < 685; b++)
	  for (int a = 4; a < 95; a++)
	  {
	    
	     D[a][b][a]=46;
	     D[a+3][b+5][a+5]=18;
	    
	     D[a][b][a]=A[a][b][a];
	  }

    return 0;
}