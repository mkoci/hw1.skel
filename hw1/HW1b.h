// Copyright (C) 2017 by George Wolberg
//
// HW1b.h - Header file for HW1b class
//
// Written by: George Wolberg, 2017
// ======================================================================

#ifndef HW1B_H
#define HW1B_H


#include "HW.h"

// ----------------------------------------------------------------------
// standard include files
//

class HW1b : public HW 
{
	Q_OBJECT
public:
	HW1b(const QGLFormat &glf, QWidget *parent=0);	// constructor
	QGroupBox*	controlPanel	();		// create control panel
	void		reset		();		// reset parameters
	void		initBuffers	();		// init vertices and colors

public slots:
	void		changeTheta	(int);
	void		changeSubdiv	(int);
	void		changeTwist	(int);

protected:
	void		initializeGL	();		// init GL state
	void		resizeGL	(int, int);	// resize GL widget
	void		paintGL		();		// render GL scene

	void		divideTriangle	(vec2, vec2, vec2, int);
	void		triangle	(vec2, vec2, vec2);
	vec2		rotTwist	(vec2);

private:
<<<<<<< HEAD
=======
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
>>>>>>> origin/christine
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
<<<<<<< HEAD
=======
>>>>>>> master
>>>>>>> origin/christine
};

#endif // HW1B_H
