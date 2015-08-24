#include <GL/gl.h>                   // Header for OpenGL32 Lib
#include <GL/glu.h>
#include "ship.h"

#define CONSTITUTION_MODEL 1
#define MIRANDA_MODEL 2
#define NUMBER_OF_FEDSHIPS 15
#define PI				3.14159265358979323846f
#define DEG2RAD(X)		(PI*(X)/180.0)	// Degrees -> Radians
#define RAD2DEG(X)		((X)*180.0/PI)	// Radians -> Degrees

int Width, Height;                               // Size of screen variables

void DrawConstitution();
void DrawMiranda();
int MyChoosePixelFormat(HDC);

bool constitutionBuilt;
bool mirandaBuilt;

// Dialog defines
#define IDB_XP                          101
#define IDI_WINXP                       102
#define IDD_SIZE			            103
#define IDD_SPEED			            104
#define IDD_UPDOWN                      105
#define IDVISIT                         106
#define IDC_DLG_TITLE                   107
#define IDC_DLG_TITLE2                  108
#define IDC_NUMBER_SLIDER		        109
#define IDC_STATIC                      -1
#define DLG_SCRNSAVECONFIGURE1          2004
