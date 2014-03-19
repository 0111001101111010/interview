//based off of http://stackoverflow.com/questions/4421706/operator-overloading

#include <iostream>
#include <cstdlib>

class X{
std::string phrase = "helllllll yeah";
public:
	//constructor & Destructor
	const X(){};
	~X(){};
/*X& X::operator=(X rhs)
{
  swap(rhs);
  return *this;
}
*/

//input output
friend std::ostream& operator<<(std::ostream& os, const X& obj)
{
  // write obj to stream
  return os;
}
friend std::istream& operator>>(std::istream& is, X& obj)
{
  // read obj from stream
  if( false /* no valid object of T found in stream */ )
    is.setstate(std::ios::failbit);
  return is;
}
// add inline for outside of function otherwise friend
friend bool operator==(const X& lhs, const X& rhs){ /* do actual comparison */ }
// add inline for outside of function otherwise friend
friend bool operator!=(const X& lhs, const X& rhs){return !operator==(lhs,rhs);}
// add inline for outside of function otherwise friend
friend bool operator< (const X& lhs, const X& rhs){ /* do actual comparison */ }
// add inline for outside of function otherwise friend
friend bool operator> (const X& lhs, const X& rhs){return  operator< (rhs,lhs);}
// add inline for outside of function otherwise friend
friend bool operator<=(const X& lhs, const X& rhs){return !operator> (lhs,rhs);}
// add inline for outside of function otherwise friend
friend bool operator>=(const X& lhs, const X& rhs){return !operator< (lhs,rhs);}


//Unary arithmetic operators
	  X& operator++()
	  {
	    // do actual increment
	    return *this;
	  }
	  X operator++(int)
	  {
	    X tmp(*this);
	    operator++();
	    return tmp;
	  }
//Binary
	X& operator+=(const X& rhs)
	  {
	    // actual addition of rhs to *this
	    return *this;
	  }
	friend X operator+(X lhs, const X& rhs)
	{
	  lhs += rhs;
	  return lhs;
	}

};


int main(int argc, char const *argv[])
{
	/* code */
	X a;
	return 0;
}