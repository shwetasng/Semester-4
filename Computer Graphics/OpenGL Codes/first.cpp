// This code will generate a screen with colours according to the color ratio

#include <GL/glut.h>  
#include <GL/glu.h>
#include <GL/gl.h>

void display() { 
   glClearColor(0.0, 0.0, 0.0,0.0); 
   glClear(GL_COLOR_BUFFER_BIT);        
  
     glFlush();  
} 
  int main(int argc, char** argv) 
{
glutInit(&argc, argv);                
   glutCreateWindow("First OpenGL Program");
   glutInitWindowSize(320, 320);   
   glutInitWindowPosition(50, 50); 
   glutDisplayFunc(display);  
   glutMainLoop();          
   return 0; 
}
