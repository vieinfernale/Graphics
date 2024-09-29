#include <iostream>
#include <math.h>

struct Vector3D
{
	float		x, y, z;                                // Vector's Components - V = (Vx, Vy, Vz)

	Vector3D(float a, float b, float c)                 // Constructor - Assignment
	{
		x = a;
		y = b;
		z = c;
	}

	float& operator [](int i) 
	{                        
		switch(i) 
		{
			case 0: return x; 
			case 1: return y; 
			case 2: return z; 
			default: throw "Index out of boundary";
		}
	}

	/* float& operator [](int i)                        // Overloaded Operator [] Address and Index
	{
		return ((&x)[i]);
	}

	const float& operator [](int i) const
	{
		return ((&x)[i]);
	}*/

	Vector3D& operator *=(float s)                      // Overloaded Operator *= Scalar Multiplication
	{
		x *= s;
		y *= s;
		z *= s;
		return (*this);
	}

	Vector3D& operator /=(float s)                      
	{
		s = 1.0F / s;
		x *= s;
		y *= s;
		z *= s;
		return (*this);
	}

	Vector3D& operator +=(const Vector3D& v)            // vii += v  (function)  vii   
	{
		x += v.x;
		y += v.y;
		z += v.z;
		return (*this);
	}

	Vector3D& operator -=(const Vector3D& v)
	{
		x -= v.x;
		y -= v.y;
		z -= v.z;
		return (*this);
	}
};






inline Vector3D operator *(const Vector3D& v, float s)
{
	return (Vector3D(v.x * s, v.y * s, v.z * s));
}

inline Vector3D operator /(const Vector3D& v, float s)
{
	s = 1.0F / s;
	return (Vector3D(v.x * s, v.y * s, v.z * s));
	//return (Vector3D(v.x / s, v.y / s, v.z / s));
}

inline float magnitude(const Vector3D& v)          
{
	return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}

inline Vector3D normalize(const Vector3D& v)
{
	return (Vector3D(v/magnitude(v)));
}

inline Vector3D operator -(const Vector3D& v)                   
{
	return (Vector3D(-v.x, -v.y, -v.z));
}

inline Vector3D operator +(const Vector3D& v, const Vector3D& vii)
{
	return (Vector3D(v.x + vii.x, v.y + vii.y, v.z + vii.z));
}

inline Vector3D operator -(const Vector3D& v, const Vector3D& vii)
{
	return (Vector3D(v.x - vii.x, v.y - vii.y, v.z - vii.z));
}






int main()
{	
	// Vector3D v; float v.x, v.y, v.z;
    Vector3D v(1, 2, 3); 

	// Components
    std::cout << v.x << " " << v.y << " " << v.z << "\n";

	// Index
	std::cout << v[0] << " " << v[1] << " " << v[2] << "\n";
    


	// Magnitude
	std::cout << magnitude(v) << std::endl;

	// Normalization (magnitude=1, direction)
	v = normalize(v);
	std::cout << v.x << " " << v.y << " " << v.z << "\n";
	std::cout << magnitude(v) << std::endl;

	// Opposite direction
	Vector3D vi = -v;
	std::cout << vi.x << " " << vi.y << " " << vi.z << "\n";



	// Multiplication
    v *= 10;
	std::cout << v.x << " " << v.y << " " << v.z << "\n";

    v /= 10;
	std::cout << v.x << " " << v.y << " " << v.z << "\n";

    Vector3D vii = v*2;
    std::cout << vii.x << " " << vii.y << " " << vii.z << "\n";

    vii = v/2;
    std::cout << vii.x << " " << vii.y << " " << vii.z << "\n";



	// Addition
	Vector3D viii(1, 2, 3);
	Vector3D viv(2, 3, 4);
	viv += viii; // viv = viv + viii
	std::cout << viv.x << " " << viv.y << " " << viv.z << "\n";

	Vector3D vv(1, 2, 3);
	Vector3D vvi(2, 3, 4);
	Vector3D vvii = vvi + vv;
	std::cout << vvii.x << " " << vvii.y << " " << vvii.z << "\n";
}