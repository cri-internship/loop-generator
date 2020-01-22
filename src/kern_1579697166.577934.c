#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(190, 20, 490, "random");
	int ***A = create_three_dim_int(290, 50, 910, "random");
	int **D = create_two_dim_int(650, 210, "random");
	int **E = create_two_dim_int(320, 530, "random");
	int **B = create_two_dim_int(250, 240, "random");

	for (int b = 3; b < 236; b++)
	  for (int a = 1; a < 250; a++)
	  {
	    
	     B[a][b]=B[a][b+4]*E[a][b]+D[a][b];
	    
	     D[a][b]=E[a][b]-A[a][b][a]+B[a][b]*C[a][b][a];
	     B[a][b]=E[a-1][b-3]/A[a][b][a]*B[a][b]+D[a][b];
	  }

    return 0;
}