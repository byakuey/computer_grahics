/*
 * Semestre 2018 - 1
 * Alumnos:
 * Barriga Martinez Diego Alberto
 * Oropeza Vilchis Luis Alberto
 */

 #include <GL/glut.h>

// Para guardar los colores
typedef struct{
	float r, g, b;
} color;

// Colores utilizados en el dibujo
const color carmin1 = {0.828125, 0.71875, 0.6640625};
const color carmin2 = {0.91015625, 0.82421875, 0.76953125};
const color carmin3 = {0.828125, 0.71875, 0.6640625};
const color naranja1 = {0.81640625, 0.26953125, 0.12890625};
const color naranja2 = {0.89453125, 0.36328125, 0.17578125};
const color naranja3 = {0.9375, 0.46484375, 0.1796875};
const color naranja4 = {0.96484375, 0.56640625, 0.375};
const color cafe1 = {0.42578125, 0.17578125, 0.0703125};
const color cafe2 = {0.33203125, 0.08984375, 0.0390625};
const color boca = {0.76171875, 0.58203125, 0.4921875};

/*
 * Función para inicializar parámetros
 */
void InitGL ( GLvoid )
{
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f); // Color de fondo
}

/*
 * Función que dibuja
 */
void display ( void )
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// limpia pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();			// Reinicializamos la actual matriz Modelview
	glBegin(GL_POLYGON);
	glVertex3f(45.16, 139.67, -1.2);
	glVertex3f(50.24, 141.08, -1.2);
	glVertex3f(38.95, 146.16, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(42.05, 137.98, -1.2);
    	glVertex3f(45.16, 139.67, -1.2);
    	glVertex3f(38.95, 146.16, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(36.41, 144.75, -1.2);
    	glVertex3f(40.92, 134.03, -1.2);
    	glVertex3f(42.05, 137.98, -1.2);
    	glVertex3f(38.95, 146.16, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(36.69, 144.7, -1.2);
    	glVertex3f(38.91, 146.2, -1.2);
    	glVertex3f(28.5, 152.93, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(40.92, 133.75, -1.2);
    	glVertex3f(44.03, 129.8, -1.2);
    	glVertex3f(51.93, 131.77, -1.2);
    	glVertex3f(45.16, 139.67, -1.2);
    	glVertex3f(42.05, 137.98, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(35.84, 127.26, -1.2);
    	glVertex3f(34.43, 134.59, -1.2);
    	glVertex3f(40.92, 133.75, -1.2);
    	glVertex3f(44.03, 129.8, -1.2);
    	glVertex3f(48.83, 125.0, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(33.3, 126.13, -1.2);
    	glVertex3f(35.84, 127.26, -1.2);
    	glVertex3f(35.28, 129.8, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(27.66, 150.68, -1.2);
    	glVertex3f(34.43, 134.59, -1.2);
    	glVertex3f(40.92, 133.75, -1.2);
    	glVertex3f(36.41, 144.75, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(28.5, 152.93, -1.2);
    	glVertex3f(36.69, 144.47, -1.2);
    	glVertex3f(27.66, 150.68, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(26.25, 151.24, -1.2);
    	glVertex3f(28.5, 152.93, -1.2);
    	glVertex3f(27.66, 150.68, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(29.07, 133.18, -1.2);
    	glVertex3f(26.25, 151.24, -1.2);
    	glVertex3f(27.66, 150.68, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(33.3, 126.13, -1.2);
    	glVertex3f(29.07, 133.18, -1.2);
    	glVertex3f(27.66, 150.68, -1.2);
    	glVertex3f(34.43, 134.59, -1.2);
    	glVertex3f(35.28, 129.8, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(77.33, 150.96, -1.2);
    	glVertex3f(74.79, 134.03, -1.2);
    	glVertex3f(75.92, 150.11, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(75.92, 150.11, -1.2);
    	glVertex3f(77.33, 150.96, -1.2);
    	glVertex3f(75.07, 152.93, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(67.73, 144.47, -1.2);
    	glVertex3f(75.07, 152.93, -1.2);
    	glVertex3f(75.92, 150.11, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(64.91, 146.16, -1.2);
    	glVertex3f(75.07, 152.93, -1.2);
    	glVertex3f(67.73, 144.47, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(63.5, 133.75, -1.2);
    	glVertex3f(69.43, 134.59, -1.2);
    	glVertex3f(75.92, 150.11, -1.2);
    	glVertex3f(67.73, 144.47, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(70.84, 126.13, -1.2);
    	glVertex3f(74.79, 133.75, -1.2);
    	glVertex3f(75.92, 150.4, -1.2);
    	glVertex3f(69.43, 134.59, -1.2);
    	glVertex3f(68.86, 130.64, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(70.84, 126.13, -1.2);
    	glVertex3f(68.86, 130.64, -1.2);
    	glVertex3f(68.3, 127.26, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(55.03, 125.0, -1.2);
    	glVertex3f(68.3, 127.26, -1.2);
    	glVertex3f(69.43, 134.59, -1.2);
    	glVertex3f(63.22, 133.75, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(63.5, 134.03, -1.2);
    	glVertex3f(67.73, 144.45, -1.2);
    	glVertex3f(64.91, 146.16, -1.2);
    	glVertex3f(61.81, 137.98, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(58.7, 139.96, -1.2);
    	glVertex3f(64.91, 146.16, -1.2);
    	glVertex3f(61.81, 137.98, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(53.62, 141.08, -1.2);
    	glVertex3f(64.91, 146.16, -1.2);
    	glVertex3f(58.7, 139.96, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(51.93, 132.06, -1.2);
    	glVertex3f(58.7, 139.96, -1.2);
    	glVertex3f(61.81, 137.98, -1.2);
    	glVertex3f(63.5, 133.75, -1.2);
    	glVertex3f(51.93, 131.77, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(51.93, 131.77, -1.2);
    	glVertex3f(50.24, 141.08, -1.2);
    	glVertex3f(53.62, 141.08, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(51.93, 131.77, -1.2);
    	glVertex3f(44.87, 139.96, -1.2);
    	glVertex3f(50.24, 140.8, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(51.93, 131.77, -1.2);
    	glVertex3f(53.62, 140.8, -1.2);
    	glVertex3f(58.7, 139.96, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(51.93, 131.77, -1.2);
    	glVertex3f(63.22, 133.75, -1.2);
    	glVertex3f(59.83, 129.8, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(48.83, 125.0, -1.2);
    	glVertex3f(44.03, 129.8, -1.2);
    	glVertex3f(51.93, 131.77, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(55.03, 125.0, -1.2);
    	glVertex3f(59.83, 129.8, -1.2);
    	glVertex3f(51.93, 131.77, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(48.83, 125.0, -1.2);
    	glVertex3f(51.93, 131.77, -1.2);
    	glVertex3f(55.03, 125.0, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(48.83, 125.0, -1.2);
    	glVertex3f(47.41, 114.28, -1.2);
    	glVertex3f(56.45, 114.28, -1.2);
    	glVertex3f(55.03, 125.0, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(54.19, 114.28, -1.2);
    	glVertex3f(56.45, 114.28, -1.2);
    	glVertex3f(54.47, 112.87, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(47.41, 114.28, -1.2);
    	glVertex3f(49.95, 114.28, -1.2);
    	glVertex3f(49.39, 112.87, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(55.03, 125.0, -1.2);
    	glVertex3f(68.3, 127.26, -1.2);
    	glVertex3f(60.68, 119.08, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(56.45, 114.0, -1.2);
    	glVertex3f(55.03, 125.0, -1.2);
    	glVertex3f(60.68, 119.08, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(43.18, 119.08, -1.2);
    	glVertex3f(47.41, 114.28, -1.2);
    	glVertex3f(48.83, 125.0, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(43.18, 119.08, -1.2);
    	glVertex3f(48.83, 125.0, -1.2);
    	glVertex3f(35.56, 127.26, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(60.68, 119.08, -1.2);
    	glVertex3f(68.3, 127.26, -1.2);
    	glVertex3f(70.84, 126.13, -1.2);
    	glVertex3f(70.56, 119.36, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(33.3, 119.08, -1.2);
    	glVertex3f(33.3, 126.13, -1.2);
    	glVertex3f(35.56, 127.26, -1.2);
    	glVertex3f(43.18, 119.08, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(51.93, 111.17, -1.2);
    	glVertex3f(56.45, 114.0, -1.2);
    	glVertex3f(59.27, 114.0, -1.2);
    	glVertex3f(58.42, 111.74, -1.2);
    	glVertex3f(55.03, 108.92, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(56.45, 114.0, -1.2);
    	glVertex3f(60.68, 119.08, -1.2);
    	glVertex3f(59.11, 114.0, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(44.59, 114.28, -1.2);
    	glVertex3f(46.0, 110.33, -1.2);
    	glVertex3f(47.41, 110.05, -1.2);
    	glVertex3f(48.54, 109.2, -1.2);
    	glVertex3f(51.93, 111.17, -1.2);
    	glVertex3f(47.41, 114.28, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(43.18, 119.08, -1.2);
    	glVertex3f(47.41, 114.28, -1.2);
    	glVertex3f(44.59, 114.28, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(39.51, 111.46, -1.2);
    	glVertex3f(33.02, 114.84, -1.2);
    	glVertex3f(33.3, 119.08, -1.2);
    	glVertex3f(43.18, 119.08, -1.2);
    	glVertex3f(46.07, 110.05, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(42.05, 97.35, -1.2);
    	glVertex3f(39.51, 111.46, -1.2);
    	glVertex3f(47.13, 110.05, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(42.33, 97.35, -1.2);
    	glVertex3f(47.25, 110.05, -1.2);
    	glVertex3f(50.24, 108.07, -1.2);
    	glVertex3f(53.91, 108.07, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(58.42, 111.74, -1.2);
    	glVertex3f(60.68, 119.08, -1.2);
    	glVertex3f(70.56, 119.36, -1.2);
    	glVertex3f(71.69, 114.84, -1.2);
    	glVertex3f(64.91, 111.46, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(55.03, 108.92, -1.2);
    	glVertex3f(58.42, 111.74, -1.2);
    	glVertex3f(64.91, 111.46, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(64.91, 111.46, -1.2);
    	glVertex3f(68.02, 113.15, -1.2);
    	glVertex3f(68.86, 108.35, -1.2);
    	glVertex3f(65.2, 98.48, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(51.93, 111.17, -1.2);
    	glVertex3f(54.47, 112.59, -1.2);
    	glVertex3f(54.19, 114.28, -1.2);
    	glVertex3f(49.95, 114.28, -1.2);
    	glVertex3f(49.39, 112.87, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(50.24, 108.07, -1.2);
    	glVertex3f(53.91, 108.07, -1.2);
    	glVertex3f(55.03, 108.92, -1.2);
    	glVertex3f(51.93, 111.17, -1.2);
    	glVertex3f(48.54, 109.2, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(42.05, 97.35, -1.2);
    	glVertex3f(55.03, 108.92, -1.2);
    	glVertex3f(64.91, 111.46, -1.2);
    	glVertex3f(65.48, 91.99, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(42.05, 97.35, -1.2);
    	glVertex3f(65.48, 91.99, -1.2);
    	glVertex3f(66.32, 73.65, -1.2);
    	glVertex3f(65.2, 70.26, -1.2);
    	glVertex3f(60.96, 70.26, -1.2);
    	glVertex3f(45.72, 80.7, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(43.74, 81.83, -1.2);
    	glVertex3f(40.08, 84.09, -1.2);
    	glVertex3f(42.05, 97.35, -1.2);
    	glVertex3f(45.72, 80.42, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(47.98, 70.54, -1.2);
    	glVertex3f(43.74, 81.83, -1.2);
    	glVertex3f(60.96, 70.26, -1.2);
    	glVertex3f(60.96, 63.77, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(60.96, 63.77, -1.2);
    	glVertex3f(60.96, 70.26, -1.2);
    	glVertex3f(65.2, 70.26, -1.2);
    	glVertex3f(61.24, 56.72, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(66.32, 73.65, -1.2);
    	glVertex3f(65.48, 91.7, -1.2);
    	glVertex3f(74.79, 84.09, -1.2);
    	glVertex3f(75.36, 78.73, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(64.91, 69.13, -1.2);
    	glVertex3f(66.32, 73.65, -1.2);
    	glVertex3f(75.36, 78.73, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(48.26, 63.77, -1.2);
    	glVertex3f(47.98, 70.54, -1.2);
    	glVertex3f(55.03, 66.59, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(48.26, 63.77, -1.2);
    	glVertex3f(55.03, 66.59, -1.2);
    	glVertex3f(54.75, 52.48, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(48.54, 46.56, -1.2);
    	glVertex3f(48.26, 64.05, -1.2);
    	glVertex3f(54.75, 52.48, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(48.54, 46.56, -1.2);
    	glVertex3f(54.75, 52.48, -1.2);
    	glVertex3f(54.47, 38.38, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(48.54, 38.66, -1.2);
    	glVertex3f(48.54, 46.84, -1.2);
    	glVertex3f(54.47, 38.38, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(60.4, 53.05, -1.2);
    	glVertex3f(57.29, 65.75, -1.2);
    	glVertex3f(60.96, 63.77, -1.2);
    	glVertex3f(61.24, 56.43, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(75.36, 78.73, -1.2);
    	glVertex3f(64.91, 69.13, -1.2);
    	glVertex3f(60.96, 55.3, -1.2);
    	glVertex3f(70.56, 62.08, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(71.97, 67.16, -1.2);
    	glVertex3f(75.36, 79.01, -1.2);
    	glVertex3f(76.48, 64.9, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(60.96, 55.3, -1.2);
    	glVertex3f(70.56, 62.08, -1.2);
    	glVertex3f(66.89, 45.99, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(58.14, 40.91, -1.2);
    	glVertex3f(60.96, 55.3, -1.2);
    	glVertex3f(66.89, 45.99, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(57.86, 38.09, -1.2);
    	glVertex3f(58.14, 40.91, -1.2);
    	glVertex3f(66.89, 45.99, -1.2);
    	glVertex3f(65.2, 37.25, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(70.28, 61.23, -1.2);
    	glVertex3f(71.97, 67.16, -1.2);
    	glVertex3f(76.48, 64.9, -1.2);
    	glVertex3f(73.38, 58.13, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(74.79, 84.09, -1.2);
    	glVertex3f(76.48, 64.62, -1.2);
    	glVertex3f(80.44, 72.8, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(74.79, 84.09, -1.2);
    	glVertex3f(80.44, 72.8, -1.2);
    	glVertex3f(93.13, 69.98, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(79.31, 101.3, -1.2);
    	glVertex3f(68.86, 108.35, -1.2);
    	glVertex3f(65.2, 97.91, -1.2);
    	glVertex3f(65.48, 91.7, -1.2);
    	glVertex3f(74.79, 84.09, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(92.29, 92.83, -1.2);
    	glVertex3f(79.31, 101.3, -1.2);
    	glVertex3f(74.79, 84.09, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(74.79, 84.09, -1.2);
    	glVertex3f(93.13, 69.98, -1.2);
    	glVertex3f(89.18, 85.22, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(92.29, 92.83, -1.2);
    	glVertex3f(74.79, 84.09, -1.2);
    	glVertex3f(89.18, 85.22, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(98.78, 77.03, -1.2);
    	glVertex3f(92.29, 92.55, -1.2);
    	glVertex3f(89.18, 85.22, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(102.45, 68.0, -1.2);
    	glVertex3f(98.78, 77.03, -1.2);
    	glVertex3f(89.18, 85.22, -1.2);
    	glVertex3f(93.13, 69.98, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(69.15, 56.43, -1.2);
    	glVertex3f(70.28, 61.23, -1.2);
    	glVertex3f(73.38, 58.13, -1.2);
    	glVertex3f(72.53, 56.43, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(79.02, 38.94, -1.2);
    	glVertex3f(72.53, 56.43, -1.2);
    	glVertex3f(69.15, 56.43, -1.2);
    	glVertex3f(65.2, 37.25, -1.2);
    	glVertex3f(73.38, 36.68, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(73.38, 36.68, -1.2);
    	glVertex3f(80.15, 39.22, -1.2);
    	glVertex3f(77.61, 35.84, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(102.45, 68.0, -1.2);
    	glVertex3f(80.44, 72.8, -1.2);
    	glVertex3f(72.53, 56.43, -1.2);
    	glVertex3f(84.95, 45.71, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(112.05, 48.25, -1.2);
    	glVertex3f(102.45, 68.0, -1.2);
    	glVertex3f(84.95, 45.71, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(101.88, 33.01, -1.2);
    	glVertex3f(112.05, 48.25, -1.2);
    	glVertex3f(84.95, 45.71, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(100.19, 31.04, -1.2);
    	glVertex3f(101.88, 33.01, -1.2);
    	glVertex3f(84.95, 45.71, -1.2);
    	glVertex3f(77.61, 35.84, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(73.38, 36.68, -1.2);
    	glVertex3f(86.08, 28.78, -1.2);
    	glVertex3f(100.19, 31.04, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(73.38, 36.68, -1.2);
    	glVertex3f(86.08, 28.78, -1.2);
    	glVertex3f(74.79, 25.96, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(91.16, 18.91, -1.2);
    	glVertex3f(100.19, 31.04, -1.2);
    	glVertex3f(86.08, 28.78, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(83.82, 16.65, -1.2);
    	glVertex3f(91.16, 18.91, -1.2);
    	glVertex3f(86.08, 28.78, -1.2);
    	glVertex3f(74.79, 25.96, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(70.56, 12.7, -1.2);
    	glVertex3f(83.82, 16.65, -1.2);
    	glVertex3f(74.79, 25.96, -1.2);
    	glVertex3f(53.62, 21.16, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(36.69, 39.79, -1.2);
    	glVertex3f(73.38, 36.68, -1.2);
    	glVertex3f(74.79, 25.96, -1.2);
    	glVertex3f(53.62, 21.16, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(50.24, 14.67, -1.2);
    	glVertex3f(70.56, 12.7, -1.2);
    	glVertex3f(53.62, 21.16, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(36.69, 39.79, -1.2);
    	glVertex3f(29.63, 33.01, -1.2);
    	glVertex3f(53.62, 21.16, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(22.58, 39.5, -1.2);
    	glVertex3f(29.63, 33.01, -1.2);
    	glVertex3f(36.69, 39.79, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(20.6, 30.47, -1.2);
    	glVertex3f(29.63, 16.93, -1.2);
    	glVertex3f(50.24, 14.67, -1.2);
    	glVertex3f(53.62, 21.16, -1.2);
    	glVertex3f(29.63, 33.01, -1.2);
    glEnd();
    glBegin(GL_POLYGON);
    	glVertex3f(11.29, 43.74, -1.2);
    	glVertex3f(20.6, 30.47, -1.2);
    	glVertex3f(29.63, 33.01, -1.2);
    	glVertex3f(22.58, 39.5, -1.2);
    glEnd();

	glFlush();
}

void reshape ( int width , int height )
{
	if (height==0) // Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION); // Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(0,160,0,160,-2,2);

	glMatrixMode(GL_MODELVIEW); // Seleccionamos Modelview Matrix
	glLoadIdentity();
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key)
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (700, 700);	// Tama�o de la Ventana
  glutInitWindowPosition (-1, -1);	//Posicion de la Ventana
  glutCreateWindow    ("Tarea 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc	  ( keyboard );	//Indicamos a Glut funci�n de manejo de teclado
  glutMainLoop        ( );          //

  return 0;
}
