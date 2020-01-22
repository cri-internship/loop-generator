#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(500, 130, "random");
	int **C = create_two_dim_int(290, 740, "random");
	int *D = create_one_dim_int(1000, "random");
	int **A = create_two_dim_int(850, 330, "random");
	int ***E = create_three_dim_int(370, 560, 910, "random");

	for (int b = 0; b < 736; b++)
	  for (int a = 0; a < 285; a++)
	  {
	    
	     C[a][b]=C[a+4][b+4]*E[a][b][a];
	    
	     C[a][b]=1;
	  }

    return 0;
}