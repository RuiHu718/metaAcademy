/* 
 * TODO: put your own comments here. Also you should leave comments on
 * each of your methods.
 */

#include <math.h>
#include "recursion.h"
#include "map.h"
#include "vector.h"
#include "set.h"
#include "gwindow.h"
#include "gobjects.h"
#include "tokenscanner.h"
using namespace std;


int gcd(int a, int b) {
  // your code here
  cout << "[recursion gcd called]" << endl;
  return 0;
}

void serpinskii(GWindow &w, int leftX, int leftY, int size, int order) {
  // your code here
  cout << "[recursion serpinskii called]" << endl;
}

int floodFill(GBufferedImage& image, int x, int y, int newColor) {
  // your code here
  cout << "[recursion flood fill called]" << endl;  

  int currentColor = image.getRGB(x, y);

  if (newColor == currentColor) {
    return 0;
  } else {
    return myFloodFill(image, x, y, newColor, currentColor);
  }

}

int myFloodFill(GBufferedImage & image, int x, int y, int newColor, int oldColor) {
  int result = 0;
  int currentColor = image.getRGB(x, y);
  if ((!image.inBounds(x, y)) || (!(currentColor == oldColor))) {
    return 0;
  } else {
    image.setRGB(x, y, newColor);
    result++;
    return result + myFloodFill(image, x, y - 1, newColor, oldColor)
      + myFloodFill(image, x, y + 1, newColor, oldColor)
      + myFloodFill(image, x - 1, y, newColor, oldColor)
      + myFloodFill(image, x + 1, y, newColor, oldColor);
  }
}


void personalCurriculum(Map<string, Vector<string>> & prereqMap,string goal) {
  // your code here
  cout << "[recursion personal curriculum called]" << endl;
}

string generate(Map<string, Vector<string> > & grammar, string symbol) {
  // your code here
  cout << "[recursion generate called]" << endl;
  return "";
}
