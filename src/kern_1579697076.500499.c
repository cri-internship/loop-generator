#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(720, 50, 570, "ones");
	int ***A = create_three_dim_int(640, 290, 570, "ones");
	int ***D = create_three_dim_int(140, 30, 150, "ones");
	int ***C = create_three_dim_int(260, 910, 500, "ones");
	int ***B = create_three_dim_int(570, 570, 890, "ones");

	for (int b = 3; b < 30; b++)
	  for (int a = 5; a < 140; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-3][a-4]+D[a][b][a]-35/A[a][b][a]*E[a][b][a];
	    
	     A[a][b][a]=A[a-1][b-1][a-5]+20*E[a][b][a]/B[a][b][a]-C[a][b][a];
	    
	     D[a][b][a]=D[a-3][b-1][a-3]-38;
	  }

    return 0;
}