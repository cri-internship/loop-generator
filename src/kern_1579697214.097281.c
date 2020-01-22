#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(460, 280, "ones");
	int ***D = create_three_dim_int(70, 610, 470, "ones");
	int ***A = create_three_dim_int(640, 260, 480, "ones");
	int ***B = create_three_dim_int(800, 490, 380, "ones");

	for (int b = 3; b < 259; b++)
	  for (int a = 3; a < 70; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-1][a-3]*A[a][b][a]+B[a][b][a]-22;
	    
	     C[a][b]=C[a][b+2]+9;
	    
	     A[a][b][a]=A[a][b+1][a+1]+D[a][b][a]/B[a][b][a]-29;
	    
	     C[a][b]=A[a][b][a];
	  }

    return 0;
}