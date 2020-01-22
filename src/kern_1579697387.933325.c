#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(240, 20, 190, "random");
	int ***A = create_three_dim_int(750, 80, 750, "random");

	for (int a = 5; a < 745; a++)
	{
	  
	    A[a][a][a]=A[a+5][a+1][a+2]*6;
	  
	    A[a][a][a]=30;
	}

    return 0;
}