#ifndef HW1B_H
#define HW1B_H

#include "HW.h"

typedef QVector2D vec2;
typedef QVector3D vec3;

class HW1b : public HW {
	Q_OBJECT
public:
	HW1b(const QGLFormat &glf, QWidget *parent = 0);
	QGroupBox*	controlPanel();


	public slots:

	void changeSubdiv(int value); //Slider calls his function to trigger dividing
	void changeTheta(int angle);
	void changeTwist(int state);




protected:
	void		initializeGL();
	void		resizeGL(int, int);
	void		paintGL();


private:
<<<<<<< HEAD

	void divide_triangle(vec2 a, vec2 b, vec2 c, int k);
	void triangle(vec2 a, vec2 b, vec2 c);
	vec2 twisting(vec2 point);
	void initPoint();


	int		 m_winW;
	int		 m_winH;
	float      ar;
	float		 maxW;
	float		 maxH;

	int m_subdivide;
	//bool m_changeColor;

	bool m_aspectCheck;
	float m_theta;



	std::vector<QVector2D> m_point;
	std::vector<QVector3D> m_color;




	QSlider *m_sliderDividing;
	QSpinBox *m_spinBoxDividing;

	QSlider *m_sliderTheta;
	QSpinBox *m_spinBoxTheta;

	QCheckBox *m_checkBoxTwist;




=======
	int		  m_winW;			// window width
	int		  m_winH;			// window height
	int		  m_twist;
	float	  m_theta;
	float     ar;
	float 	  maxH;
	float     maxW;
	int		  m_subdivisions;
	int		  m_updateColor;
	bool      m_aspectCheck;
	QSlider		 *m_sliderTheta;
	QSlider		 *m_sliderSubdiv;
	QSpinBox	 *m_spinBoxTheta;
	QSpinBox	 *m_spinBoxSubdiv;
	QCheckBox	 *m_checkBoxTwist;
	std::vector<vec2> m_points;
	std::vector<vec3> m_colors;
>>>>>>> master
};

#endif 