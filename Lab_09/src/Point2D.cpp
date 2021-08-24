#include"Point2D.h"

Point2D::Point2D(int x,int y):_x(x),_y(y)
{
  _dist = sqrt(pow(_x,2)+pow(_y,2));
}
int Point2D::getX()const
{
  return _x;
}
int Point2D::getY()const
{
  return _y;
}
void Point2D::PrintPoint(const Point2D point)
{
  point.Print();
}
void Point2D::FunctionPrintY(const Point2D& point)
{
  std::cout<<"Function print y="<<point._y<<std::endl;
}
bool Point2D::operator<(const Point2D & temp)const
{
  return _dist<temp._dist;
}
void Point2D::Print()const
{
  std::cout<<"Point coordinates ("<<_x<<", "<<_y<<") distance from origin: "<<_dist<<std::endl;
}
bool OrderAscX::operator()(const Point2D & x1,const Point2D &x2)
{
  return x1.getX()<x2.getX();
}
bool OrderDescY::operator()(const Point2D & y1,const Point2D &y2)
{
  return y1.getY()>y2.getY();
}
bool MaxDistanceAsc(const Point2D & p1, const Point2D &p2)
{
  int tmp1 = p1.getX()>p1.getY() ? p1.getX() : p1.getY();
  int tmp2 = p2.getX()>p2.getY() ? p2.getX() : p2.getY();
  return tmp1<tmp2;
}
void FunctionPrintX(const Point2D& point)
{
  std::cout<<"Function print x="<<point.getX()<<std::endl;
}