#pragma once

#include<iostream>
#include<cmath>
///klasa opakowująca punkt 2D
class Point2D
{
  public:
  /*
  * @brief - konstruktor dwu-argumentowy
  * @param x,y - pierwsza i druga współrzedna  
  */
  Point2D(int x,int y);
  /*
  * @brief - metoda statyczna wypisujaca zawartość punktu klasy w której sie znajdujemy
  * @param point - obiekt którego zawartosc wypiszemy
  */
  static void PrintPoint(const Point2D point);
  /*
  * @brief - metoda statyczna wypisujaca parametr _y
  * @param point - obiekt którego parametr _y wypiszem
  */
  static void FunctionPrintY(const Point2D& point);
  /*
  * @brief - metoda wypisujaca zawartosc obiektu
  */
  void Print()const;
  /*
  * @brief - przeciązenie operatora porównania < 
  * @param temp - drugi obiekt z którym bedziemy dokonywac porównania
  */
  bool operator<(const Point2D & temp)const;
  /*
  * @brief - zwraca _x
  */
  int getX()const;
  /*
  * @brief - zwraca _y
  */
  int getY()const;
  private:
  /*
  * @param _x,_y,_dist - wspołrzedne x i y , oraz odległość od poczatku układu współrzednych
  */
  int _x;
  int _y;
  double _dist;
};
/// klasa bedąca funktorem 
class OrderAscX 
{
  public:
  bool operator()(const Point2D & x1,const Point2D &x2);
};
/// klasa bedąca funktorem 
class OrderDescY
{
  public:
  /*
  * @brief - porównuje parametr y dwóch klas Point2D
  * @param y1,y2 - obiekty klasy Point2D których parametry beda porównywane 
  */
  bool operator()(const Point2D & y1,const Point2D &y2);
};
/// funckja zwracająca maksymalna odległość według schematu
bool MaxDistanceAsc(const Point2D & p1, const Point2D &p2);
/*
* @brief - funkcja wypisujaca parametr _x obiektu point
* @param point - obiekt którego parametr zostanie wypisany
*/
void FunctionPrintX(const Point2D& point);