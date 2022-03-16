/* MathPlus
# Version    : 1.0
# Description: MathPlus is a Header file containing extended math functions. Like math.h, you can include it as `#include "math+.h"`!
# Author     : KasRoudra
# Github     : https://github.com/KasRoudra
# Email      : kasroudrakrd@gmail.com
# Credits    : Programming Hero
# Date       : 26-11-2021
# Language   : C
# Header File/C Library
# If you copy, consider giving credit! We keep our code open source to help others
*/

float add(float x1, float x2){
    return x1+x2;
}
float subs(float x1, float x2){
    return x1-x2;
}
float mult(float x1, float x2){
    return x1*x2;
}
float divs(float x1, float x2){
    return x1/x2;
}
float modu(int x1, int x2){
    return x1%x2;
}
float topow(float x1, float x2){
    int r = x1;
    for(int i=1; i <= x2 ; ++i){
        r= r*i;
    }
    return r;
}

int pmck(int x1){
  int f = 0;
  for (int i = 2; i <= x1 / 2; ++i) {
    if (x1 % i == 0) {
      f = 1;
      break;
    }
  }
    if (f == 0){
        return 1;
    } else{
        return 0;
  }
}

int gcd(int x1, int x2){
    int i, r;
    int lar = (x1>x2)? x1: x2;
    int sml = (x1>x2)? x2: x1;
    for(i=sml;i>=1;i--){
        if (lar%i == 0 && sml%i == 0){
            r=i;
            break;
        }
    }
    return r;
}

int lcm(int x1, int x2){
    int i, r;
    int lar = (x1>x2)? x1: x2;
    int sml = (x1>x2)? x2: x1;
    for(i=lar;i<=x1*x2;i++){
        if (i%lar == 0 && i%sml == 0){
            r=i;
            break;
        }
    }
    return r;
}

int summ(int x1){
    int i, r;
    int k=0;
    for(i=1;i<=x1;i++){
        r=k+i;
        k=r;
    }
    return r;
}