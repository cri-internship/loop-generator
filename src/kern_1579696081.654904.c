#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(720, 210, 520, "random");
	int ***B = create_three_dim_int(250, 700, 610, "random");

	for (int c = 0; c < 519; c++)
	  for (int b = 2; b < 205; b++)
	    for (int a = 5; a < 247; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-2][c]/A[a][b][c];
	      
	      A[a][b][c]=A[a+2][b+5][c+1]/B[a][b][c];
	      
	      B[a][b][c]=18;
	    }

    return 0;
}