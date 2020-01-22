#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(150, 650, "random");
	int *B = create_one_dim_int(630, "random");
	int ***A = create_three_dim_int(80, 650, 820, "random");
	int **C = create_two_dim_int(60, 340, "random");

	for (int b = 0; b < 650; b++)
	  for (int a = 1; a < 150; a++)
	  {
	    
	     B[a]=C[a][b]+13;
	     B[a+2]=28;
	    
	     D[a][b]=D[a][b]*B[a]/B[a];
	     A[a][b][a]=D[a-1][b]/0;
	  }

    return 0;
}