# Graphics

- Physically Based Rendering
- [Foundations of Game Engine](https://foundationsofgameenginedev.com/)
- [Math for Computer Graphics](https://mathfor3dgameprogramming.com/)

---

# IDE / Language
### Setup
- [Git](https://git-scm.com/docs/git) + [Visual Studio Code](https://code.visualstudio.com) + [C++ and MinGW-w64 in Visual Studio Code](https://code.visualstudio.com/docs/cpp/config-mingw)
### C++
- [cplusplus](https://cplusplus.com/doc/tutorial/)
- [cppreference](https://en.cppreference.com/w/)
- [GCC-minGW-w64](https://www.msys2.org/)

---

# Mathematics for Computer Graphics

## Vectors

### 3D Vector

#### N-dimensional vector

$V = (V_0, V_1, V_2, \dots V_{n-1})$

#### 3-dimensional vector

In Cartesian Coordinates, the numbers making up a 3-dimensional vector are called the x, y, and z vector's components because they correspond to distances measured parallel to the x, y, and z axes.

$V = (V_x, V_y, V_z)$

#### Data

```cpp
struct Vector3D {};               // Data Structure

float	x, y, z;                  // V = (Vx, Vy, Vz)
```

#### Constructor

```cpp
Vector3D(float a, float b, float c)   // Constructor - Assignment
{
		x = a;                        
		y = b;
		z = c;
}

Vector3D(float a, float b, float c) : x(a), y(b), z(c) {} // Member Initialize List - Initialization
```

#### Index

```cpp 
float& operator [](int i) 
{ 
	return ((&x)[i]); 
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
```
>``[ ]`` is accessing the value at the address of x ``&x`` + the offset given through the index ``i``.

>``(&x)[0] == x`` ``(&x)[1] == y`` ``(&x)[2] == z``

>``(&x)[i]`` = Access ``[ ]`` the value of ``Vector3D v[ ]`` at this address ``( )``.

 If the index changes to 1, you offset by one float, since float is the data type. The struct stores y after x, so in memory the address of y is the address of x + 1 float offset.



### Magnitude

#### Magnitude of an n-dimensional vector

$V = \sqrt[2]{\displaystyle\sum_{i=0}^{n-1} V_i^{2}}$

#### Magnitude of a 3-dimensional vector

$V = \sqrt[2]{V_x^2 + V_y^2 + V_z^2}$

```cpp
inline float magnitude(const Vector3D& v)          
{
	return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}
```



### Unit Vector

A unit vector is a vector with magnitude and direction divided by its own magnitude, yielding the direction and a magnitude of value 1.
The process of turning a vector into a unit vector is called ***normalization***, the vector is called a ***normalized*** vector.

$unit\ vector = \frac{V}{\| V \|}$

```cpp
inline Vector3D normalize(const Vector3D& v)
{
	return (Vector3D(v/magnitude(v)));
}
```



### Multiplication

It changes the Magnitude while keeping the Direction parallel to the original vector.
When the scalar is negative, the new vector points in the opposite direction.

$V(s) = (V_0(s) + V_1(s) + V_2(s) \dots + V_{n-1}(s))$

```cpp
Vector3D& operator *=(float s) // v *= s  (function)  v
	{
		x *= s;
		y *= s;
		z *= s;
		return (*this); // return objects (x, y, z)
	}
```

```cpp
inline Vector3D operator *(const Vector3D& v, float s)
{
	return (Vector3D(v.x * s, v.y * s, v.z * s));
}
```

``*this = Object`` and  ``this = &Object``.
The object's address (``&x``, ``&y``, ``&z``) of the ``struct`` is available from within the member function as the ``this`` pointer.
The expression ``return *this`` is commonly used to return the current object from a member function.
While the overload operator function goes inside ``struct``, the inline overload operator goes outside of ``struct``.



### Addition

$VI + VII = (VI_0 + VII_0, VI_1 + VII_1, VI_2 + VII_2 \dots VI_{n-1} + VII_{n-1})$

$VI - VII = (VI_0 - VII_0, VI_1 - VII_1, VI_2 - VII_2 \dots VI_{n-1} - VII_{n-1})$

```cpp
Vector3D& operator +=(const Vector3D& v)  // vii += v  (function)  vii  
	{
		x += v.x;
		y += v.y;
		z += v.z;
		return (*this);
	}
```

```cpp
inline Vector3D operator +(const Vector3D& v, const Vector3D& vii)   // viii = v + vii
{
	return (Vector3D(v.x + vii.x, v.y + vii.y, v.z + vii.z));
}
```
