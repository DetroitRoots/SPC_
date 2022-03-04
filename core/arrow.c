#include <stdio.h>>
#include <curses.h> // That's the standard version of <conio.h>

#define ARROW_UP      0x48
#define ARROW_LEFT    0x4B
#define ARROW_RIGHT   0x4D
#define ARROW_DOWN    0x50
#define ARROW_NONE    0x00
#define ESC_KEY       0x1B

unsigned char getArrow();

int main ()
{
    int pos_row=1, pos_col=1;
    int offset_row=0, offset_col=0;
    unsigned char arrow;
    gotoxy (pos_col, pos_row);
    putchar(254);
    while ((arrow=getArrow()) != ESC_KEY)
    {
        if (arrow != ARROW_NONE)
        {
            switch(arrow)
            {
                case ARROW_UP:
                offset_row = -1;
                break;
                case ARROW_LEFT:
                offset_col= -1;
                break;
                case ARROW_RIGHT:
                offset_col= 1;
                break;
                case ARROW_DOWN:
                offset_row= 1;
                break; 
            }
            gotoxy(pos_col, pos_row);
            putchar(32);
            pos_row += offset_row; 
            pos_col += offset_col;
            if (pos_row<1) {pos_row= 1;}
            if (pos_row>25){pos_row= 25;}
            if (pos_col<1){pos_row=1;}
            if (pos_col>80){pos_col=80;}
            putchar(254);
            offset_row=0; offset_col= 0;
        }        
    }
    return 0;
}
