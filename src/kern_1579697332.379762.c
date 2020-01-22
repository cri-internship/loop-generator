#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(670, 470, 480, "random");
	int ***C = create_three_dim_int(570, 770, 250, "random");
	int **A = create_two_dim_int(150, 290, "random");
	int ***D = create_three_dim_int(610, 560, 150, "random");
	int ***E = create_three_dim_int(420, 140, 290, "random");

	for (int b = 4; b < 136; b++)
	  for (int a = 4; a < 417; a++)
	  {
	    
	     D[a][b][a]=C[a][b][a]*E[a][b][a]+B[a][b][a];
	     D[a-4][b-4][a-3]=A[a][b]*C[a][b][a]-E[a][b][a];
	    
	     int var_a=E[a][b][a]+47;
	     int var_b=E[a+3][b+4][a+1]-10;
	  }

    return 0;
}