enum COLORS{BLACK=30,RED,GREEN,YELLOW,BLUE,MANEGTA,CYAN,WHITE};
#define UNICODE
#define bg(c) (c+10)
#define COL 80
#define BAR "\u2590"
// function declaration, termsys.demon.uk set auto color
void clearScreen(void);
void setColors(short, short);
void resetColors(void);
void barChart(int []);
