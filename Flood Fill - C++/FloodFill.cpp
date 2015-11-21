/*
 * FloodFill.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*

In MS-Paint, when we take the brush to a pixel and click,
the color of the region of that pixel is replaced with a new selected color.
Following is the problem statement to do this task.
Given a 2D screen, location of a pixel in the screen and a color,
replace color of the given pixel and all adjacent same colored pixels with the given color.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

#define M 8
#define N 8

//------------------------------------------------------------------------------------------
// Recursion
void floodFillUtil(int screen[][], int x, int y, int prevC, int newC)
{
    // Base cases
    if (x < 0 || x >= M || y < 0 || y >= N)
        return;
    if (screen[x][y] != prevC)
        return;

    // Replace the color at (x, y)
    screen[x][y] = newC;

    // Recur for north, east, south and west
    floodFillUtil(screen, x+1, y, prevC, newC);
    floodFillUtil(screen, x-1, y, prevC, newC);
    floodFillUtil(screen, x, y+1, prevC, newC);
    floodFillUtil(screen, x, y-1, prevC, newC);
}

//----------------------------------------------------------------------------------------------
// Using queue
/*procedure fill(x,y : integer; c: colour);
    begin
      initialize_stack;
      push(x,y);
      while stack_non_empty do begin
        pop(x,y);
        if point[x,y] <> c then begin
          point[x,y] := c;
          push(x,y+1);
          push(x,y-1);
          push(x+1,y);
          push(x-1,y)
        end
      end
    end;

procedure fill(x,y : integer; c: colour);
	begin
		initialize_queue;
		enqueue(x,y);
		while queue_non_empty do begin
			dequeue(x,y);
			if point[x,y] <> c then begin
				point[x,y] := c;
				enqueue(x,y+1);
				enqueue(x,y-1);
				enqueue(x+1,y);
				enqueue(x-1,y)
			end
		end
	end;

  */

int main()
{
	cout << "" << endl;
}





