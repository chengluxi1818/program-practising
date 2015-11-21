/*
 * Basics.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */

/*
In general an abstract class is used to define an implementation and is intended to be inherited from by concrete classes.
It's a way of forcing a contract between the class designer and the users of that class.
If we wish to create a concrete class (a class that can be instantiated) from an abstract class we must declare
and define a matching member function for each abstract member function of the base class. Otherwise,
if any member function of the base class is left undefined, we will create a new abstract class (this could be useful sometimes).
Sometimes we use the phrase "pure abstract class," meaning a class that exclusively has pure virtual functions (and no data).
The concept of interface is mapped to pure abstract classes in C++, as there is no construction "interface" in C++ the same way that there is in Java.
*/

#include <iostream>

using namespace std;

//****************************************************** Abstraction **************************
//-----------------------------------------------------------------------------------------
/*
An abstract class is a class that is designed to be specifically used as a base class.
An abstract class contains at least one pure virtual function. You declare a pure virtual function by using a pure specifier (= 0) in the declaration of a virtual member function in the class declaration.
The following is an example of an abstract class:
*/
class AB {
public:
  virtual void f() = 0;
};

//-----------------------------------------------------------------------------------------
/*
Pure Abstract Classes[edit]
An abstract class is one in which there is a declaration but no definition for a member function.
The way this concept is expressed
in C++ is to have the member function declaration assigned to zero.
*/
class PureAbstractClass
{
public:
  virtual void AbstractMemberFunction() = 0;
};

//-----------------------------------------------------------------------------------------
/*
A pure Abstract class has only abstract member functions and no data or concrete member functions.
In general, a pure abstract class is used to define an interface
and is intended to be inherited by concrete classes.
It's a way of forcing a contract between the class designer and the users of that class.
The users of this class
must declare a matching member function for the class to compile.
*/
class DrawableObject
 {
  public:
    virtual void Draw(GraphicalDrawingBoard&) const = 0; //draw to GraphicalDrawingBoard
 };

 class Triangle : public DrawableObject
 {
 public:
   void Draw(GraphicalDrawingBoard&) const; //draw a triangle
 };

 class Rectangle : public DrawableObject
 {
 public:
   void Draw(GraphicalDrawingBoard&) const; //draw a rectangle
 };

 class Circle : public DrawableObject
 {
 public:
   void Draw(GraphicalDrawingBoard&) const; //draw a circle
 };

 typedef std::list<DrawableObject*> DrawableList;

 DrawableList drawableList;
 GraphicalDrawingBoard drawingBoard;

 drawableList.pushback(new Triangle());
 drawableList.pushback(new Rectangle());
 drawableList.pushback(new Circle());

 for(DrawableList::const_iterator iter = drawableList.begin(),
    endIter = drawableList.end();
    iter != endIter;
    ++iter)
 {
   DrawableObject *object = *iter;
   object->Draw(drawingBoard);
 }
}

//****************************************************** Encapsulation **************************
//-----------------------------------------------------------------------------------------
/*
 C++ supports the properties of encapsulation and data hiding through the creation of user-defined types,
 called classes. We already have studied that a class can contain private, protected and public members.
 By default, all items defined in a class are private. For example:
*/
 class Box
 {
    public:
       double getVolume(void)
       {
          return length * breadth * height;
       }
    private:
       double length;      // Length of a box
       double breadth;     // Breadth of a box
       double height;      // Height of a box
 };

 //****************************************************** Polymorphism **************************
 //-----------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      int area()
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};
class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      {
         cout << "Rectangle class area :" <<endl;
         return (width * height);
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      {
         cout << "Triangle class area :" <<endl;
         return (width * height / 2);
      }
};
// Main function for the program
int main( )
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // store the address of Rectangle
   shape = &rec;
   // call rectangle area.
   shape->area();

   // store the address of Triangle
   shape = &tri;
   // call triangle area.
   shape->area();

   return 0;
}

//****************************************************** Polymorphism **************************
//-----------------------------------------------------------------------------------------

