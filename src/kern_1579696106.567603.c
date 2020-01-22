#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(950, 450, 410, "ones");
	int ***C = create_three_dim_int(650, 640, 760, "ones");
	int *D = create_one_dim_int(80, "ones");
	int ***A = create_three_dim_int(280, 550, 680, "ones");

	for (int b = 0; b < 550; b++)
	  for (int a = 5; a < 278; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b][a-5]-18;
	    
	     A[a][b][a]=D[a]+48;
	     A[a][b][a+2]=13;
	  }

    return 0;
}