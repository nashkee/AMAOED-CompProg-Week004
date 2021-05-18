//Write a class that will represent Polygon.
//Consider the name, number of sides and color.
#include <string>
#include <sstream>

using namespace std;

class Polygon {
    public:
        string mName, mColor;
        short mSides;
        string getPolygon();

    Polygon(string name, string color, short sides){
        mName = name;
        mColor = color;
        mSides = sides;
        }
};
string Polygon::getPolygon(){
    ostringstream s;
        s << "Name  : " << mName << endl;
        s << "Color : " << mColor << endl;
        s << "Sides : " << mSides << endl;
        return s.str();
    }
