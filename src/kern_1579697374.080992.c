#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(890, 300, 910, "random");
	int ***A = create_three_dim_int(760, 550, 180, "random");

	for (int a = 4; a < 755; a++)
	{
	  
	    B[a][a][a]=B[a-4][a][a-4]/33;
	  
	    B[a][a][a]=B[a+2][a+1][a]-47;
	  
	    A[a][a][a]=A[a+4][a+5][a+5]+10;
	  
	    A[a][a][a]=A[a+2][a][a]*B[a][a][a];
	}

    return 0;
}