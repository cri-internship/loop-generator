#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(890, 490, 110, "random");
	int *E = create_one_dim_int(480, "random");
	int ***D = create_three_dim_int(620, 420, 840, "random");
	int *B = create_one_dim_int(730, "random");
	int ***C = create_three_dim_int(280, 530, 710, "random");

	for (int b = 5; b < 418; b++)
	  for (int a = 4; a < 276; a++)
	  {
	    
	     E[a]=E[a-3]/28;
	    
	     A[a][b][a]=A[a-3][b-2][a-2]*D[a][b][a]-18;
	    
	     A[a][b][a]=A[a-1][b-5][a]/11;
	    
	     C[a][b][a]=C[a+4][b+1][a+4]/B[a]*A[a][b][a]+E[a]-D[a][b][a];
	    
	     E[a]=E[a+1]+23;
	    
	     D[a][b][a]=38*A[a][b][a]/E[a];
	     D[a+1][b+2][a+4]=C[a][b][a]-A[a][b][a]/B[a];
	    
	     B[a]=49;
	     B[a-4]=23;
	  }

    return 0;
}