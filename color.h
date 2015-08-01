#ifndef COLOR_H
#define COLOR_H

template <class T>
class color
{
  private:
  T red;
  T green;
  T blue;
  T alpha;
  
  public:
  Color( T red, T green, T blue, T alpha );

  T getRed()
  {
    return red;
  }

  T getGreen()
  {
    return green;
  }

  T getBlue()
  {
    return blue;
  }
  
  void setRed( T red )
  {
    this->red = red;
  }

  void setGreen( T green )
  {
    this->green = green;
  }

  void setBlue( T blue )
  {
    this->blue = blue;
  }
}

Color::Color( T red = 0, T blue = 0, T green = 0, T alpha = 255 )
{
  this->red = red;
  this->blue = blue;
  this->green = green;
  this->alpha = alpha;
}
