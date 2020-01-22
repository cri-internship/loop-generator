#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(180, 480, "ones");
	int ***B = create_three_dim_int(60, 770, 640, "ones");
	int **C = create_two_dim_int(440, 910, "ones");

	for (int b = 2; b < 770; b++)
	  for (int a = 5; a < 59; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-2][a-5]*12;
	    
	     B[a][b][a]=B[a-1][b][a]*C[a][b]-A[a][b];
	  }

    return 0;
}