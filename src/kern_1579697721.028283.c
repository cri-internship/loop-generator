#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(480, 650, 570, "ones");
	int *D = create_one_dim_int(220, "ones");
	int **C = create_two_dim_int(750, 640, "ones");
	int **E = create_two_dim_int(180, 420, "ones");
	int ***B = create_three_dim_int(290, 330, 230, "ones");

	for (int b = 4; b < 328; b++)
	  for (int a = 3; a < 180; a++)
	  {
	    
	     E[a][b]=E[a-3][b-3]/12;
	    
	     C[a][b]=C[a-3][b-1]-31;
	    
	     E[a][b]=E[a][b-4]*D[a];
	    
	     E[a][b]=E[a][b+4]-A[a][b][a]/C[a][b]+B[a][b][a]*D[a];
	    
	     C[a][b]=C[a][b+5]+7;
	    
	     B[a][b][a]=6;
	     B[a][b+2][a]=D[a]/A[a][b][a]-C[a][b]*E[a][b];
	  }

    return 0;
}