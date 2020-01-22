#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(770, 570, 110, "random");
	int **A = create_two_dim_int(420, 190, "random");
	int *B = create_one_dim_int(660, "random");
	int *D = create_one_dim_int(450, "random");

	for (int d = 0; d < 188; d++)
	  for (int c = 0; c < 415; c++)
	    for (int b = 0; b < 415; b++)
	      for (int a = 0; a < 415; a++)
	      {
	        
	       int var_a=B[a]-15;
	       B[a]=37;
	        
	       A[a][b]=21;
	       A[a+5][b+2]=18;
	      }

    return 0;
}