#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(210, 100, 760, "ones");
	int ***C = create_three_dim_int(610, 360, 690, "ones");
	int ***E = create_three_dim_int(480, 580, 330, "ones");
	int **B = create_two_dim_int(600, 740, "ones");
	int **A = create_two_dim_int(840, 580, "ones");

	for (int b = 3; b < 575; b++)
	  for (int a = 5; a < 475; a++)
	  {
	    
	     A[a][b]=A[a-5][b-3]+39;
	    
	     A[a][b]=A[a][b-3]/27;
	    
	     A[a][b]=A[a+5][b+4]*D[a][b][a]/B[a][b]-E[a][b][a];
	    
	     E[a][b][a]=1;
	     E[a+5][b+5][a+1]=45;
	  }

    return 0;
}